/*4.2 cwiczenia podpunktn 10 */
#include <LPC21xx.H>
#include <stdio.h>
#define MILI 4615
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
	IO1DIR = IO1DIR|LED3_bm;
	while(1){
		/*Podpunkt 8 - dioda migajaca z czestotliwoscia 10 Hz*/
		Delay(50);
		IO1SET = IO1SET|LED3_bm;
		Delay(50);
		IO1CLR = IO1SET|LED3_bm;
	}

}
