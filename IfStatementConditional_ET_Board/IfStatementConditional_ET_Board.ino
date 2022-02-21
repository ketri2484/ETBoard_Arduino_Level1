
const int analogPin = A0;    // 가변저항(아날로그) : A0
const int ledPin = D2;       // 빨강 LED : D2
const int threshold = 500;   // 아날로그 센서값 중 임의의 값 500

void setup() {
  
  pinMode(ledPin, OUTPUT);  // 빨강 LED 출력모드 설정
  Serial.begin(9600);
}

void loop() {
 
  int analogValue = analogRead(analogPin);  // 아날로그 센서 값 읽어서 변수에 저장

 
  if (analogValue > threshold) { // 아날로그 센서값이 threhold 이상이면
    digitalWrite(ledPin, HIGH);  // LED 켜짐
  } else {
    digitalWrite(ledPin, LOW);   // LED 꺼짐
  }

 
  Serial.println(analogValue); // 아날로그 센서 값 출력
  delay(1);                    // 0.001초 기다림
}



//┌────────────────────────────────┐
//│                                                      │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr         │
//│                                                      │ 
//└────────────────────────────────┘
