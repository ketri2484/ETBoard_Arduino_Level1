/******************************************************************************************
 * FileName     : 08._button_all_state.Ex
 * Description  : 모든 버튼 눌렀다, 뗐다 해보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     :
******************************************************************************************/

int button_red = D6;                                     // 빨강 버튼 지정
int button_blue = D7;                                    // 파랑 버튼 지정
int button_green = D8;                                   // 초록 버튼 지정
int button_yellow = D9;                                  // 노랑 버튼 지정
int button_red_state = 0;                                // 빨강 버튼 상태 설정
int button_blue_state = 0;                               // 파랑 버튼 상태 설정
int button_green_state = 0;                              // 초록 버튼 상태 설정
int button_yellow_state = 0;                             // 노랑 버튼 상태 설정

void setup() {
  pinMode(button_red, INPUT);                            // 빨강 버튼 입력으로 설정
  pinMode(button_blue, INPUT);                           // 파랑 버튼 입력으로 설정
  pinMode(button_green, INPUT);                          // 초록 버튼 입력으로 설정
  pinMode(button_yellow, INPUT);                         // 노랑 버튼 입력으로 설정

  Serial.begin(115200);                                  // 시리얼 통신 설정
}

void loop() {
  button_red_state = digitalRead(button_red);            // 빨강 버튼 상태 값을 저장
  button_blue_state = digitalRead(button_blue);          // 파랑 버튼 상태 값을 저장
  button_green_state = digitalRead(button_green);        // 초록 버튼 상태 값을 저장
  button_yellow_state = digitalRead(button_yellow);      // 노랑 버튼 상태 값을 저장
  
  if(button_red_state == LOW){                           // 빨강 버튼을 누르면
    Serial.println("빨강 버튼이 눌림");                  // 시리얼 모니터에 "빨강 버튼이 눌림" 출력
  }

  if(button_blue_state == LOW){                          // 파랑 버튼을 누르면
    Serial.println("파랑 버튼이 눌림");                  // 시리얼 모니터에 "파랑 버튼이 눌림" 출력
  }

  if(button_green_state == LOW){                         // 초록 버튼을 누르면
    Serial.println("초록 버튼이 눌림");                  // 시리얼 모니터에 "초록 버튼이 눌림" 출력
  }

  if(button_yellow_state == LOW){                        // 노랑 버튼을 누르면
    Serial.println("노랑 버튼이 눌림");                  // 시리얼 모니터에 "노랑 버튼이 눌림" 출력
  }
  delay(100);                                             // 0.1초 기다리기
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
