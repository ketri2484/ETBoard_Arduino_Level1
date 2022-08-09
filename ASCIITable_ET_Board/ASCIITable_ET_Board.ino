/******************************************************************************************
 * FileName     : ASCIITable_ET_Board.ino
 * Description  : 아스키코드 값 출력해보기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.20
 * Reference    : 
 * Modified     : 2022.04.20 : LEH : 헤더 수정, 소스 크린징
******************************************************************************************/

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ;                                            // 연결 기다림
  }

  Serial.println("ASCII Table ~ Character Map");
  // 'ASCII Table ~ Character Map'출력
  Serial.println("5초 후에 출력됩니다.");
  // '5초 후에 출력됩니다'출력
  delay(5000);
}

int thisByte = 33;                               // '!' 느낌표는 아스키코드 33번

void loop() {
  Serial.write(thisByte);                        // '!' 출력
  
  Serial.print(", dec: ");                       // ', dec: '출력
  Serial.print(thisByte);                        // '33' 출력
  
  Serial.print(", hex: ");                       // ', hex: '출력
  Serial.print(thisByte, HEX);                   // 16진수로 된 33 출력
 
  Serial.print(", oct: ");                       // ', oct: ' 출력
  Serial.print(thisByte, OCT);                   // 8진수로 된 33 출력
 
  Serial.print(", bin: ");                       // ', bin: '출력
  Serial.println(thisByte, BIN);                 // 2진수로 된 33출력
  
  if(thisByte == 126) {                         // 126번이 되면      
    while (true) {
      continue;                                  // 멈춤
    }  
  }
  thisByte++;                                    // 33에서 +1 됨
} 

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
