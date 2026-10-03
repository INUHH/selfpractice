#include <iostream>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (arr[i] <= pivot && i < high)
    {
        i++;
    }
    while (arr[j] > pivot)
    {
        j--;
    }
    while (i < j)
    {
        swap(arr[i], arr[j]);

        while (arr[i] <= pivot && i < high)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int j = partition(arr, low, high);

        quicksort(arr, low, j - 1);
        quicksort(arr, j + 1, high);
    }
}
int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
    quicksort(arr, 0, n - 1);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}