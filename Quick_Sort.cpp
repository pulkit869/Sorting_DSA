#include<iostream>
using namespace std;

void swap(int* arr,int m,int n)
{
    int temp=arr[m];
    arr[m]=arr[n];
    arr[n]=temp;
}

int partion(int arr[],int s,int e)
{
    int pivot=arr[0];
    
    int count;
    for(int i=0;i<e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }

    int pivot_index=s+count;
    swap(arr[s],arr[pivot_index]);
     int i = s;int j=e;
     while(i<pivot_index && j>pivot_index)
     {
        while(arr[i]<pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<pivot_index && j>pivot_index)
        {
            swap(arr[i++],arr[j--]);
        }
     }

     return pivot_index;
}

void quick_sort(int arr[] ,int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int p= partion(arr,s,e);

    quick_sort(arr,s,p-1);

    quick_sort(arr,p+1,e);

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
    quick_sort(arr,0,size-1);
    display(arr,size);

    

    return 0;
}