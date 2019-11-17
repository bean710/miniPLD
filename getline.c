#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *buffer = NULL;
	size_t b_size = 0;
	ssize_t input;

	while (1000)
	{
		printf("$ ");

		input = getline(&buffer, &b_size, stdin);

/**	if (input = -1)
		exit(420);
**/
		printf("%s", buffer);
	}

	return (0);
}
