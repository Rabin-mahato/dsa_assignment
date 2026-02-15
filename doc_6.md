# Program 6: Creating Min and Max Heaps from an Unordered Array

## Objective: Create a min heap and max heap from the provided unordered array using heapify methods.

### Data Structure Used
Heaps are stored as arrays. A heap is a complete binary tree represented in array format, where:
The parent is at the index i
The left child is at index 2*i +1
The right child is at index 2*i +2

# Functions Overview

1.swap
Interchange values of two integers using a temp variable.

2.minHeapify
Establishes that the subtree at a certain index satisfies the min heap property. Puts the smallest element at the root.

3.buildMinHeap
Execute minHeapify from all non-leaf nodes through the root to produce the minheap.

4.maxHeapify
Establishes that the subtree at a certain index satisfies the max heap property. Places the largest element at the root.

5.buildMaxHeap
Execute maxHeapify from all non-leaf nodes through the root to produce a maxheap.

6.display
Displays the contents of the array.

7.Main Function Overview. An unordered array is created. Two copies of the array are made: one for building the min heap; one for building the max heap. Create and display the min heap. Create and display the max heap.

## Sample Output

Original Array:
4 10 3 5 1
Min Heap:
1 4 3 5 10

Max Heap:
10 5 3 4 1

## Conclusion
Heap can be efficiently built from an unsorted array using heapify method.
Min heap keeps the smallest element at the root while max heap keeps the largest element at the root.

