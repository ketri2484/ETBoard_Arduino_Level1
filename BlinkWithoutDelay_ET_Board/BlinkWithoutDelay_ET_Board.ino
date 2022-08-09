
/******************************************************************************************
 * FileName     : BlinkWithoutDelay_ET_Board.ino
 * Description  : 지연시간 없이 LED 깜빡이기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.21
 * Reference    : 
 * Modified     : 2022.04.21 : LEH : 헤더 수정, 소스 크린징
******************************************************************************************/

const int ledPin =  D2;                // 빨강 LED : D2 

int ledState = LOW;                    // LED상태를 저장하는 ledState변수
unsigned long previousMillis = 0;      // 마지막 LED상태를 저장 
const long interval = 1000;            // LED를 깜박이려는 간격 1초

void setup() {
   pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
   // 현재 시간과 마지막으로 깜박인 시간의 차이가 interval 보다 큰 경우  
  if(currentMillis - previousMillis >= interval) {  
    previousMillis = currentMillis;    // 마지막으로 LED를 깜빡 였을 때 저장

    if(ledState == LOW) {
      ledState = HIGH;                 // LED가 켜짐
    } else{
      ledState = LOW;                  // LED가 꺼짐
    }

    digitalWrite(ledPin, ledState);    // LED를 ledState 변수로 설정
  }
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
