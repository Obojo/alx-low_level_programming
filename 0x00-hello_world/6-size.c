#include<stdio.h>
/**
  * Main - Prints out size the various types
  * on the computer it is compiled and run on.
  *
  * Return: 0
  */
int main(void)
{
	char char_type;
	int int_type;
	long int lint_type;
	long long int llint_type;
	float float_type;

	printf("Size of a char: %zu byte(s)\n", sizeof(char_type));
	printf("Size of an int: %zu byte(s)\n", sizeof(int_type));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lint_type));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llint_type);
	printf("Size of a float: %zu byte(s)\n", sizeof(float_type));
	return (0);
}
