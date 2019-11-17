#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	char *argv[] = {"/bin/ls", NULL};

	if(fork() == 0)
		execve(argv[0], argv, NULL);
	else
		wait(NULL);

	printf("Foo\n");
}
