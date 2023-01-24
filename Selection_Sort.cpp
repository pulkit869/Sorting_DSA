#include <iostream>
using namespace std;

void selection(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if (arr[j]<arr[min])
            {
                int temp=arr[j];
                arr[j]=arr[min];
                arr[min]=temp;
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
    selection(arr, size);
    display(arr, size);

    return 0;
}