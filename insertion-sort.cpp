#include <iostream>

using namespace std;

    /*
    Algorithm simulation 
    suppose we have arr = {5, 4, 10, 1}
    we assume that arr[0] is already sorted
    step 1. we divide the array into two arrays first the part that we assumed that is sorted
    and the other part that's unsorted
    so we have [5],[4,10,1]
    we start to compare the first element in the second part with all the element in the first part
    and find the proper place for it
    in our example we're comparing 4 with 5, 4 must be before 5 in the array
    so our array look like this now 
    temp = 4;
    first array = [?,5]
    second array = [10,1]
    there's no other place for 4 to be rather than index 0 in the first array
    so we have this now 
    first array = [4, 5]
    second array = [10, 1]
    we move to the other element in the second array
    now temp = 10
    first array = [4, 5]
    second array = [1]
    we start to search for the place of 10 in the first array
    there's no other place for 10 to be rather than the last index in the first array
    so we have now 
    first array = [4,5,10]
    second array = [1]
    now we start to compare 1 with the element of the first array
    comparing 1 with 10 it must be before it so we shift the first array
    -> [4,5,?,10]
    comparing 1 with 5 it must be before 5 so we shift the array
    -> [4,?,5,10]
    comparing 1 with 4 it must be before 4 so we shift the array
    -> [?,4,5,10]
    we don't have any other element in the array to compare with so we insert it
    and we'll get the following array -> [1,4,5,10], we don't have any element in the second array so we know that the sorting is done here.\
    
    
    time Complexity in both cases is O(n^2)  
    outer loop will go from 1 to n resulting O(n) time Complexity
    inner loop will go from n to i-1>=0 resulting O(n) time Complexity
    
    cause we have nested loops the time Complexity is O(n^2).
    
    */
    
//Insertion Sort
void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp = arr[i];
        int j = i-1;
        while(j >= 0 && temp < arr[j]){
            //shifting the array from left to right
            arr[j+1] = arr[j];
            //desc loop
            j--;
        }
        arr[j+1] = temp;
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
    insertionSort(arr,size);

    cout<<"array after sorting -> "<<endl;
    displayArray(arr,size);


    return 0;
}
