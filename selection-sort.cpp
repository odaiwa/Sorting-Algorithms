#include <iostream>

using namespace std;

    /*
    Algorithm simulation
    The selection sort algorithm sorts an array by repeatedly finding the minimum element from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
    1) The subarray which is already sorted.
    2) Remaining subarray which is unsorted.
    In every iteration of selection sort, the minimum element from the unsorted subarray is picked and moved to the sorted subarray.

    arr[] = 64 25 12 22 11

    Find the minimum element in arr[0...4]
    and place it at beginning
    11 25 12 22 64

    Find the minimum element in arr[1...4]
    and place it at beginning of arr[1...4]
    11 12 25 22 64

    Find the minimum element in arr[2...4]
    and place it at beginning of arr[2...4]
    11 12 22 25 64

    Find the minimum element in arr[3...4]
    and place it at beginning of arr[3...4]
    11 12 22 25 64

    Time Complexity: O(n^2) as there are two nested loops.
    */


//swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//Selection Sort
void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minIndex =i;
        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        if(minIndex != i )
            swap(&arr[minIndex], &arr[i]);
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
    selectionSort(arr,size);

    cout<<"array after sorting -> "<<endl;
    displayArray(arr,size);


    return 0;
}
