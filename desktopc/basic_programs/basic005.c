#include<stdio.h>
#define PI 3.14

int main()
{   
//format specifiers in c
int a = 3;
float b = 7.3;
printf("the value of a is %d and the value of b is %f\n", a,b);
printf("decimal precision of value b is %.2f\n",b);
printf("offset precision of value b is %10.2f\n",b);

// %c -> for char
// %d -> for int
// %f -> for float
// %l -> long
// %lf -> double

//we can define a constant keyword in c as well
//two ways to define a constant
// const and #define processor

const int c = 10;

printf("printing the value of Pi -> %f\n", PI);
}































