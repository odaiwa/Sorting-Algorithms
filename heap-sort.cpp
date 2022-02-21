#include <iostream>

using namespace std;

    /**
    Heap Sort Algorithm for sorting in increasing order:
    1. Build a max heap from the input data.
    2. At this point, the largest item is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of heap by 1. Finally, heapify the root of the tree.
    3. Repeat step 2 while the size of the heap is greater than 1.


    How to “heapify” a tree?

    The process of reshaping a binary tree into a Heap data structure is known as ‘heapify’.
     A binary tree is a tree data structure that has two child nodes at max. If a node’s
     children nodes are ‘heapified’, then only ‘heapify’ process can be applied over
      that node. A heap should always be a complete binary tree.

    Starting from a complete binary tree, we can modify it to become a Max-Heap by running
    a function called ‘heapify’ on all the non-leaf elements of the heap. i.e. ‘heapify’
    uses recursion.


    Algorithm for “heapify”:

    heapify(array)
       Root = array[0]
       Largest = largest( array[0] , array [2 * 0 + 1]. array[2 * 0 + 2])
       if(Root != Largest)
           Swap(Root, Largest)




    Build Max-Heap takes n logn time
    we can build max heap in O(n)

    insertion for heap is O(n logn) (for n elements)
    deletion from heap takes O(nlogn) (for n elements)


    total time complexity is O(n logn)
    */



void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}


//heap sort
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void displayArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{


    int arr[]={5,4,10,1,6,2};
    int size = sizeof(arr)/sizeof(int);
    cout<< "array before sorting -> "<<endl;

    displayArray(arr,size);
    heapSort(arr,size);

    cout<<"array after sorting -> "<<endl;
    displayArray(arr,size);


    return 0;
}
