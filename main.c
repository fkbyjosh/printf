#include "main.h"
#include <stdio.h>

int main()
{
	char ch;
	char *str;

	/* Test 1: Basic usage*/
	_printf("This is a test.\n");
	/*Test 2: Using %c for characters*/
	ch = 'A';
	_printf("Character: %c\n", ch);
	/* Test 3: Using %s for strings*/
	str = "Hello, World!";
	_printf("String: %s\n", str);
	/* Test 4: Using %% to print %*/
	_printf("Percentage: %%\n");
	/* Test 5: Handling NULL format*/
	_printf(NULL);  /* Should return -1*/
	return 0;
}
