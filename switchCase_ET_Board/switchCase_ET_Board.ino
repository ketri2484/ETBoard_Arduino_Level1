
const int sensorMin = 0;       // 최소값 설정
const int sensorMax = 2400;    // 최대값 설정

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorReading = analogRead(A0);// 아날로그 센서 값 읽어서 변수에 저장
  
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3); //0~2400까이 사이에서 4개의 범위 정하기

  switch (range) { // 범위(0~3)마다 단어 설정하기
    case 0:    // your hand is on the sensor
      Serial.println("매우 작다"); // 범위 0 이면 매우 작다 출력
      break;
    case 1:    // your hand is close to the sensor
      Serial.println("작다"); // 범위 1 이면 작다 출력
      break;
    case 2:    // your hand is a few inches from the sensor
      Serial.println("크다");  // 범위 2 이면 크다 출력
      break;
    case 3:    // your hand is nowhere near the sensor
      Serial.println("매우 크다"); // 범위 3 이면 매우 크다 출력
      break;
  }
  delay(1);        // 0.001초 기다리기
}


//┌────────────────────────────────┐
//│                                                      │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr         │
//│                                                      │ 
//└────────────────────────────────┘
