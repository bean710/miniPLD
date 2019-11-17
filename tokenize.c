#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *token;
	char src[] = "Christine is very decent";
	char *src_cpy = NULL;
	char **arr;
	size_t wordnum = 0, i = 0;

	src_cpy = strdup(src);

	token = strtok(src_cpy, " ");

	while (token != NULL)
	{
		printf("Counting: %s\n", token);
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

	for (i = 0; arr[i] != NULL; i++)
		printf("Final: %s\n", arr[i]);

	return (0);
}
