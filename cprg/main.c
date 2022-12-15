#include<stdio.h>
#include "./conversion.h"
int main() {
	float inch, cm;	
	printf("insert your inches please (preferably in 2 decimal precision): ");
	if(scanf("%f",&inch) == 1){ 
		printf("%0.2f",inchesToCm(inch));
	}
	else {
		printf("Error: invalid input"); //TODO make this stderr
	}
}
//i use Neovim to code btw xD
