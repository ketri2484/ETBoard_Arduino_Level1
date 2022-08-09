/******************************************************************************************
 * FileName     : DigitalInputPullup_ET_Board.ino
 * Description  : 플업 기능을 이용한 LED 켜기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.21
 * Reference    : 
 * Modified     : 2022.04.21 : LEH : 헤더 수정, 소스 크린징
******************************************************************************************/

void setup() {
  Serial.begin(115200);
  
  pinMode(D6, INPUT_PULLUP);        // 빨강 버튼 pullup을 입력모드 설정
  pinMode(D2, OUTPUT);              // LED 출력모드 설정

}

void loop() {
  int sensorVal = digitalRead(D6);  // 버튼의 디지털 값을 변수에 저장
  Serial.println(sensorVal);        // 변수를 출력

  
  if(sensorVal == HIGH) {          // 변수가 HIGH면
    digitalWrite(D2, LOW);          // LED 끄기
  } else{                          // 아니면
    digitalWrite(D2, HIGH);         // LED 켜기
  }
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
