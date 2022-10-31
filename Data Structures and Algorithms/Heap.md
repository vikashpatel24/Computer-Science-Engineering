## What is Heap Data Structure?  
A Heap is a special Tree-based 
data structure in which the tree
 is a complete binary tree.  

## Operations of Heap Data Structure! 
1. Heapify: a process of creating a heap
 from an array.  

2. Insertion: process to insert an element in 
existing heap time complexity O(log N).  

3. Deletion: deleting the top element of the heap or
 the highest priority element, and then organizing 
the heap and returning the element with time complexity O(log N).  

4. Peek: to check or find the most prior element in the
 heap, (max or min element for max and min heap).  

## Code Implementation In C  
~~~
#include<stdio.h>
#include<limits.h>
 
/*Declaring heap globally so that we do not need to pass it as an argument every time*/
/* Heap implemented  here is Min Heap */
 
int heap[1000000], heapSize;
/*Initialize Heap*/
void Init() {
    heapSize = 0;
    heap[0] = -INT_MAX;
}
 
/*Insert an element into the heap */
void Insert(int element) {
    heapSize++;
    heap[heapSize] = element; /*Insert in the last place*/
    /*Adjust its position*/
    int now = heapSize;
    while (heap[now / 2] > element) {
        heap[now] = heap[now / 2];
        now /= 2;
    }
    heap[now] = element;
}
 
int DeleteMin() {
    /* heap[1] is the minimum element. So we remove heap[1]. Size of the heap is decreased.
     Now heap[1] has to be filled. We put the last element in its place and see if it fits.
     If it does not fit, take minimum element among both its children and replaces parent with it.
     Again See if the last element fits in that place.*/
    int minElement, lastElement, child, now;
    minElement = heap[1];
    lastElement = heap[heapSize--];
    /* now refers to the index at which we are now */
    for (now = 1; now * 2 <= heapSize; now = child) {
        /* child is the index of the element which is minimum among both the children */
        /* Indexes of children are i*2 and i*2 + 1*/
        child = now * 2;
        /*child!=heapSize beacuse heap[heapSize+1] does not exist, which means it has only one
         child */
        if (child != heapSize && heap[child + 1] < heap[child]) {
            child++;
        }
        /* To check if the last element fits ot not it suffices to check if the last element
         is less than the minimum element among both the children*/
        if (lastElement > heap[child]) {
            heap[now] = heap[child];
        } else /* It fits there */
        {
            break;
        }
    }
    heap[now] = lastElement;
    return minElement;
}
 
int main() {
    int number_of_elements;
    printf("Program to demonstrate Heap:\nEnter the number of elements: ");
    scanf("%d", &number_of_elements);
    int iter, element;
    Init();
    printf("Enter the elements: ");
    for (iter = 0; iter < number_of_elements; iter++) {
        scanf("%d", &element);
        Insert(element);
    }
    for (iter = 0; iter < number_of_elements; iter++) {
        printf("%d ", DeleteMin());
    }
    printf("\n");
    return 0;
}
~~~

