/******************************************************************************************
 * FileName     : ReadAnalogVoltage_ET_Board.ino
 * Description  : 아날로그 전압 읽기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.21
 * Reference    : 
 * Modified     : 2022.04.21 : LEH : 헤더 수정, 소스 크린징
******************************************************************************************/

void setup() {
  Serial.begin(115200);
}

void loop() {
  int sensorValue = analogRead(A0);              // 아날로그 센서 값을 읽어 sensorValue에 저장
  float voltage = sensorValue * (5.0 / 1023.0);  // 읽은 값을 전압 값으로 계산
  Serial.println(voltage);                       // 전압 값 출력
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
