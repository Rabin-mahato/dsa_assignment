Program 8: Performance Count of Random Number Sorting

Objective  
To generate an array of random values between 1 and 1000, sort them using a chosen sorting method then count the number of comparisons and swaps made.

Data Structure  
An array will be used to store the random integer numbers.

Sorting Algorithms Used  
1. Bubble Sort  
2. Selection Sort  
3. Insertion Sort  
4. Merge Sort  

Global Variables  
comparisons → Number of comparisons performed  
swaps → Number of swaps performed

Program Flow  
1. User inputs N, the number of elements to generate.  
2. The program generates an array of integers randomly using rand().  
3. Displays the unsorted integers.  
4. User selects one of four sorting algorithms.  
5. The selected sorting algorithm sorts the array.  
6. Displays the sorted integers.  
7. Displays total number of comparisons and swaps performed.

Sample Output  

Enter number of elements (N): 5  
Numbers Before Sort:  
345 23 678 12 90  
Choose Sorting Method  
1. Bubble Sort  
2. Selection Sort  
3. Insertion Sort  
4. Merge Sort  
Enter choice: 1  
Numbers After Sort:  
12 23 90 345 678  
Total Comparisons: 10  
Total Swaps: 6  

Conclusion  
All sorting algorithms operate differently resulting in various amounts of comparisons and swaps. For large data sets, merge sort is often more efficient than any of the other algorithms.