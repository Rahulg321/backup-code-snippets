#include<stdio.h>
// performingvbinary search in c
int main()
{
    int binarySearch(int [], int);

    int a[10],i,element,result;
    printf("enter any 10 sorted elements ---> \n");
    for(i = 0; i< 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("after insertion the elements are :- \n");
    for(i = 0; i< 10; i++)
    {
        printf("%d\n", a[i]);
    }
 
    printf("enter the element you want to find\n");
    scanf("%d", &element);
    result = binarySearch(a, element);

	if (result == -1)
	{
		printf("%d was not found in the array\n", element);
	}
	else
	{
		printf("%d found at position %d\n", element, result);
	}

}


int binarySearch(int a[], int target)
{
    int n = 10,beg = 0;
    int end = n - 1;
    int loc = -1;
    int mid = 0;

    while (beg < end)
    {
        mid = (beg+end)/2;

        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }

    return loc;
        
}
