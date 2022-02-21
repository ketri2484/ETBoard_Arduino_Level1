
const int ledPin = D2; // 빨강 LED : D2
int incomingByte;      // 시리얼 모니터에서 읽어오는 변수

void setup() {
  
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT); // LED 출력모드 설정

}

void loop() {
 
  if (Serial.available() > 0) {
    
    incomingByte = Serial.read(); // 시리얼 모니터 읽기
   
    if (incomingByte == 'T') {     // 'T' 입력시 
      digitalWrite(ledPin, HIGH);  // LED ON
      Serial.println("LED가 켜집니다. (LED 상태 = True)");
    }
    if (incomingByte == 'F') {    // 'F' 입력시 
      digitalWrite(ledPin, LOW);  // LED OFF
      Serial.println("LED가 꺼집니다. (LED 상태 = False)");
    }
  }
}

//┌────────────────────────────────┐
//│                                                      │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr         │
//│                                                      │ 
//└────────────────────────────────┘
