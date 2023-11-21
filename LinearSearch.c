#include <stdio.h>
int linearSearch(int *, int , int);
int main(){
    int arrSize = 20;
    int arr[] = {1,2,3,4,5,6,8,8,9,9,7,6,5,5,4,4,4,3,3,5};
    int key = 9;
    

    printf("%d", linearSearch(arr, arrSize, key));
}


int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(key == arr[i]){
            return i;
        }
    }
    return -1;
}