/*4.2 cwiczenia podpunktn 4,5 */
#include <LPC21xx.H>

void Delay(){
	unsigned long int i;
	//dla mojego kompilatora 1s to 6mln iteracji
	char a;
	for(i=0; i<6000000;i++){
		a++;
	}
}

int main(){
	//ustawienie pinu 16 portu P1 jako wyjsciowy
	IO1DIR = 0x10000;
	//ustawienie pinu 16 portu P1 na 1
	IO1SET = 0x10000;
	Delay();
	//ustawienie pinu 16 portu P1 na 0
	IO1CLR = 0x10000;

}
