
void setup() {
  // D2를 LED 출력모드 설정
  pinMode(D2, OUTPUT);
}

void loop() {
  // LED를 켬
  digitalWrite(D2, HIGH);
  // 1초 기다림
  delay(1000);
  
  // LED를 켬
  digitalWrite(D2, LOW);
  // 1초 기다림
  delay(1000);
  
}

//┌────────────────────────────────┐
//│                                                      │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr         │
//│                                                      │ 
//└────────────────────────────────┘
