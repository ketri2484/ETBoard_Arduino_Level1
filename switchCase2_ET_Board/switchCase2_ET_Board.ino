/******************************************************************************************
 * FileName     : SwitchCase2_ET_Board.ino
 * Description  : switch() 함수를 이용하여 LED 제어하기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.21
 * Reference    : 
 * Modified     : 2022.04.21 : LEH : 헤더 수정, 소스 크린징
******************************************************************************************/

void setup() {
  Serial.begin(115200);                                                         
  // LED들을 출력으로 정하기
    pinMode(D2, OUTPUT);  // 빨강 LED 출력모드 설정
    pinMode(D3, OUTPUT);  // 파랑 LED 출력모드 설정
    pinMode(D4, OUTPUT);  // 초록 LED 출력모드 설정
    pinMode(D5, OUTPUT);  // 노랑 LED 출력모드 설정                        
  }
 
void loop() {                                            
  if(Serial.available() > 0) { 
    int inByte = Serial.read();                           // 시리얼 모니터 입력 값 읽기
    
    switch (inByte) {
      case 'r':                                           // r 입력시
      case 'R':                                           // R 입력시
        digitalWrite(D2, HIGH);                           // 빨강(Red) LED 켜짐
        Serial.println("입력 받은 신호는 빨강(Red)입니다.");
        delay(3000);
        break;
      case 'b':                                           // b 입력시
      case 'B':                                           // B 입력시
        digitalWrite(D3, HIGH);                           // 파랑(Blue) LED 켜짐
        Serial.println("입력 받은 신호는 파랑(Blue)입니다.");
        delay(3000);
        break;
      case 'g':                                           // g 입력시
      case 'G':                                           // G 입력시
        digitalWrite(D4, HIGH);                           // 초록(Green) LED 켜짐
        Serial.println("입력 받은 신호는 초록(Green)입니다.");
        delay(3000);
        break;
      case 'y':                                           // d 입력시
      case 'Y':                                           // d 입력시
        digitalWrite(D5, HIGH);                           // 노랑(Yellow) LED 켜짐
        Serial.println("입력 받은 신호는 노랑(Yellow)입니다.");
        delay(3000);
        break;
      default:                     // 그 외 다른 키 입력시
        digitalWrite(D2, LOW);     // 빨강 LED 꺼짐
        digitalWrite(D3, LOW);     // 파랑 LED 꺼짐
        digitalWrite(D4, LOW);     // 초록 LED 꺼짐
        digitalWrite(D5, LOW);     // 노랑 LED 꺼짐
        }
    }
  }


//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
