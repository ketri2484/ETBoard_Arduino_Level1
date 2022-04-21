/******************************************************************************************
 * FileName     : Debounce_ET_Board.ino
 * Description  : 버튼 상태에 따라 LED 켜고 끄기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.21
 * Reference    : 
 * Modified     : 2022.04.21 : LEH : 헤더 수정, 소스 크린징
******************************************************************************************/


const int buttonPin = D6;              // 빨강 버튼 : D6
const int ledPin = D2;                 // 빨강 LED : D2

                                       // Variables will change:
int ledState = HIGH;                   // 출력(빨강 LED) 현재 상태
int buttonState;                       // 입력(빨강 버튼) 현재 상태
int lastButtonState = LOW;             // 입력(빨강 버튼) 이전 상태

unsigned long lastDebounceTime = 0;    // 현재시간값을 가져와서 저장할 변수. 자료형은 같은형으로 맞춤
unsigned long debounceDelay = 50;      // 안정된 상태가 될 때까지 기다리는 시간 1ms

void setup() {
  pinMode(buttonPin, INPUT);           // 버튼 입력모드 설정
  pinMode(ledPin, OUTPUT);             // LED 출력모드 설정

  digitalWrite(ledPin, ledState);      // ledState에 따라 LED를 켜고 끔
}


void loop() {
  int reading = digitalRead(buttonPin);// 버튼 상태를 읽어 reading 변수에 저장


  if (reading != lastButtonState) {    // 누르기로 버튼 상태가 변경되면
    
    lastDebounceTime = millis();       // debouncing timer를 재설정
    }
  

    if ((millis() - lastDebounceTime) > debounceDelay) { 
      // 읽은 값이 무엇이든 debounce 지연보다 오래 있었으면
   
    
    if (reading != buttonState) {      // 버튼 상태가 바뀌면
      buttonState = reading;           // 버튼 상태를 저장

      
      if (buttonState == HIGH) {       // 새로운 버튼 상태가 HIGH면
        ledState = !ledState;          // LED 상태를 바꿈
      }
    }
  }
                                       // set the LED:
  digitalWrite(ledPin, ledState);      // ledState에 저장된 값으로 LED를 on/off


  lastButtonState = reading; 
  // reading변수의 값을 lastButtonState (다음 loop에서 사용)에 저장
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
