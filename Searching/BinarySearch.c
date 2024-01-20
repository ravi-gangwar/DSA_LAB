#include <stdio.h>
 int binarySearch(int*, int, int);
int main(){
    int n = 18;
    int arr[] = {22,33,44,55,66,77,88,99,100,110,223,444,555,666,777,888,999,99999};
    int key = 100;


   int index =  binarySearch(arr, n, key);
   (index != -1) ? printf("Index is : %d", index) : printf("Not have");

 }

 int binarySearch(int arr[], int n, int key){
    int start = 0; 
    int end = n-1;

    while(start < end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            end = mid-1;
        }else{
            start = mid + 1;
        }
    }
    return -1;

 }