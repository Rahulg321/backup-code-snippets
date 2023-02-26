#include<stdio.h>
#include<conio.h>
// performing linear and binary search in c
int main()
{
    //function declaration
	int linearSearch(int [], int);
	int linSearch(int [], int);
	void print1(int []);

	int a[5] = {102,23,3123,43,52321};
	int element, result;
	// clrscr();

	printf("enter the element you want to search-->  ");
	scanf("%d", &element);

	result = linSearch(a, element);

	if (result == -1)
	{
		printf("%d was not found in the array\n", element);
	}
	else
	{
		printf("%d found at position %d\n", element, result);
	}
	// print1(a);
	// getch();
}

//function definition

int linearSearch(int a[], int target)
{
	//using for loop
	int loc = -1;

	int j;

	for (j = 0; j < 5;j ++)
	{
        if (a[j] == target)
		{
			return j;
		}
	}

	return loc;
	
}
int linSearch(int a[], int target)
{
	//using while loop
	int loc = -1;
	// int lengthArray = sizeof(a)/sizeof(a[0]);

	int j = 0;

	while (j < 5)
	{
		if (a[j] == target)
		{
			return j + 1;
		}
        j = j + 1;
	}

	return loc;
	
}

void print1(int a[])
{
	int i;
	int st_year = 1950;

	printf("YEAR\tPROFIT\n");

	for(i = 0; i< 5;i++)
	{
		printf("%d\t%d\n",st_year + 1, a[i]);
	}
}