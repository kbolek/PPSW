<<<<<<< HEAD
#include <LPC21xx.H>
#include "led.h"
#include "keyboard.h"

int main(){
	KeyboardInit();
	LedInit();
	while(1){
    switch (eKeyboardRead()){
      case BUTTON_1:
        LedStepRight();
        break;
      case BUTTON_2:
        LedStepLeft();
        break;
    }
    Delay(100);
	}

	
=======
/*1. Obsluga srodowiska Keil - 1.1 tworzenie projektu */
int iPlusCounter;
int iMinusCounter;
int iLoopCtr;

int main(){
	iPlusCounter=10;
	iMinusCounter=10;
	for (iLoopCtr=0;iLoopCtr<5;iLoopCtr++){
		iPlusCounter=iPlusCounter+3;
		iMinusCounter=iMinusCounter-3;
	}
>>>>>>> 91460d9187e854284f4d251db97a31c2045d280b
}
