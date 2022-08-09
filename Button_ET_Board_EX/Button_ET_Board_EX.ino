 /******************************************************************************************
 * FileName     : Button_ET_Board_EX.ino
 * Description  : 버튼을 누르는 동안 LED를 1초에 3번 깜빡이게 하기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.08.09
 * Reference    : 
 * Modified     : 
******************************************************************************************/

const char buttonPin = D6;                   // 빨강 버튼 : D6
const char ledPin = D2;                      // 빨강 LED : D2

                                             
int buttonState = 0;                         // 빨강 버튼 상태를 0으로 초기화

void setup() {
  pinMode(ledPin, OUTPUT);                   // 빨강 LED 출력모드 설정
  pinMode(buttonPin, INPUT);                 // 빨강 버튼 입력모드 설정
}

void loop() {
  buttonState = digitalRead(buttonPin);      // 빨강 버튼 값 읽기

  if(buttonState == LOW) {
    digitalWrite(ledPin, LOW);               // 버튼을 누르면 LED가 깜빡임
    delay(200);
    digitalWrite(ledPin, HIGH);  
    delay(200);
    digitalWrite(ledPin, LOW);  
    delay(200);
    digitalWrite(ledPin, HIGH);  
    delay(200);
    digitalWrite(ledPin, LOW);  
    delay(200);
    digitalWrite(ledPin, HIGH);  
    delay(200);
    digitalWrite(ledPin, LOW); 
    
  } else{ 
     digitalWrite(ledPin,HIGH);              // 버튼을 누르지 않으면 LED가 켜짐
  }
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
