/******************************************************************************************
 * FileName     : 03._if_led_control_3
 * Description  : 조건문 if를 이용하여 LED 제어해 보기_3
 * Description  : data의 숫자에 따라 다른 LED 켜 보기
 * Author       : 박은정
 * Created Date : 2023.03.27
 * Reference    :
 * Question     : data의 값이 달라진다면 어떻게 될까요?
 * Modified     :
******************************************************************************************/


// global variable
int led_red = D2;                         // 빨강 LED 핀 지정
int led_blue = D3;                        // 파랑 LED 핀 지정
int led_green = D4;                       // 초록 LED 핀 지정
int led_yellow = D5;                      // 노랑 LED 핀 지정

int data = 50;                            // data 변수에 50 저장


// setup
void setup() {
  pinMode(led_red, OUTPUT);               // 빨강 LED를 출력 모드로 설정
  pinMode(led_blue, OUTPUT);              // 파랑 LED를 출력 모드로 설정
  pinMode(led_green, OUTPUT);             // 초록 LED를 출력 모드로 설정
  pinMode(led_yellow, OUTPUT);            // 노랑 LED를 출력 모드로 설정
}


// main loop
void loop() {
  if(data < 100) {                        // data의 값이 100보다 작다면
    digitalWrite(led_red, HIGH);          // 빨강 LED 켜기
    digitalWrite(led_blue, LOW);          // 파랑 LED 끄기
    digitalWrite(led_green, LOW);         // 초록 LED 끄기
    digitalWrite(led_yellow, LOW);        // 노랑 LED 끄기
  }
  else if(data < 200) {                   // data의 값이 200보다 작다면
    digitalWrite(led_red, LOW);           // 빨강 LED 끄기
    digitalWrite(led_blue, HIGH);         // 파랑 LED 켜기
    digitalWrite(led_green, LOW);         // 초록 LED 끄기
    digitalWrite(led_yellow, LOW);        // 노랑 LED 끄기
  }
  else if(data < 300) {                   // data의 값이 300보다 작다면
    digitalWrite(led_red, LOW);           // 빨강 LED 끄기
    digitalWrite(led_blue, LOW);          // 파랑 LED 끄기
    digitalWrite(led_green, HIGH);        // 초록 LED 켜기
    digitalWrite(led_yellow, LOW);        // 노랑 LED 끄기
  }
  else {                                  // data의 값이 300보다 같거나 크다면
    digitalWrite(led_red, LOW);           // 빨강 LED 끄기
    digitalWrite(led_blue, LOW);          // 파랑 LED 끄기
    digitalWrite(led_green, LOW);         // 초록 LED 끄기
    digitalWrite(led_yellow, HIGH);       // 노랑 LED 켜기
  }
}


//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
