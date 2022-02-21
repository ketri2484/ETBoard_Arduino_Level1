
const char buttonPin = D6;     // 빨강 버튼 : 15번
const char ledPin = D2;        // 빨강 LED : 27번

// variables will change:
int buttonState = 0;           // 빨강 버튼 상태를 0으로 초기화

void setup() {
  pinMode(ledPin, OUTPUT);     // 빨강 LED 출력모드 설정
  pinMode(buttonPin, INPUT);   // 빨강 버튼 입력모드 설정
}

void loop() {
  buttonState = digitalRead(buttonPin);  // 빨강 버튼 값 읽기

  if (buttonState == HIGH) {
   
    digitalWrite(ledPin, HIGH);  // 버튼을 누르면 LED가 켜짐
  } else {
    
    digitalWrite(ledPin, LOW);  // 버튼을 누르지 않으면 LED가 꺼짐
  }

}



//┌────────────────────────────────┐
//│                                                      │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr         │
//│                                                      │ 
//└────────────────────────────────┘
