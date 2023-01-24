#include<iostream>
using namespace std;
// int max(int *arr,int size)
// {
//     int max_value=arr[0];
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]> max_value)
//         {
//             max_value=arr[i];
//         }
//     }

//     return max_value;
// }
void count(int arr[],int size)
{
    int k=arr[0];
    for(int i=0;i<size;i++)
    {
     k=max(k,arr[i]);
    }

    int count[k]={0};

    for(int i =0;i<size;i++)
    {
        count[arr[i]]++;
    }

    for(int i=0;i<k;i++)
    {
        count[i]=count[i]+count[i-1];
    }

    int b[size];
    for(int i= size-1;i>=0;i--)
    {
        b[--count[arr[i]]]=arr[i];
    }

    for(int i =0;i<size;i++)
    {
        arr[i]=b[i];
    }
}

void display(int arr[], int size)
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
    cout << "Sorted Array is : ";
    count(arr,size);
    display(arr,size);

    
    return 0;
}