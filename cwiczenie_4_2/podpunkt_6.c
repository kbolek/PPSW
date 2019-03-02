/*4.2 cwiczenia podpunkt 6 */
/*4.2 cwiczenia podpunktn 7 */
#include <LPC21xx.H>
#include <stdio.h>
#define MILI 4615

void Delay(int ile){
@@ -12,12 +13,12 @@ void Delay(int ile){
}

int main(){
	while(1){
		Delay(1000);
		IO1SET = 0x10000;
		Delay(1000);
		IO1CLR = 0x10000;
	}