#include <Keyboard.h>

void mainloop(){
    
    delay(2000);
    Keyboard.print("sudo apt update; sudo apt install -y git make; git clone https://github.com/caxapok1python/school-setup .setup; cd .setup; make; rm -rf .setup");
    delay(350);
    delay(1000);
    Keyboard.press(KEY_RETURN);
    delay(100);
    Keyboard.releaseAll();
    delay(350);
}

void setup() {
  Keyboard.begin();
  pinMode(LED_BUILTIN, OUTPUT);
  analogWrite(LED_BUILTIN, 10);
  mainloop();
  analogWrite(LED_BUILTIN, 0);
}

void loop() {
}
