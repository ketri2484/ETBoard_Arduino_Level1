/******************************************************************************************
 * FileName     : 03._led_all_blink
 * Description  : 모든 LED 켰다 껐다 해 보기
 * Author       : 오경석
 * Created Date : 2023.10.24
 * Reference    :
 * Modified     : 2024.03.22 : PEJ : 주석 수정
******************************************************************************************/


// global variable
int led_red = D2;                        // 빨강 LED 핀 지정
int led_blue = D3;                       // 파랑 LED 핀 지정
int led_green = D4;                      // 초록 LED 핀 지정 
int led_yellow = D5;                     // 노랑 LED 핀 지정                          


// setup
void setup() {
  pinMode(led_red, OUTPUT);              // 빨강 LED를 출력 모드로 설정
  pinMode(led_blue, OUTPUT);             // 파랑 LED를 출력 모드로 설정
  pinMode(led_green, OUTPUT);            // 초록 LED를 출력 모드로 설정
  pinMode(led_yellow, OUTPUT);           // 노랑 LED를 출력 모드로 설정
}


// main loop
void loop() {
  digitalWrite(led_red, HIGH);           // 빨강 LED 켜기
  digitalWrite(led_blue, HIGH);          // 파랑 LED 켜기
  digitalWrite(led_green, HIGH);         // 초록 LED 켜기
  digitalWrite(led_yellow, HIGH);        // 노랑 LED 켜기
  delay(2000);                           // 2초 기다리기

  digitalWrite(led_red, LOW);            // 빨강 LED 끄기
  digitalWrite(led_blue, LOW);           // 파랑 LED 끄기
  digitalWrite(led_green, LOW);          // 초록 LED 끄기
  digitalWrite(led_yellow, LOW);         // 노랑 LED 끄기
  delay(2000);                           // 2초 기다리기
}


//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
