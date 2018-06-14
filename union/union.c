#if 0
#include<stdio.h>
#pragma pack(1)
union xx{
	int *a;
	char b[10];
	
}XX;

int main()
{
	union xx  x;
	x.a =65;
	printf("x.a = %d\n", x.a);
	printf("x.b = %d \n", x.b);
	
	printf("-----------------------");
	
	x.b = 'a';
	printf("x.a = %d\n", x.a);
	printf("x.b = %d \n", x.b);
	
	return 0;
}



int main()
{
	printf("sizeof   = %lu", sizeof(XX));
	return 0;
	
}
#endif
#include<stdio.h>
typedef union{
	int *a;
	char b[10];
}XX;
int main()
{
	XX x;
	char a = 65;
	x.a = &a;
	
	x.b[0] = "A";
	x.b[1] = "B";
	x.b[2] = "C";
	x.b[3] = "D";
	x.b[4] = "E";
	
	printf("x.a %p;  %s    \n", x.a, x.b);
	
	
}





