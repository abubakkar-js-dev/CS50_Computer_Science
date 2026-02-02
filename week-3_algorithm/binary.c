#include<stdio.h>

int binarySearch(int arr[],int length, int find);

int main(void){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int length = sizeof(arr) / sizeof(arr[0]);

    int result_idx = binarySearch(arr,length,6);
    if(result_idx != -1)
    {
        printf("Found at index: %d\n", result_idx);
    }
    else
        printf("Not found\n");
    return 0;
}


int binarySearch(int arr[],int length, int find){
    int start = 0;
    int end = length - 1;

    while(start <= end)
    {
        int mid = (start + end) / 2;

        if(arr[mid] == find)
        {
            return mid;
        }
        else if(arr[mid] < find)
        {
           start = mid + 1; 
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;

}