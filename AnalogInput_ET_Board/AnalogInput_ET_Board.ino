/******************************************************************************************
 * FileName     : AnalogInput_ET_Board.ino
 * Description  : 가변저항의 값에 따라 LED 깜빡이는 시간의 변화 확인
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.20
 * Reference    : 
 * Modified     : 2022.04.20 : LEH : 헤더 수정, 소스 크린징
******************************************************************************************/

int sensorPin = A0;                    // 가변저항(아날로그) : A0
int ledPin = D2;                       // 빨강 LED : D2
int sensorValue = 0;                   // 아날로그 센서 값 변수

void setup() {
  pinMode(ledPin, OUTPUT);             // 빨강 LED 출력모드 설정
}

void loop() {
  sensorValue = analogRead(sensorPin); // 아날로그 센서 값 읽어서 변수에 저장
  digitalWrite(ledPin, HIGH);          // 빨강 LED 켜짐
  delay(sensorValue);                  // 센서 값 초 기다림
  digitalWrite(ledPin, LOW);           // 빨강 LED 꺼짐
  delay(sensorValue);                  // 센서 값 초 기다림
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
