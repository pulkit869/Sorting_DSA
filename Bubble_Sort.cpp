#include <iostream>
using namespace std;
void Bubble(int size, int *arr)
{
    int counter = 1;

    while (counter < size)
    {
        for (int i = 0; i < size - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            
        }

        counter++;
        
    }
}

void display(int size, int *arr)
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
    cout << "Enter Size Of array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    display(size, arr);
    Bubble(size, arr);

    cout << endl;
    cout<<"Sorted Array is : ";
    display(size, arr);

    return 0;
}