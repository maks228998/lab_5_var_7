#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include "my_lib.h"
#include <string.h>

int main()
{
	printf("Enter key \n");
	int key = input_int_number();

	printf("To decrypt the text enter 1, to encrypt 0  \n");
	int choise = get_int_number_on_one_or_zero();
	if (choise == 0) {
		key = -1 * key;
	}

	char* string = (char*)malloc(1 * sizeof(char));
	char symbol = 't';
	int lenght = 1;
	scanf("%c", &string[0]);
	printf("Enter text \n");

	while (symbol != '\n')
	{
		scanf("%c", &symbol);
		string[lenght - 1] = symbol + key;
		string = (char*)realloc(string, ++lenght * sizeof(char));
	}

	if (choise == 0) {
		printf("Encrypt text \n");
	}
	else {
		printf("Decrypt text \n");
	}

	for (int counter = 0; counter < lenght - 2; counter++) {
		printf("%c", string[counter]);
	}
}
