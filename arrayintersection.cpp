#include <iostream>
using namespace std;

int intersection(int arr1[], int arr2[])
{
    int i = 0;
    int j = 0; int counter = 0;
    while (i < 5) {
        while (j < 5) {
            if (arr1[i] == arr2[j]) {
                
                break;
            }
            j++;
        }
        i++;
    }
    return counter;
}

int main()
{

    int arr1[5] = {5, 2, 7, 9, 0};
    int arr2[5] = {1, 3, 4, 7, 0};

    cout << intersection(arr1, arr2);
    return 0;
}