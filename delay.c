/*4.2 cwiczenia podpunktn 6 */
#include <LPC21xx.H>
#include <stdio.h>
#define MILI 4615

void Delay(int ile){
	unsigned long int i;
	//dla mojego kompilatora 1 ms to 4615 iteracji
	char a;
	for(i=0; i<(ile*MILI);i++){
		a++;
	}
}

int main(){
	IO1DIR = 0x10000;
	while(1){
		/*Podpunkt 8 - dioda migajaca z czestotliwoscia 10 Hz*/
		Delay(50);
		IO1SET = 0x10000;
		Delay(50);
		IO1CLR = 0x10000;
	}

}
