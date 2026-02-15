#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* ---------- Min Heap ---------- */

void minHeapify(int arr[], int n, int i)
{

    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i)
    {
        swap(&arr[i], &arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

void buildMinHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        minHeapify(arr, n, i);
}

/* ---------- Max Heap ---------- */

void maxHeapify(int arr[], int n, int i)
{

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);
}

/* ---------- Display ---------- */

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* ---------- Main ---------- */

int main()
{

    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minHeap[10], maxHeap[10];

    for (int i = 0; i < n; i++)
    {
        minHeap[i] = arr[i];
        maxHeap[i] = arr[i];
    }

    printf("Original Array:\n");
    display(arr, n);

    buildMinHeap(minHeap, n);
    printf("Min Heap:\n");
    display(minHeap, n);

    buildMaxHeap(maxHeap, n);
    printf("Max Heap:\n");
    display(maxHeap, n);

    return 0;
}
