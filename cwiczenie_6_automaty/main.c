#include <LPC21xx.H>
#include "led.h"
#include "keyboard.h"

void Delay(int iHowLong){
	int iMiliSeconds = 4615; 
	unsigned long int uiIntCounter;
	char cCharIncrementation;
	for(uiIntCounter=0; uiIntCounter<(iHowLong*iMiliSeconds);uiIntCounter++){
		cCharIncrementation++;
	}
}

int main(){
	enum LedState {LED_LEFT, LED_RIGHT};
	enum LedState eLedState = LED_LEFT;
	//KeyboardInit();
	LedInit();
	while(1){
		switch(eLedState){
			case LED_LEFT:
				eLedState = LED_RIGHT;
				LedStepRight();
			break;
			case LED_RIGHT:
				eLedState = LED_LEFT;
				LedStepLeft();
			break;
}
Delay(500);
}
}
//git test
