
void setup() {
 
  Serial.begin(9600);
  
  pinMode(D6, INPUT_PULLUP); // 빨강 버튼 pullup을 입력모드 설정
  pinMode(D2, OUTPUT);       // LED 출력모드 설정

}

void loop() {
  int sensorVal = digitalRead(D6); // 버튼의 디지털 값을 변수에 저장
  Serial.println(sensorVal);       // 변수를 출력

  
  if (sensorVal == HIGH) {  // 변수가 HIGH면
    digitalWrite(D2, LOW);  // LED 끄기
  } else {                  // 아니면
    digitalWrite(D2, HIGH); // LED 켜기
  }
}



//┌────────────────────────────────┐
//│                                                      │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr         │
//│                                                      │ 
//└────────────────────────────────┘
