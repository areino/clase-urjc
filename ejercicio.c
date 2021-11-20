#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){

	char name[12];
	int pin;

	printf("Introduce tu nombre (Max. 10 caracteres): ");
	
	pin = rand() %20;
	
	gets(name);
		
	printf("%s%s%s%i\n", "¡Hola " , name , "! Tu código pin es: " , pin); 
}
