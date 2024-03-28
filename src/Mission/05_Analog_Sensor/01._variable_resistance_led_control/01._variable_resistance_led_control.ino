/******************************************************************************************
 * FileName     : 01._variable_resistance_led_control
 * Description  : 가변저항 값에 따라 LED 켰다 꺼 보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     : 2024.03.25 : PEJ : 코드 수정, 딜레이 추가
******************************************************************************************/


// global variable
int sensor = A0;                                     // 가변저항 핀 지정

int led_red = D2;                                    // 빨강 LED 핀 지정


// setup
void setup() {
  pinMode(led_red, OUTPUT);                          // 빨강 LED를 출력 모드로 설정

  Serial.begin(115200);                              // 시리얼 통신 설정
}


// main loop
void loop() {
  int sensor_result = analogRead(sensor);            // 가변저항 값 저장

  Serial.println(sensor_result);                     // 시리얼 모니터에 가변저항 값 출력 

  if(sensor_result < 1000) {                         // 가변저항의 값이 1000 보다 작으면
    digitalWrite(led_red, HIGH);                     // 빨강 LED 켜기
  }
  else {
    digitalWrite(led_red, LOW);                      // 빨강 LED 끄기
  }

  delay(100);                                        // 0.1초 기다리기
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
