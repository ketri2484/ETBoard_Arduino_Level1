/******************************************************************************************
 * FileName     : ReadAnalogVoltage_ET_Board_EX.ino
 * Description  : 전압 범위 맞추기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.08. 09
 * Reference    : 
 * Modified     : 
******************************************************************************************/

void setup() {
  Serial.begin(115200);
}

void loop() {
  int sensorValue = analogRead(A0);              // 아날로그 센서 값을 읽어 sensorValue에 저장
  float voltage = sensorValue * (3.3 / 4095.0);  // 읽은 값을 전압 값으로 계산
  Serial.println(voltage);                       // 전압 값 출력
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
