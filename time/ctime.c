#include<stdio.h>
#include<time.h>
int main()
{
	time_t tt = time(NULL);	
	char *ft = ctime(&tt);
	printf("NOw time is %s\n",ft);
	printf("time(NULL)  %d\n", time(NULL));
	
	
}