/******************************************************************************************
 * FileName     : 03._led_red_and_blue_blink
 * Description  : 빨강, 파랑 LED 켰다 껐다 해 보기
 * Author       : 오경석
 * Created Date : 2023.10.24
 * Reference    :
 * Modified     :
******************************************************************************************/

int led_red = D2;                         // 빨강 LED 지정
int led_blue = D3;                        // 파랑 LED 지정

void setup() {              
  pinMode(led_red, OUTPUT);               // 빨강 LED 출력으로 설정
  pinMode(led_blue, OUTPUT);              // 파랑 LED 출력으로 설정
}

void loop() {
  digitalWrite(led_red, HIGH);            // 빨강 LED 켜기
  digitalWrite(led_blue, HIGH);           // 파랑 LED 켜기
  delay(2000);                            // 2초 기다리기

  digitalWrite(led_red, LOW);             // 빨강 LED 끄기
  digitalWrite(led_blue, LOW);            // 파랑 LED 끄기
  delay(2000);                            // 2초 기다리기
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
