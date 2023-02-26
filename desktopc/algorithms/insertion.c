#include<stdio.h>
// inserting element at a specified position
int main()
{
    void insertElement(int [],int,int,int);
    void insertEle(int [],int,int,int);

    int a[7] = {1,2,3,4,5};

    int element, index,i,length, n= 5;


    printf("The original elements before inserting are\n");
    for(i = 0;i < n;i++)
    {
        printf("A[%d] ---> %d\n",i, a[i]);
    }

    printf("enter the element you want to insert\n");
    scanf("%d", &element);

    printf("enter the index at which you want to insert\n");
    scanf("%d", &index);

    insertElement(a,element,index,n);

    printf("printing the elements after inserting the new Element\n");
    for(i = 0;i <= n;i++)
    {
        printf("A[%d] ---> %d\n",i, a[i]);
    }
}


void insertElement(int a[], int target, int index,int length)
{
// using a for loop
    int j;
    for(j = length - 1;j >= index; j--)
    {
        a[j + 1] = a[j];
    } 

     a[index] = target;
}
void insertEle(int a[], int target, int index, int length)
{

}
