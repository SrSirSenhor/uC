#define LED 10
#define LONGO 600
#define CURTO 200
#define intervalo 100


void curto() {
  digitalWrite(LED, HIGH); delay(CURTO);
  digitalWrite(LED, LOW);  delay(intervalo);
}
 
void longo() {
  digitalWrite(LED, HIGH); delay(LONGO);
  digitalWrite(LED, LOW);  delay(intervalo);
}

void espacoPalavras(){
  delay(intervalo*3);
}

void espacoFrases(){
  delay(intervalo*10);
}

void morse(char palavra[]){
  for(byte i=0; palavra[i] != '/0'; i++)
    switch(toupper(palavra[i])){
      case 'A':
        curto(); longo();
        break;
      
      case 'B':
        longo(); curto(); curto(); curto();
        break;
      
      case 'C':
        longo(); curto(); longo(); curto();
        break;
      
      case 'D':
        longo(); curto(); curto();
        break;
      
      case 'E':
        curto();
        break;
      
      case 'F':
        curto(); curto(); longo(); curto();
        break;
      
      case 'G':
        longo(); longo(); curto();
        break;
      
      case 'H':
        curto(); curto(); curto(); curto();
        break;
      
      case 'I':
        curto(); curto();
        break;
      
      case 'J':
        curto(); longo(); longo(); longo();
        break;
      
      case 'K':
        longo(); curto(); longo();
        break;
      
      case 'L':
        curto(); longo(); curto(); curto();
        break;
      
      case 'M':
        longo(); longo();
        break;
      
      case 'N':
        longo(); curto();
        break;
      
      case 'O':
        longo(); longo(); longo();
        break;
      
      case 'P':
        curto(); longo(); longo(); curto();
        break;
      
      case 'Q':
        longo(); longo(); curto(); longo();
        break;
      
      case 'R':
        curto(); longo(); curto();
        break;
      
      case 'S':
        curto(); curto(); curto();
        break;
      
      case 'T':
        longo();
        break;
      
      case 'U':
        curto(); curto(); longo();
        break;
      
      case 'V':
        curto(); curto(); curto(); longo();
        break;
      
      case 'W':
        curto(); longo(); longo();
        break;
      
      case 'X':
        longo(); curto(); curto(); longo();
        break;
      
      case 'Y':
        longo(); curto(); longo(); longo();
        break;
      
      case 'Z':
        longo(); longo(); curto(); curto();
        break;

      case '1':
        curto(); longo(); longo(); longo(); longo();
        break;

      case '2':
        curto(); curto(); longo(); longo(); longo();
        break;

      case '3':
        curto(); curto(); curto(); longo(); longo();
        break;

      case '4':
        curto(); curto(); curto(); curto(); longo();
        break;

      case '5':
        curto(); curto(); curto(); curto(); curto();
        break;

      case '6':
        longo(); curto(); curto(); curto(); curto();
        break;

      case '7':
        longo(); longo(); curto(); curto(); curto();
        break;

      case '8':
        longo(); longo(); longo(); curto(); curto();
        break;

      case '9':
        longo(); longo(); longo(); longo(); curto();
        break;

      case '0':
        longo(); longo(); longo(); longo(); longo();
        break;
  }
}

  
void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  morse("Ola");
  espacoPalavras();
  morse("Mundo");
  espacoFrases();
}
