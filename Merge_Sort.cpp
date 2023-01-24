#include<iostream>
using namespace std;

void merge(int *arr,int s, int e)
{
    int mid=(s+e)/2;

    int len1= mid-s+1;
    int len2= e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int main_array_index=s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[main_array_index++];
    }

    main_array_index=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[main_array_index++];
    }

    int index1=0;
    int index2=0;
    main_array_index=s;

    while (index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[main_array_index++]=first[index1++];
        }
        else
        {
            arr[main_array_index++]=second[index2++];
        }
    }
    
    while(index1<len1)
    {
         arr[main_array_index++]=first[index1++];
    }

    while(index2<len2)
    {
        arr[main_array_index++]=second[index2++];
    }
}

void merge_sort(int *arr,int s,int e)
{
    if(s>=e)
    {
        return;
    }

    int mid = (s+e)/2;

    merge_sort(arr,s,mid);

    merge_sort(arr,mid+1,e);

    merge(arr,s,e);
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

    merge_sort(arr,0,size-1);
    display(arr,size);
    return 0;
}