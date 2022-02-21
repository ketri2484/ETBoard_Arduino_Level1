void setup() {
  Serial.begin(9600);
 
  // LED들을 출력으로 정하기
  for (int thisPin = 12; thisPin < 28; thisPin++) { 
    pinMode(thisPin, OUTPUT); // LED 출력모드 설정
  }
}
 
void loop() {
  // 시리얼 모니터 입력 값 읽기
  if (Serial.available() > 0) { 
    int inByte = Serial.read(); // 시리얼 모니터 입력 값 읽기
    
    switch (inByte) {
      case 'r': // r 입력시
      case 'R': // R 입력시
        digitalWrite(D2, HIGH); // 빨강(Red) LED 켜짐
        Serial.println("입력 받은 신호는 빨강(Red)입니다.");
        delay(1000);
        break;
      case 'b': // b 입력시
      case 'B': // B 입력시
        digitalWrite(D3, HIGH); // 파랑(Blue) LED 켜짐
        Serial.println("입력 받은 신호는 파랑(Blue)입니다.");
        delay(1000);
        break;
      case 'g': // g 입력시
      case 'G': // G 입력시
        digitalWrite(D4, HIGH); // 초록(Green) LED 켜짐
        Serial.println("입력 받은 신호는 초록(Green)입니다.");
        delay(1000);
        break;
      case 'y': // d 입력시
      case 'Y': // d 입력시
        digitalWrite(D5, HIGH); // 노랑(Yellow) LED 켜짐
        Serial.println("입력 받은 신호는 노랑(Yellow)입니다.");
        delay(1000);
        break;
      default: // 그 외 다른거 입력시
        // 모든 LED 꺼짐
        for (int thisPin = 12; thisPin < 28; thisPin++) { 
          digitalWrite(thisPin, LOW);
        }
    }
  }
}


//┌────────────────────────────────┐
//│                                                      │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr         │
//│                                                      │ 
//└────────────────────────────────┘
