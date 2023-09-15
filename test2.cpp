#include <stdio.h>
#include <iostream>
using namespace std;
void printArray(int arr[], int start, int end);
void swap(int &a, int &b);
// int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void quickSort(int arr[], int start, int end, int &time)
{
    if (start >= end)
        return;
    int startI = start;
    int endI = end;
    int pivot = arr[start + (end - start) / 2]; // set pivot to value
    cout << "Mang dang xet: ";
    printArray(arr, start, end);
    cout << "pivot: " << pivot << endl;
    while (startI <= endI)
    {
        while (arr[startI] < pivot)
            startI++; // use pivot by value
        while (arr[endI] > pivot)
            endI--; // use pivot by value
        if (startI <= endI)
        {
            cout << "Hoan vi " << arr[startI] << " va " << arr[endI] << ": ";
            swap(arr[startI], arr[endI]);
            printArray(arr, start, end);
            startI++;
            endI--;
        }
    }
    time++;
    cout << "Chia mang lan "<<time<<" :\nMang 1:";
    printArray(arr, start, endI);
    cout << "Mang 2: ";
    printArray(arr, startI, end);
    if (start < endI)
        quickSort(arr, start, endI, time); // < not <=
    cout << "End Mang 1 \n";
    if (startI < end)
        quickSort(arr, startI, end, time); // < not <=
}

void printArray(int arr[], int start, int end)
{
    int i;
    cout << "[";
    for (i = start; i <= end; i++)
    {
        cout << arr[i];
        (i != end) && cout << ",\t";
    }
    cout << "]\n";
}

int main()
{
    int time = 0;
    int n;
    cout << "Nhap n= ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }
    cout << "Mang ban dau: \n";
    printArray(arr, 0, n - 1);
    quickSort(arr, 0, n - 1, time);
    cout << "Mang sau khi duoc sap xep: \n";
    printArray(arr, 0, n - 1);
}