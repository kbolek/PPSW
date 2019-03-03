/*4.2 cwiczenia podpunktu 17 */
#include <LPC21xx.H>
#define S0 0x10
#define S1 0x20
#define S2 0x40
#define S3 0x80
#define LED0_bm  0xA0//16 bit ma wartosc 1
#define LED1_bm  0x20000 //17 bit ma wartosc 1
#define LED2_bm  0x40000 // 18 bit ma wartosc 1
#define LED3_bm 0x80000 //19 bit ma wartosc 1

enum ButtonState {RELEASED,PRESSED}; //RELEASED => 0, PRESSED => 1
/*Funkcja zwracajaca stan przycisku S1 */
int ReadButton1(){
	enum ButtonState ReturnNumber = RELEASED;
	ReturnNumber = ((IO0PIN&S1)== S1) ? PRESSED: RELEASED;
	return ReturnNumber;
}

/*Funkcja ustawiajaca wszystkie piny przyciskow S1-S4 na wejscie */
void KeyboardInit(){
	IO0DIR = IO0DIR|S0|S1|S2|S3; //bez modyfikacji innych bitow rejestru
}

/*Funkcja zapalajaca diode LED o podanym argumencie */
void LedOn(int Number){
	switch(Number){
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
	int GiveANumber;
	IO1DIR = IO1DIR|LED0_bm|LED1_bm;
	KeyboardInit();
	IO0SET = IO0SET|S1;
	GiveANumber = ReadButton1();
	LedOn(GiveANumber);	
}
