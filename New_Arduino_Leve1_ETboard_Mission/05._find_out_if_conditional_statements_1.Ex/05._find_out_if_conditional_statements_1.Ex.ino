/******************************************************************************************
 * FileName     : 05._find_out_if_conditional_statements_1.Ex
 * Description  : if조건문을 이용하여 LED 켜지게 해보기_1
 * Description  : A 값이 LOW 이면 빨강,  HIGH 이면 파랑 LED 켜지게 해보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Question     : A 값에 HIGH를 넣으면 어떻게 될까요?       
 * Modified     :
******************************************************************************************/

int led_red = D2;                          // 빨강 LED 지정
int led_blue = D3;                         // 파랑 LED 지정
int A = LOW;                               // 변수 A에 문자 LOW 넣기

void setup() {
  pinMode(led_red, OUTPUT);                // 빨강 LED를 출력으로 설정
  pinMode(led_blue, OUTPUT);               // 파랑 LED를 출력으로 설정
}

void loop() {
  // A값이 LOW 와 같으면 빨강색 LED 켜기

  if(A == LOW){                             // A값이 LOW 와 같으면
    digitalWrite(led_red, HIGH);            // 빨강 LED 켜기
    digitalWrite(led_blue, LOW);            // 파랑 LED 끄기
  }

  // A값이 HIGH 와 같으면 파랑색 LED 켜기
  
  if(A == HIGH){                             // A값이 HIGH 와 같으면
    digitalWrite(led_red, LOW);              // 빨강 LED 끄기
    digitalWrite(led_blue, HIGH);            // 파랑 LED 켜기
  }
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
