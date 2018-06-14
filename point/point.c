/*#include<stdio.h>
int main()
{ 
        double number1=0.0; // 定义第一个操作数 
        double number2=0.0; // 定义第二个操作数 
        char operation=0; // operation 必须是 '+' '-' '*' '/' 或 '%' 

        printf("\nEnter the calculation\n"); 
        scanf("%lf%c%lf",&number1,&operation,&number2); return 0; }
		
		switch(operation)
   {
      case '+':
          printf("=%lf\n",number1+number2);
          break;

      case '-':
           printf("=%lf\n",number1-number2);
           break;

      case '*':
           printf("=%lf\n",number1*number2);
           break;

      case '/':
           if(number2==0)
             printf("\n\n\aDavision by zero error!\n");
           else
             printf("=%lf\n",number1/number2);
           break;

      case '%':
           if((long)number2==0)  
             printf("\n\n\aDavision by zero error!\n"); 
           else
             printf("=%ld\n",(long)number1%(long)number2);      
           break;

      default:
          printf("\n\n\aDavision by zero error!\n");
          break;
  }

*/
#include<stdio.h>
int main()
{
	struct comple{
		int x;
		char y;
	}z1;
	int hight =4;
	int width = 8;
	printf("please enter hight and width: \n");
	//scanf("%d,%d\n\r", &width, &hight);
	int line = (hight * width);
	int line2 = (((hight*width) + 31)>>5)<<2;
	
	 
	printf("line: %d     line2:  %d \n",line, line2);
}