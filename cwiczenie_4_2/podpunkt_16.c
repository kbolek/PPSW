/*4.2 cwiczenia podpunktu 16 */
#include <LPC21xx.H>
#define S1 0x10
#define LED0_bm  0x10000 //16 bit ma wartosc 1
#define LED1_bm  0x20000 //17 bit ma wartosc 1
#define LED2_bm  0x40000 // 18 bit ma wartosc 1
#define LED3_bm 0x80000 //19 bit ma wartosc 1

int ReadButton1(){
	int return_number = 0;
	return_number = ((IO0PIN&S1)== S1) ? 1: 0;
	return return_number;
}

/*Funkcja zapalajaca diode LED o podanym argumencie */
void LedOn(int nmb_of_led){
	switch(nmb_of_led){
		//etykiety zapalajace poszczegolne diody
		case 0:
			IO1SET = IO1SET|LED0_bm;
			break;
		case 1:
			IO1SET = IO1SET|LED1_bm;
			break;
	}
	
}
int main(){
	int press;
	IO1DIR = IO1DIR|LED0_bm|LED1_bm;
	IO0DIR = IO0DIR|S1;
	IO0SET = IO0SET|S1;
	press = ReadButton1();
	LedOn(press);	
}
