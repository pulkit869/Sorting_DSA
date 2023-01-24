#include<iostream>
using namespace std;

void Shell(int *arr , int size)
{
    for(int gap=size/2;gap>=1;gap/2)
    {
        for(int j=gap;j<size;j++)
        {
            for(int i=j-gap;i>=0;i= i-gap)
            {
                if(arr[i]<arr[i+gap])
                {
                    break;
                }

                else
                {
                    int temp=arr[i];
                    arr[i]=arr[i+gap];
                    arr[i+gap]=arr[i];
                }
            }
        }
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
    Shell(arr, size);
    display(arr, size);

     
    return 0;
}