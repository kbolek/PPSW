/*4.2 cwiczenia podpunktu 11 */
#include <LPC21xx.H>
#include <stdio.h>
#define MILI 4615
#define LED0_bm  0x10000 //16 bit ma wartosc 1
#define LED1_bm  0x60000 //17 bit ma wartosc 1
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
	IO1DIR = IO1DIR|LED0_bm|LED1_bm|LED2_bm|LED3_bm;
	//zapalenie 1 diody
	IO1SET = IO1SET|LED0_bm;
	//zapalenie 2 diody
	IO1SET = IO1SET|LED1_bm;
	//zapalanie 3 diody
	IO1SET = IO1SET|LED2_bm;
	//zapalenie 4 diody
	IO1SET = IO1SET|LED3_bm;
	}
