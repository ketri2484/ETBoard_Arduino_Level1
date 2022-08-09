/******************************************************************************************
 * FileName     : IfStatementConditional_ET_Board.ino
 * Description  : 가변저항의 값에 따라 LED 켜고 끄기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.21
 * Reference    : 
 * Modified     : 2022.04.21 : LEH : 헤더 수정, 소스 크린징
******************************************************************************************/

const int analogPin = A0;                   // 가변저항(아날로그) : A0
const int ledPin = D2;                      // 빨강 LED : D2
const int threshold = 500;                  // 아날로그 센서값 중 임의의 값 500

void setup() { 
  pinMode(ledPin, OUTPUT);                  // 빨강 LED 출력모드 설정
  Serial.begin(115200);
}

void loop() {
  int analogValue = analogRead(analogPin);  // 아날로그 센서 값 읽어서 변수에 저장
 
  if(analogValue > threshold) {            // 아날로그 센서값이 threhold 이상이면
    digitalWrite(ledPin, HIGH);             // LED 켜짐
  }else {
    digitalWrite(ledPin, LOW);              // LED 꺼짐
  }

  Serial.println(analogValue);              // 아날로그 센서 값 출력
  delay(1);                                 // 0.001초 기다림
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
