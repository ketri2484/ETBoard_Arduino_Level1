/******************************************************************************************
 * FileName     : 06._find_out_if_conditional_statements_2.Ex
 * Description  : if 조건문을 사용하여 LED 켜지게 해 보기_2
 * Description  : A 값이 100 보다 크면 빨강, 150보다 크면 파랑 LED 켜지게 해보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Question     : A에 151 넣으면 어떻게 될까요?
 * Modified     :
******************************************************************************************/

int led_red  = D2;                        // 빨강 LED 지정
int led_blue = D3;                        // 파랑 LED 지정
int A = 101;                              // 변수 A에 숫자 101 넣기

void setup() {                
  pinMode(led_red, OUTPUT);               // 빨강 LED를 출력으로 설정
  pinMode(led_blue, OUTPUT);              // 파랑 LED를 출력으로 설정
}

void loop() {
  // A값이 100 보다 크면 빨강 LED가 켜지게 하기

  if(A > 100){                            // A값이 100 보다 크면
    digitalWrite(led_red, HIGH);          // 빨강 LED 켜기
    digitalWrite(led_blue, LOW);          // 파랑 LED 끄기
  }

  // A값이 150 보다 크면 파랑 LED 켜지게 하기
  
  if(A > 150){                            // A값이 150보다 크면
    digitalWrite(led_red, LOW);           // 빨강 LED 끄기
    digitalWrite(led_blue, HIGH);         // 파랑 LED 켜기
  }
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
