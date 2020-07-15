#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.delay(1500); //1.5 SECOND DELAY BEFORE BEGINNING
    DigiKeyboard.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT); //F10 + SHIFT TO OPEN CMD
    DigiKeyboard.delay(1200);
    DigiKeyboard.println("copy d:\\wifi.xml wifi.xml"); //COPY WIFI PROFILE FROM USB TO INTERNAL STORAGE
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER); //ENTER KEY
    DigiKeyboard.delay(100);
    DigiKeyboard.println("netsh wlan add profile filename=wifi.xml"); //ADD WIFI PROFILE
    DigiKeyboard.delay(1000);
    DigiKeyboard.println("del wifi.xml"); //DELETE WIFI PROFILE XML FROM INTERNAL STORAGE
    DigiKeyboard.sendKeyStroke(KEY_ENTER); //ENTER
    DigiKeyboard.delay(100);
    DigiKeyboard.println("exit"); //EXIT CMD
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER); //ENTER
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(43); //TAB
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(43); //TAB
    DigiKeyboard.delay(1500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER); //ENTER
    DigiKeyboard.delay(3000);
    DigiKeyboard.sendKeyStroke('r',MOD_GUI_LEFT); //WINDOWS KEY
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke('r',MOD_GUI_LEFT); //WINDOWS KEY
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke('r',MOD_GUI_LEFT); //WINDOWS KEY
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke('r',MOD_GUI_LEFT); //WINDOWS KEY
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke('r',MOD_GUI_LEFT); //WINDOWS KEY
    DigiKeyboard.delay(3000);
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //DOWN ARROW
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_SPACE); //SPACE BAR
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(43); //TAB
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(43); //TAB
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER); //ENTER
    }

void loop(){
}
