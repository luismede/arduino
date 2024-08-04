#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LiquidCrystal_I2C lcd(0x27, 16, 2); Placa fisica
LiquidCrystal_I2C lcd(32, 16, 2);

// CARROS
int vermelho = 8;
int amarelo = 9;
int verde = 10;

// PEDESTRES
int pedestreVermelho = 11;
int pedestreVerde = 12;

void setup()
{
  // LIGANDO O LCD
    lcd.init();
    lcd.backlight();

    pinMode(vermelho, OUTPUT);
    pinMode(amarelo, OUTPUT);
    pinMode(verde, OUTPUT);

    pinMode(pedestreVermelho, OUTPUT);
    pinMode(pedestreVerde, OUTPUT);
}

void loop()
{	
  	// CARROS VERMELHO
	digitalWrite(vermelho, HIGH);
    digitalWrite(amarelo, LOW);
	digitalWrite(verde, LOW);

    digitalWrite(pedestreVermelho, LOW);
	digitalWrite(pedestreVerde, HIGH);

    lcd.setCursor(4,0);
    lcd.print("Semafaro");
    lcd.setCursor(4,1);
    lcd.print("Vermelho");
  	    delay(4000); // Vermelho carros desligará em 4s
    lcd.clear();


  	// CARROS VERDE
    digitalWrite(vermelho, LOW);
    digitalWrite(amarelo, LOW);
	digitalWrite(verde, HIGH);

    digitalWrite(pedestreVermelho, HIGH);
	digitalWrite(pedestreVerde, LOW);

    lcd.setCursor(4,0);
    lcd.print("Semafaro");
    lcd.setCursor(6,1);
    lcd.print("Verde");
  	    delay(2000); // Verde desligará em 2s
    lcd.clear();

    // CARROS AMARELO
    digitalWrite(vermelho, LOW);
    digitalWrite(amarelo, HIGH);
    digitalWrite(verde, LOW);

    lcd.setCursor(4,0);
    lcd.print("Semafaro");
    lcd.setCursor(4,1);
    lcd.print("Amarelo");
  	    delay(3000); // Amarelo desligará em 3s
    lcd.clear();
}