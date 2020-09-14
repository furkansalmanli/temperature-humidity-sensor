#include <dht11.h>
#define DHT11PIN 9
#include <LiquidCrystal.h>
dht11 DHT11;


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  
}

void loop() {


int chk = DHT11.read(DHT11PIN);

  lcd.begin(16, 2);
  lcd.print("ISI = ");
  lcd.print((float)DHT11.temperature, 0);
  lcd.print(" \337C");
  lcd.setCursor(0, 1);
  lcd.print("NEM = ");
  lcd.print("% ");
  lcd.print((float)DHT11.humidity,0);
  delay(1000);
  
  

  
}
