int Des = 6;
int E = 5;
int D = 4;
int C = 3;
int P = 2;

int Asc = 12;
int G = 8;
int F = 9;
int A = 10;
int B = 11;

int MonitorSerial;

void setup() {
  Serial.begin(9600);
  pinMode(Des, INPUT);
  pinMode(Asc, INPUT);
  pinMode(G, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(P, OUTPUT);
}

void loop() {
  Apagado();
  MonitorSerial = Serial.read();
  if (digitalRead(Asc) == 1) {
    Ascendente();
  } else if (digitalRead(Des) == 1) {
    Descendente();
  } else {
    switch (MonitorSerial) {
      case '0':
        Cero();
        delay(1000);
        break;
      case '1':
        Uno();
        delay(1000);
        break;
      case '2':
        Dos();
        delay(1000);
        break;
      case '3':
        Tres();
        delay(1000);
        break;
      case '4':
        Cuatro();
        delay(1000);
        break;
      case '5':
        Cinco();
        delay(1000);
        break;
      case '6':
        Seis();
        delay(1000);
        break;
      case '7':
        Siete();
        delay(1000);
        break;
      case '8':
        Ocho();
        delay(1000);
        break;
      case '9':
        Nueve();
        delay(1000);
        break;
    }
  }
}

void Ascendente() {
  Cero();
  delay(1000);
  Uno();
  delay(1000);
  Dos();
  delay(1000);
  Tres();
  delay(1000);
  Cuatro();
  delay(1000);
  Cinco();
  delay(1000);
  Seis();
  delay(1000);
  Siete();
  delay(1000);
  Ocho();
  delay(1000);
  Nueve();
  delay(1000);
}

void Descendente() {
  Nueve();
  delay(1000);
  Ocho();
  delay(1000);
  Siete();
  delay(1000);
  Seis();
  delay(1000);
  Cinco();
  delay(1000);
  Cuatro();
  delay(1000);
  Tres();
  delay(1000);
  Dos();
  delay(1000);
  Uno();
  delay(1000);
  Cero();
  delay(1000);
}

void Cero() {
  digitalWrite(G, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Uno() {
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Dos() {
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(P, LOW);
}

void Tres() {
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Cuatro() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Cinco() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Seis() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Siete() {
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Ocho() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Nueve() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Apagado() {
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(P, HIGH);
}