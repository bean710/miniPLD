#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *token;
	char *src = NULL;
	size_t src_size = 0;
	char *src_cpy = NULL;
	char **arr;
	size_t wordnum = 0, i = 0, j = 0;

	printf("[($)] ");
	getline(&src, &src_size, stdin);

	for (j = 0; src[j] != '\0'; ++j)
	{
		if (src[j] == '\n')
			src[j] = '\0';
	}

	src_cpy = strdup(src);

	token = strtok(src_cpy, " ");

	while (token != NULL)
	{
		token = strtok(NULL, " ");

		wordnum++;
	}

	arr = malloc(sizeof(char *) * (wordnum + 1));

	token = strtok(src, " ");

	while (token != NULL)
	{
		arr[i] = token;
		token = strtok(NULL, " ");

		i++;
	}

	arr[wordnum] = NULL;

	if (fork() == 0)
		execve(arr[0], arr, NULL);
	else
		wait(NULL);

	return (0);
}
