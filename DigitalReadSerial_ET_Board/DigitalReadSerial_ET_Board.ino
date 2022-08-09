/******************************************************************************************
 * FileName     : DigitalReadSerial_ET_Board.ino
 * Description  : 디지털 신호 확인하기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.21
 * Reference    : 
 * Modified     : 2022.04.21 : LEH : 헤더 수정, 소스 크린징
******************************************************************************************/

int pushButton = D6;                          // ET보드의 빨간 버튼 : D6
void setup() {
  Serial.begin(115200);
  pinMode(pushButton, INPUT);                 // 버튼 입력모드 설정
}

void loop() {
  int buttonState = !digitalRead(pushButton); // 버튼 누르면 '0' 또는 '1'을 buttonState에 저장
  Serial.println(buttonState);                // '0' 또는 '1' 출력
  delay(1);                                   // 0.001초 기다림
  
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
