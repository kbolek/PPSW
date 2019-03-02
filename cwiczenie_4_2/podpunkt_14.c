/*4.2 cwiczenia podpunktu 14 */
#include <LPC21xx.H>
#include <stdio.h>
#define MILI 4615
#define LED0_bm  0x10000 //16 bit ma wartosc 1
#define LED1_bm  0x20000 //17 bit ma wartosc 1
#define LED2_bm  0x40000 // 18 bit ma wartosc 1
#define LED3_bm 0x80000 //19 bit ma wartosc 1

void Delay(int ile){
	unsigned long int i;
	//dla mojego kompilatora 1 ms to 4615 iteracji
	char a;
	for(i=0; i<(ile*MILI);i++){
		a++;
	}
}

/*Funkcja zapalajaca diode LED o podanym argumencie */
void LedOn(int nmb_of_led){
	switch(nmb_of_led){
		//etykiety zapalajace poszczegolne diody
		case 1:
			IO1SET = IO1SET|LED0_bm;
			break;
		case 2:
			IO1SET = IO1SET|LED1_bm;
			break;
		case 3:
			IO1SET = IO1SET|LED2_bm;
			break;
		case 4:
			IO1SET = IO1SET|LED3_bm;
			break;
	}
	
}

/*Funkcja kt�ra ustawia piny podpiete do LED0-LED3 na wyjsciowe
i zapala LED0*/
void LedInit(){
		IO1DIR = IO1DIR|LED0_bm|LED1_bm|LED2_bm|LED3_bm;
		LedOn(1);
	
}


int main(){
	while(1){
		//przesuwanie punktu swietlnego led 0-3 0-3 itd.
		LedInit();
		Delay(250);
		IO1CLR = IO1CLR|LED0_bm;
		LedOn(2);
		Delay(250);
		IO1CLR = IO1CLR|LED1_bm;
		LedOn(3);
		Delay(250);
		IO1CLR = IO1CLR|LED2_bm;
		LedOn(4);
		Delay(250);
		IO1CLR = IO1CLR|LED3_bm;
		}
	}
