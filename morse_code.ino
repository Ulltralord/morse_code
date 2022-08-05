#define FIFO_BUFF_SIZE 512
#define DOT_DELAY 100 // mS
#define DASH_DELAY (DOT_DELAY * 3)
#define SEND_DOT_DELAY digitalWrite(LED_BUILTIN, HIGH); delay(DOT_DELAY); digitalWrite(LED_BUILTIN, LOW); delay(DOT_DELAY);     
#define SEND_DASH_DELAY digitalWrite(LED_BUILTIN, HIGH); delay(DASH_DELAY); digitalWrite(LED_BUILTIN, LOW); delay(DOT_DELAY);     

char  FifoBuf[FIFO_BUFF_SIZE];
int   FifoBufToRead = 0;
int   FifoBufToWrite = 0;

void setup() {
  FifoBufToRead = 0;
  FifoBufToWrite = 0;
  Serial.begin(9600); // open the serial port at 9600 bps:
  while (!Serial) {}; // wait for serial port to connect. Needed for native USB port only
}

void SendMorze(unsigned char Del) {
  switch (Del) {
    case 'A':
    case 'a':
      // .-
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'B':
    case 'b':
      // -...
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'C':
    case 'c':
      // -.-.
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'D':
    case 'd':
      // -..
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'E':
    case 'e':
      // .
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'F':
    case 'f':
      // ..-.
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'G':
    case 'g':
      // --.
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'H':
    case 'h':
      // ....
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'I':
    case 'i':
      // ..
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'J':
    case 'j':
      // .---
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'K':
    case 'k':
      // -.-
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'L':
    case 'l':
      // .-..
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'M':
    case 'm':
      // --
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'N':
    case 'n':
      // -.
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'O':
    case 'o':
      // ---
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'P':
    case 'p':
      // .--.
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'Q':
    case 'q':
      // --.-
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'R':
    case 'r':
      // .-.
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'S':
    case 's':
      // ...
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'T':
    case 't':
      // -
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'U':
    case 'u':
      // ..-
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'V':
    case 'v':
      // ...-
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'W':
    case 'w':
      // .--
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'X':
    case 'x':
      // -..-
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'Y':
    case 'y':
      // -.--
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case 'Z':
    case 'z':
      // --..
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '1':
      // .----
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '2':
      // ..---
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '3':
      // ...--
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '4':
      // ....-
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '5':
      // .....
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '6':
      // -....
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '7':
      // --...
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '8':
      // ---..
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '9':
      // ----.
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '0':
      // -----
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '.':
      // .-.-.-
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case ',':
      // --..--
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case ':':
      // ---...
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '?':
      // ..--..
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '\'':
      // .----.
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '-':
      // -....-
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '/':
      // -..-.
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case '(':
      // -.--.
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
     case ')':
      // -.--.-
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
     case '\"':
      // .-..-.
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
     case '=':
      // -...-
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
     case '+':
      // .-.-.
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
     case '*':
      // -..-
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
     case '@':
      // .--.-.
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      SEND_DASH_DELAY
      SEND_DOT_DELAY
      delay(DOT_DELAY * 2); // wait after simbol 
     break;
    case ' ':
      delay(DOT_DELAY * 4); // wait after word      
     break;
//    default:
      // выполняется, если не выбрана ни одна альтернатива
      // default необязателен
  }  
}

void loop() {
  if (FifoBufToWrite != FifoBufToRead) { //Fifo Buffer not empty? Then Send Morze
    SendMorze(FifoBuf[FifoBufToWrite++]);
    if (FifoBufToWrite >= FIFO_BUFF_SIZE)
      FifoBufToWrite = 0;
  }
}

void serialEvent() {
  while (Serial.available()) {
    // get the new byte and put it to Fifo Buffer:
    int Simbol = Serial.read();
    if (Simbol != -1) { // Serial data is Ok
      Serial.write((char)Simbol);
      FifoBuf[FifoBufToRead++] = (char)Simbol;
      if (FifoBufToRead >= FIFO_BUFF_SIZE)
        FifoBufToRead = 0;
    } 
  }
}
