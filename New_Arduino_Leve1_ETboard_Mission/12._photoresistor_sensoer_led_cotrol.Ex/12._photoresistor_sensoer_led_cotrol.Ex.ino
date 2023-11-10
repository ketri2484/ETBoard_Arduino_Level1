/******************************************************************************************
 * FileName     : 12._photoresistor_sensoer_led_cotrol.Ex
 * Description  : 조도 센서 값이 500 이하이면 순차적으로 LED 켜지게 해보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     :
******************************************************************************************/

int sensor = A1;                                   // 조도 센서 지정
int led_red = D2;                                  // 빨강 LED 지정
int led_blue = D3;                                 // 파랑 LED 지정
int led_green = D4;                                // 초록 LED 지정
int led_yellow = D5;                               // 노랑 LED 지정
int sensor_result = 0;                             // 조도 센서 결과 값 설정

void setup() {
  pinMode(led_red, OUTPUT);                        // 빨강 LED를 출력으로 설정
  pinMode(led_blue, OUTPUT);                       // 파랑 LED를 출력으로 설정
  pinMode(led_green, OUTPUT);                      // 초록 LED를 출력으로 설정
  pinMode(led_yellow, OUTPUT);                     // 노랑 LED를 출력으로 설정

  Serial.begin(115200);                            // 시리얼 통신 설정
}

void loop() {
  sensor_result = analogRead(sensor);              // 조도 센서 결과 값 저장

  Serial.println(sensor_result);                   // 시리얼 모니터에 조도 센서 결과 값 출력 

  if(sensor_result < 600){                         // 조도 센서 결과 값이 600보다 작으면
    digitalWrite(led_red, HIGH);                   // 빨강 LED 켜기
    delay(1000);                                   // 1초 기다리기
    digitalWrite(led_green, HIGH);                 // 초록 LED 켜기
    delay(1000);                                   // 1초 기다리기
    digitalWrite(led_yellow, HIGH);                // 노랑 LED 켜기
    delay(1000);                                   // 1초 기다리기
    digitalWrite(led_blue, HIGH);                  // 파랑 LED 켜기
    delay(1000);                                   // 1초 기다리기
  }

  if(sensor_result > 600){                         // 조도 센서 결과 값이 600보다 크면
    digitalWrite(led_red, LOW);                    // 빨강 LED 끄기
    digitalWrite(led_blue, LOW);                   // 파랑 LED 끄기
    digitalWrite(led_green, LOW);                  // 초록 LED 끄기
    digitalWrite(led_yellow, LOW);                 // 노랑 LED 끄기
  }

  delay(100);                                      // 0.1초 기다리기
}
//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
