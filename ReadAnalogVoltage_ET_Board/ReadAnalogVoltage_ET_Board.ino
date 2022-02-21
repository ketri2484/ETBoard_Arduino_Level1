
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);              // 아날로그 센서 값을 읽어 sensorValue에 저장
  float voltage = sensorValue * (5.0 / 1023.0);  // 읽은 값을 전압 값으로 계산
  Serial.println(voltage);                       // 전압 값 출력
}



//┌────────────────────────────────┐
//│                                                      │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr         │
//│                                                      │ 
//└────────────────────────────────┘
