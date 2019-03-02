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

int main(){
	while(1){
		IO1SET = IO1SET|LED0_bm;
		Delay(250);
		IO1CLR = IO1CLR|LED0_bm;
		IO1SET = IO1SET|LED1_bm;
		Delay(250);
		IO1CLR = IO1CLR|LED1_bm;
		IO1SET = IO1SET|LED2_bm;
		Delay(250);
		IO1CLR = IO1CLR|LED2_bm;
		IO1SET = IO1SET|LED3_bm;
		Delay(50);
		IO1CLR = IO1SET|LED3_bm;
		Delay(250);
		IO1CLR = IO1CLR|LED3_bm;
		}
	}
}