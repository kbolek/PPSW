/*4.2 cwiczenia podpunkt 6 */
#include <LPC21xx.H>
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
	//ustawienie pinu 16 portu P1 jako wyjsciowy
	IO1DIR = 0x10000;
	//ustawienie pinu 16 portu P1 na 1
	IO1SET = 0x10000;
	Delay(1001);
	//ustawienie pinu 16 portu P1 na 0
	IO1CLR = 0x10000;

}
