program of college
1. simple calculator using switch~
2. electricity bill calculation~
3. quadratic equation roots calculation~
4. taylor series~
5. bubble sort~
6. binary search~


//1. by college simple calculator simulation
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



// simple calculator simulation
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



//5. bubble sort
#include<stdio.h>
int main()
{
	int a[100],i,j,temp=0,n;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("Enter the values:\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	printf("Original values are:\n");
 	for(i=0;i<n;i++)
 	    printf("%d\t",a[i]);
 	for(i=1;i<n;i++)
 	   {
 	   	for(j=0;j<n-i;j++)
 	   	   {
 	   	   	if(a[j]>a[j+1])
 	   	   	  {
 	   	   	  	temp=a[j];
 	   	   	  	a[j]=a[j+1];
 	   	   	  	a[j+1]=temp;
					 }
			   }
		}
	printf("\nThe sorted elements are:\n");
	for(i=0;i<n;i++)
	   printf("%d\t",a[i]);
} 


//4. taylor series
// sin(x)=x/1!-x^3/3!+x^5/5!............
#include<stdio.h>
#include<math.h>
#define PI 3.142

int main()
{
	int degree, i;
	float x, nr, dr, term, sum=0;
	printf("Enter the value of degree:\n");
	scanf("%d",&degree);
	x=degree*(PI/180);
	nr=x;
	dr=1;
	i=2;
	do
	{
		term=nr/dr;    // this is the term of taylor series
		nr=-nr*x*x;    // numerator of each term of series
		dr=dr*i*(i+1);  // denumerator of each term of series
		sum=sum+term;   // sum of each term's value
		i=i+2;           // to match the difference
	}while(fabs(term)>=0.000001);
	printf("sin of %d=%.3f\n",degree,sum);
	printf("sin using built-in function for %d=%.3f",degree,sin(x));
	
	
}


// quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,disc,root1,root2,real,imag;
	printf("Enter the value of a, b & c:\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0 && b==0)
	  printf("Roots can't be determined.\n");
	else if( a==0)
	     { printf("Linear Equation\n");
	      root1=(-c/a);
	      printf("Root1=%.3f",root1);
	  }
	    else
 	{   disc=(b*b-4*a*c);
	    if(disc==0)
	      {
	      	printf("Root are real and equal.\n");
	      	root1=root2=-b/(2*a);
	      	printf("Root1=%.3f  Root2=%.3f\n",root1,root2);
		  }
		  else if(disc>0)
		     {
		     	printf("Roots are real and distict.\n");
		     	root1=(-b-sqrt(disc))/(2*a);
		     	root2=(-b+sqrt(disc))/(2*a);
		     	printf("Root1=%.3f and Root2=%.3f",root1, root2);
			 }
			   else 
			   { 
			      printf("Roots are real and imagenary.\n");
			      real=-b/(2*a);
			      imag=sqrt(fabs(disc))/(2*a);
			      printf("Root1=%.3f+i(%.3f) and Root2=%.3f+i(%.3f)",real,imag,real,imag);
			   }
		
		  }      
}



// electricity bill calculation
#include<stdio.h>
int main()
{
	char name[100];
	float unit, charge=100;
	printf("Enter the Name of the user:\n");
	scanf("%s",name);
	printf("Enter units comsumed:\n");
	scanf("%f",unit);
	if(unit<=200)
	  charge=charge+unit*0.80;
	else if(unit<=300)
	       charge=charge+200*0.80+(unit-200)*0.90;
	     else 
	     {
		
	        charge=charge+200*0.80+100*0.90+(unit-300)*1;
	          if(charge>400)
	             charge=charge*0.15;
	         }
	        printf("Charge=%.3f",charge);
}



// binary search
#include<stdio.h>
int main()
{
	int a[100],i,n,key,low, high, mid, found=0;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("Enter the values in ascending order:\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	printf("Enter the key to search:\n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high&&!found)
	{
		mid=(low+high)/2;
		if(a[mid]=key)
		    found=1;
		else if(a[mid]<key)
		        low=mid+1;
		     else
		        high=mid-1;
		        
	}
	if(found==1)
	   printf("Key found in position:%d\n",mid+1);
	else
	   printf("Key is not found");
}
