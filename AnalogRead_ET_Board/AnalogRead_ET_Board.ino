 /******************************************************************************************
 * FileName     : AnalogRead_ET_Board.ino
 * Description  : 아날로그 신호 확인하기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.20
 * Reference    : 
 * Modified     : 2022.04.20 : LEH : 헤더 수정, 소스 크린징
******************************************************************************************/

void setup() {
  Serial.begin(115200);
}
 
void loop() {
int sensorValue = analogRead(A0);      // A0에 연결된 가변저항의 값을 저장합니다. 
  Serial.println(sensorValue);         // 시리얼 모니터에 가변저항의 값을 보여줍니다.
 
  delay(1);
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
