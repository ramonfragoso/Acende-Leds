// Universidade Federal de Campina Grande
// Projeto IC - 2016.2 
// Grupo:
// José Ramon Fragoso da Silva
// Katson Matheus
// José Vinicius Lacerda de Arruda
// Diego da Silva Lima

#include <stdio.h>

// Declaração de todas as entradas e pinos do Arduino
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;

int a = 6;
int b = 7;
int c = 8;
int d = 9;
int e = 10;
int f = 11;
int g = 12;


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  
  Serial.begin(9600); // Abre a porta serial, e define a taxa de dados para 9600 bps
  Serial.println("Digite um numero(0 a 9):\n"); 
}
void loop() {

  	char nleds = Serial.read(); // Leitura da entrada pelo Serial Monitor
  	int x = nleds - '0'; // Converte variavel nleds(char) para x(int)

 // Parte onde os LEDs certos são ativados 
    if (nleds == '0'){
        digitalWrite(a, LOW);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, LOW);
		digitalWrite(e, LOW);
		digitalWrite(f, LOW);
		digitalWrite(g, HIGH);
    }
  
    if (nleds == '1'){
		digitalWrite(a, HIGH);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, HIGH);
		digitalWrite(e, HIGH);
		digitalWrite(f, HIGH);
		digitalWrite(g, HIGH);
    }
    if (nleds == '2'){
		digitalWrite(a, LOW);
		digitalWrite(b, LOW);
		digitalWrite(c, HIGH);
		digitalWrite(d, LOW);
		digitalWrite(e, LOW);
		digitalWrite(f, HIGH);
		digitalWrite(g, LOW);
    }
  	if (nleds == '3'){
		digitalWrite(a, LOW);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, LOW);
		digitalWrite(e, HIGH);
		digitalWrite(f, HIGH);
		digitalWrite(g, LOW);
    }
  	if (nleds == '4'){
		digitalWrite(a, HIGH);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, HIGH);
		digitalWrite(e, HIGH);
		digitalWrite(f, LOW);
		digitalWrite(g, LOW);
    }
     if (nleds == '5'){
		digitalWrite(a, LOW);
		digitalWrite(b, HIGH);
		digitalWrite(c, LOW);
		digitalWrite(d, LOW);
		digitalWrite(e, HIGH);
		digitalWrite(f, LOW);
		digitalWrite(g, LOW);
    }
     if (nleds == '6'){
		digitalWrite(a, LOW);
		digitalWrite(b, HIGH);
		digitalWrite(c, LOW);
		digitalWrite(d, LOW);
		digitalWrite(e, LOW);
		digitalWrite(f, LOW);
		digitalWrite(g, LOW);
    }
     if (nleds == '7'){
		digitalWrite(a, LOW);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, HIGH);
		digitalWrite(e, HIGH);
		digitalWrite(f, HIGH);
		digitalWrite(g, HIGH);
    }
     if (nleds == '8'){
		digitalWrite(a, LOW);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, LOW);
		digitalWrite(e, LOW);
		digitalWrite(f, LOW);
		digitalWrite(g, LOW);
    }
    
     if (nleds == '9'){
		digitalWrite(a, LOW);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, LOW);
		digitalWrite(e, HIGH);
		digitalWrite(f, LOW);
		digitalWrite(g, LOW);
    }
  	
  	
// Parto responsável por converter de decimal para binário
    if (x >= 8){
      		digitalWrite(led1, HIGH);
            x = x - 8;
    }
  
    
    if (x >= 4){
      		digitalWrite(led2, HIGH);
            x = x - 4;
    }
  
    if (x >= 2){
    		digitalWrite(led3, HIGH);
            x = x - 2;
    }
  
    if (x >= 1){
    		digitalWrite(led4, HIGH);
    }
   
  	delay(1250); // Tempo para os leds (binario) permanecerem acesos

  	digitalWrite(led1, LOW);
  	digitalWrite(led2, LOW);
  	digitalWrite(led3, LOW);
  	digitalWrite(led4, LOW);
    
}
