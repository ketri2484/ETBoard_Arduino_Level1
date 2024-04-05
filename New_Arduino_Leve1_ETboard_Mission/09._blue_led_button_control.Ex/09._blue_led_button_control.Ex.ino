/******************************************************************************************
 * FileName     : 09._blue_led_button_control.Ex
 * Description  : 파랑 버튼 눌러서 파랑 LED 켜 보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     :
******************************************************************************************/

int led_blue = D3;                                     // 파랑 LED 지정
int button_blue = D7;                                  // 파랑 버튼 지정
int button_blue_state = 0;                             // 파랑 버튼 상태 설정

void setup() {
  pinMode(led_blue, OUTPUT);                           // 파랑 LED를 출력으로 설정
  pinMode(button_blue, INPUT);                         // 파랑 버튼을 입력으로 설정
}

void loop() {
  button_blue_state = digitalRead(button_blue);        // 파랑 버튼의 상태 값 저장

  if(button_blue_state == LOW){                        // 파랑 버튼을 누르면
    digitalWrite(led_blue, HIGH);                      // 파랑 LED 켜기
  }

  if(button_blue_state == HIGH){                       // 파랑 버튼을 누르지 않으면
    digitalWrite(led_blue, LOW);                       // 파랑 LED 끄기
  }
  delay(100);                                          // 0.1초 기다리기
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
