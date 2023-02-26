#include<stdio.h>
#include<conio.h>
int main()
{   // function declaration
     int add(int, int);
     int a,b,result;
     
     printf("enter the values of a and b\n");
     scanf("%d", &a);
     scanf("%d", &b);
     result = add(a,b);
     printf("the result is %d", result);

}

//function definition
int add (int a, int b)
{
	return a + b;
}
