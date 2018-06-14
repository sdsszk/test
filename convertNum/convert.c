#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
#if 0
	a =  a + b;
	b = a - b;
	a= a -b;
#endif
	printf("convert before a:%d,B:%d\n", a, b);
	a = a*b;
	b = a/b;
	a = a/b;
	printf("convert late a:%d,B:%d\n", a, b);
}
