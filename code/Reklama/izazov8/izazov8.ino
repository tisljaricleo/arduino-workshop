#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  pinMode(6, INPUT);

  lcd.print("LEO");
  lcd.setCursor(0, 1); // stupac , red
  lcd.print("TISLJARIC");
}

void loop() {

}
