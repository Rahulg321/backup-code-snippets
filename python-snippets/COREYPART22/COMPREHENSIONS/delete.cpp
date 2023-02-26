#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int length = sizeof(arr1) / sizeof(arr1[0]);

    cout << "the length of an array is " << length << endl;
}