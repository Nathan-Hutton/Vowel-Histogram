#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 256

void getPhrase(char phrase[])
{
	printf("Enter a phrase : ");

	fgets(phrase, LEN, stdin);
}

void reportPhrase(char phrase[]) 
{
	int a_num = 0;
	int e_num = 0;
	int i_num = 0;
	int o_num = 0;
	int u_num = 0;

	for(int i = 0; i < strlen(phrase); i++)
	{
		count_vowel(phrase[i], &a_num, &e_num, &i_num, &o_num, &u_num);
	}

	print_asterisks('a', a_num);
	print_asterisks('e', e_num);
	print_asterisks('i', i_num);
	print_asterisks('o', o_num);
	print_asterisks('u', u_num);
	printf("\n");
}

void print_asterisks(char vowel, int num)
{
	printf("\n%c: ", vowel);
	for(int i = 0; i < num; i++)
	{
		printf("*");
	}
}

void count_vowel(char letter, int *a_num, int *e_num, int *i_num, int *o_num, int *u_num)
{
	switch(letter)
	{
		case('a'):
		case('A'):
			*a_num += 1;
			break;
		case('e'):
		case('E'):
			*e_num += 1;
			break;
		case('i'):
		case('I'):
			*i_num += 1;
			break;
		case('o'):
		case('O'):
			*o_num += 1;
			break;
		case('u'):
		case('U'):
			*u_num += 1;
			break;
	}
}


int main(int argc, char *argv[])
{
	char phrase[LEN];
	
	getPhrase(phrase);

	reportPhrase(phrase);
}
