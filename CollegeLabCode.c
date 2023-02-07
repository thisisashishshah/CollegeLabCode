#include<stdio.h>
int main()
{
	printf("Enter Two Numbers:\n");
	int a,b;
	char op;
	scanf("%d %d",&a, &b);
	printf("Enter the Operation:\n");
	scanf("%c",&op);


	switch(op)
	{
		case '+': printf("%d+%d=%d",a,b,a+b);
	              break;
		
		case '-': printf("%d-%d=%d",a,b,a-b);
		          break;
		
		case '*': printf("%d*%d=%d",a,b,a*b);
	              	break;
		
		case '/': if(b!=0)
		          {
		          	printf("%d/%d=%d",a,b,a/b);
		          	break;
				  }
				  else
				  {
				  	printf("Division is not possible.\n");
				  	break;
				  }
	
		
		
		default: printf("You Entered invalide option.\n");
	             break;
	}
}



// by college
#include<stdio.h>
#include<stdlib.h>
int main()
{
float num1,num2,result=0;
char op;
printf("Enter two numbers\n");
scanf("%f%f",&num1,&num2);
printf("Enter the operator\n");
scanf(" %c",&op);
switch(op)
{
case '+': result=num1+num2;
break;
case '-': result=num1-num2;
break;
case '*': result=num1*num2;
break;
case '/': if(num2!=0)
{
result=num1/num2;
break;
}
else
{
printf("Division by 0 not possible\n");
exit(1);
}
default: printf("Invalid operator\n");
exit(1);
}
printf("Result:%.2f %c %.2f=%.2f\n", num1,op,num2,result);
}


#include<stdio.h>
int main()
{
   int a,b;
   int op;
   printf("Enter two numbers:\n");
   scanf("%d%d",&a,&b);
   printf("Enter operator:\n");
   scanf("%d",&op);
	switch(op)
	{
		case 1: printf("Sum is %d",a+b);
	              break;
		
		case 2: printf("Subtraction is %d",a-b);
		          break;
		
		case 3: printf("Multiplication is %d",a*b);
	              	break;
		
		case 4: if(b!=0)
		          {
		          	printf("Division is %d",a/b);
		          	break;
				  }
				  else
				  {
				  	printf("Division is not possible.\n");
				  	break;
				  }
	
	}
}
