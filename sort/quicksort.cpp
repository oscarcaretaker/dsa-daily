#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];   // pivot selection
    int i = low;
    int j = high;

    while(i < j)
    {
        while(arr[i] <= pivot && i <= high)
            i++;

        while(arr[j] > pivot)
            j--;

        if(i < j)
        {
            swap(arr[i], arr[j])
        }
    }

    swap(arr[low], arr[j]);
    return i;   // ERROR: wrong return value
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int loc = partition(arr, low, high);
        quickSort(arr, low, loc);
        quickSort(arr, loc + 1, high);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    quickSort(arr, 0, n);

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}

