void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  numeros(0);
  delay(1000);
  numeros(1);
  delay(1000);
  numeros(2);
  delay(1000);
  numeros(3);
  delay(1000);
  numeros(4);
  delay(1000);
  numeros(5);
  delay(1000);
  numeros(6);
  delay(1000);
  numeros(7);
  delay(1000);
  numeros(8);
  delay(1000);
  numeros(9);
  delay(1000);
}

void numeros(int x) {
  int b = 8;
  int a = 7;
  int f = 6;
  int g = 5;
  int e = 4; 
  int d = 3;
  int c = 2;
     
  if (x == 0) { // Codigo para o número 0
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
  } 
  
  else if (x == 1) {// Codigo para o número 1
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(g, LOW);
    digitalWrite(f, LOW);
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);   
  }
  
  else if (x == 2) { // Codigo para o número 2
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
  }
  
  else if (x == 3) {// Codigo para o número 3
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);  
  }
  
  else if (x == 4) { // Codigo para o número 4
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
  }

  else if (x == 5) { // Codigo para o número 5
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
  }
  
  else if (x == 6) { // Codigo para o número 6
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
  }
 
  else if (x == 7) {// Codigo para o número 7
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(g, LOW);
    digitalWrite(f, LOW);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);  
  }
  
  else if (x == 8) { // Codigo para o número 8
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
  }

  else if (x == 9) { // Codigo para o número 9
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
  }
}
