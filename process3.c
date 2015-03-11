#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	if (fork() == 0)
	{
		/* child process */
		for (;;)
		{
			printf("This is child process\n");
		}
	}else{
		/* parent process */
		for (;;)
		{
			printf("This is parent process\n");
		}
	}
	return 0;
}