#include <stdio.h>
#include <stdlib.h>

#define unused(x) (void)(x)

int main(int argc, char **argv)
{
	int i = 0;

	unused(argc);

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);

		++i;
	}

	return (0);
}
