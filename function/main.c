#if 0
#include<stdio.h>

int main()
{
	printf("hello world !\n");
	return 100;
	
}
#endif
#include<stdio.h>

int main(int argc, char *argv[], char *env[]) {
	int i = 0;
	while (NULL != env[i]) {
		printf("%s\n", env[i]);
		i++;
	}
	return 0;
}
