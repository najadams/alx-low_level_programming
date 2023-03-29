#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates a random password
 */
int mainr(void)
{
	const char charset[]; 
	const int charset_len;
	const int password_len;

	charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	charset_len = sizeof(charset) - 1;
	password_len = 9;

	srand(time(NULL));

	char password[password_len+1];

	for (int i = 0; i < password_len; i++)
	{
		password[i] = charset[rand() % charset_len];
	}
	password[password_len] = '\0';
	printf("%s\n", password);
	return (0);
}
