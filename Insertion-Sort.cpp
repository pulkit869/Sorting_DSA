#include<iostream>
using namespace std;
void insertion(int * arr ,int size)
{
    for(int i = 1; i< size; i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }

            else
            {
                break;
            }
        }

        arr[j+1]=temp;
    }
}

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;
    cout << "Enter the Elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Unsorted Array is : ";
    display(arr, size);
    cout << endl;
    cout << "Sorted Array is : ";
    insertion(arr, size);
    display(arr, size);

    return 0;
}

/*
1. Adaptable Algorithm
2. Stable
3. useful for small Size.

4. Space Complexity = O(1)

5. Time Complexity = O(n^2)
    (i) Best case: O(n)
    (ii) Worst Case: O(n^2)
*/