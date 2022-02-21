
void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // 연결 기다림
  }


  Serial.println("ASCII Table ~ Character Map"); // 'ASCII Table ~ Character Map'출력
}

int thisByte = 33; // '!' 느낌표는 아스키코드 33번

void loop() {

  Serial.write(thisByte); // '!' 출력

  Serial.print(", dec: "); // ', dec: '출력

  Serial.print(thisByte); // '33' 출력

  Serial.print(", hex: "); // ', hex: '출력
  Serial.print(thisByte, HEX); // 16진수로 된 33 출력

  Serial.print(", oct: "); // ', oct: ' 출력
  Serial.print(thisByte, OCT); // 8진수로 된 33 출력

  Serial.print(", bin: "); // ', bin: '출력
  Serial.println(thisByte, BIN); // 2진수로 된 33출력

  
  if (thisByte == 126) {    // 126번이 되면
    
    while (true) {
      continue; // 멈춤
    }
  }
  thisByte++; // 33에서 +1 됨
}



//┌────────────────────────────────┐
//│                                                      │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr         │
//│                                                      │ 
//└────────────────────────────────┘
