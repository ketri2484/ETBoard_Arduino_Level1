/******************************************************************************************
 * FileName     : SwitchCase_ET_Board.ino
 * Description  : map() 함수를 이용하여 LED 제어하기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.21
 * Reference    : 
 * Modified     : 2022.04.21 : LEH : 헤더 수정, 소스 크린징
 * Modified     : 2023.03.14 : PEJ : 주석 길이 수정
 * Modified     : 2023.03.21 : PEJ : 주석 위치 및 내용 수정
******************************************************************************************/

const int sensorMin = 0;                // 최소값 설정
const int sensorMax = 2400;             // 최대값 설정                    

void setup() {
  Serial.begin(115200);
}

void loop() {
   int sensorReading = analogRead(A0);  // 가변저항 'A0' 핀의 아날로그 값을 변수에 저장                     
  // sensorMin(0)부터 sensorMax(2400)까지의 값을 4개의 구간으로 나누어 대응시키기
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3);

  
  switch (range) {                      // 범위(0~3)에 따라 맞는 크기의 문자열 출력
    case 0:                             // 가변저항의 값이 0 구간에 속할 때 "매우 작다" 출력
      Serial.println("매우 작다");                         
      break;
    case 1:                             // 가변저항의 값이 1 구간에 속할 때 "작다" 출력
      Serial.println("작다");                             
      break;
    case 2:                             // 가변저항의 값이 2 구간에 속할 때 "크다" 출력                                              
      Serial.println("크다");                                  
      break;
    case 3:                             // 가변저항의 값이 3 구간에 속할 때 "매우 크다" 출력                                          
      Serial.println("매우 크다");                             
      break;
  }

  delay(1);                             // 0.001초 기다리기                                              
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
