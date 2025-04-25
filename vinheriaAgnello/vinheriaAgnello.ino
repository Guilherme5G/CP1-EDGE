int vermelho = 13;
int amarelo = 12;
int verde = 11;
int sensorPin = A5;
int val;
int buzzer = 9;

int tempo = 3000;

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  delay(200);
  val = analogRead(sensorPin);    // ler o valor do potenciômetro, varia de 0 a 1023
  int luz = map(val, 54, 974, 0, 100); //converte a escala para uma escala de 0 a 100
                  
  if (luz > 30) {
    digitalWrite(vermelho, HIGH);
    digitalWrite(amarelo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(tempo);
    digitalWrite(buzzer, LOW);
  } 
  else if (luz > 5) {
    digitalWrite(vermelho, LOW);
    digitalWrite(amarelo, HIGH);
    digitalWrite(verde, LOW);
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(tempo);
    digitalWrite(buzzer, LOW);
    
  } 
  else {
    digitalWrite(vermelho, LOW);
    digitalWrite(amarelo, LOW);
    digitalWrite(verde, HIGH);
    digitalWrite(buzzer, LOW);
  }
}
