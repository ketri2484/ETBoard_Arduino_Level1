/******************************************************************************************
 * FileName     : 02._if_led_control_2
 * Description  : 조건문 if를 이용하여 LED 제어해 보기_2
 * Description  : data의 값이 100보다 크면 빨강 LED, 150보다 크면 파랑 LED 켜지게 해 보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Question     : data의 값이 150보다 크다면 어떻게 될까요?  
 * Modified     : 2024.03.27 : 파일명, 코드, 주석 수정
******************************************************************************************/


// global variable
int led_red = D2;                         // 빨강 LED 핀 지정
int led_blue = D3;                        // 파랑 LED 핀 지정

int data = 101;                           // data 변수에 101 저장


// setup
void setup() {
  pinMode(led_red, OUTPUT);               // 빨강 LED를 출력 모드로 설정
  pinMode(led_blue, OUTPUT);              // 파랑 LED를 출력 모드로 설정
}


// main loop
void loop() {
  if(data > 100) {                        // data의 값이 100보다 크다면
    digitalWrite(led_red, HIGH);          // 빨강 LED 켜기
    digitalWrite(led_blue, LOW);          // 파랑 LED 끄기
  }

  if(data >150) {                         // data의 값이 150보다 크다면
    digitalWrite(led_red, LOW);           // 빨강 LED 끄기
    digitalWrite(led_blue, HIGH);         // 파랑 LED 켜기
  }
}


//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
