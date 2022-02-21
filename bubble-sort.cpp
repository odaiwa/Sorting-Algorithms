#include <iostream>

using namespace std;

    /**
    Bubble Sort is the simplest sorting algorithm that works by repeatedly
    swapping the adjacent elements if they are in wrong order.
    Example:

    First Pass:
    ( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
    ( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4
    ( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2
    ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

    Worst and Average Case Time Complexity: O(n*n)
    */



//heap sort
void bubbleSort(int arr[], int n)
{
    bool isSorted;
    for (int i = 0 ;i<n; i++){
        isSorted = true;
        for (int j = 1; j < n - i; j++) {
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
                isSorted = false;
            }
        }
        if(isSorted)
            return;
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
    bubbleSort(arr,size);

    cout<<"array after sorting -> "<<endl;
    displayArray(arr,size);

    return 0;
}
