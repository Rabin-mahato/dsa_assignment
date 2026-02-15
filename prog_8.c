#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000

long comparisons = 0;
long swaps = 0;

/* ---------- Utility ---------- */

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    swaps++;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* ---------- Bubble Sort ---------- */

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            comparisons++;
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

/* ---------- Selection Sort ---------- */

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            comparisons++;
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
            swap(&arr[i], &arr[minIndex]);
    }
}

/* ---------- Insertion Sort ---------- */

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0)
        {
            comparisons++;
            if (arr[j] > key)
            {
                arr[j + 1] = arr[j];
                swaps++;
                j--;
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = key;
    }
}

/* ---------- Merge Sort ---------- */

void merge(int arr[], int left, int mid, int right)
{

    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        comparisons++;
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
        swaps++;
    }

    while (i < n1)
    {
        arr[k++] = L[i++];
    }

    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

/* ---------- Main ---------- */

int main()
{

    int n, choice;

    printf("Enter number of elements (N): ");
    scanf("%d", &n);

    int arr[MAX];

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000 + 1;
    }

    printf("\nNumbers before sorting:\n");
    printArray(arr, n);

    printf("\nChoose Sorting Algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    comparisons = 0;
    swaps = 0;

    switch (choice)
    {
    case 1:
        bubbleSort(arr, n);
        break;
    case 2:
        selectionSort(arr, n);
        break;
    case 3:
        insertionSort(arr, n);
        break;
    case 4:
        mergeSort(arr, 0, n - 1);
        break;
    default:
        printf("Invalid choice\n");
        return 0;
    }

    printf("\nNumbers after sorting:\n");
    printArray(arr, n);

    printf("\nTotal Comparisons: %ld\n", comparisons);
    printf("Total Swaps: %ld\n", swaps);

    return 0;
}
