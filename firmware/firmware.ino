//Array de bytes configurado para gerar numeros de 0-9
byte numero [] = {B11111100, B01100000, B11011010, B11110010, B01100110,
                  B10110110, B10111110, B11100000, B11111110, B11110110};

void setup() {
  //Data Direction Register
  //Define pinos 1-7 como saida(1) e o pino 0 como entrada(0)
  DDRD = B11111110;
}

void loop() {
  int i;
  for(i=0;i<10;i++){
    PORTD = numero[i];
    delay(1000);
  }
}


