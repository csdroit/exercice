#include <stdio.h>
int main() {

	char x;
	char y;
	char z;
	char t;

	//pasword : RJVB //////////////////////////////////////////////
	char myArray[4];

	//input variables//////////////////////////////////////////////
	printf("%s /n" , "Entrer 4 valeur de couleur sans espaces : ");
	scanf("%c", &myArray[0]);
	scanf("%c", &myArray[1]);
	scanf("%c", &myArray[2]);
	scanf("%c", &myArray[3]);
	
	///////////////////////////////////////////////////////////////
	x = myArray[0];
	y = myArray[1];
	z = myArray[2];
	t = myArray[3]; 

	///////////////////////////////////////////////////////////////
	if (x != 'R')
	{
		printf("la premiere lettre n'est pas bien placé .\n");
	}
	
	if (y != 'J')
	{
		printf("la premiere lettre n'est pas bien placé .\n");
	}
	
	if ( z != 'V')
	{
		printf("la troisieme lettre n'est pas bien placé .\n");
	}

	if ( t != 'B')
	{
		printf("la derniere lettre n'est pas bien placé .\n");
	}
	/////////////////////////////////////////////////////////	
	return 0;
}
