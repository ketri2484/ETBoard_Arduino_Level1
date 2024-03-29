/******************************************************************************************
 * FileName     : 02._button_two_status
 * Description  : 초록, 노랑 버튼의 값을 출력해 보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     : 2024.03.25 : PEJ : 파일명, 주석 수정
******************************************************************************************/


// global variable
int button_green = D8;                                       // 초록 버튼 핀 지정
int button_yellow = D9;                                      // 노랑 버튼 핀 지정


// setup
void setup() {
  pinMode(button_green, INPUT);                              // 초록 버튼을 입력 모드로 설정
  pinMode(button_yellow, INPUT);                             // 노랑 버튼을 입력 모드로 설정

  Serial.begin(115200);                                      // 시리얼 통신 속도 설정
}


// main loop
void loop() {
  int button_green_value = digitalRead(button_green);        // 초록 버튼의 값을 저장
  int button_yellow_value = digitalRead(button_yellow);      // 노랑 버튼의 값을 저장

  if (button_green_value == LOW ) {                          // 초록 버튼의 값이 LOW라면
    // 시리얼 모니터에 "초록 버튼이 눌림" 출력
    Serial.println("초록 버튼이 눌림");
  }

  if (button_yellow_value == LOW) {                          // 노랑 버튼의 값이 LOW라면
    // 시리얼 모니터에 "노랑 버튼이 눌림" 출력
    Serial.println("노랑 버튼이 눌림");
  }

  delay(100);                                                // 0.1초 기다리기
}


//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
