#include<stdio.h>
#include<stdbool.h>


void bubbleSort(int arr[],int length);

int main(void)
{
    int arr[] = {5,3,4,1,8,9,2,6,7};
    int len = sizeof(arr) / sizeof(arr[0]);

    // test 
    bubbleSort(arr,len);

    for (int i = 0; i < len; i++)
    {
        printf("%i",arr[i]);
    }
    

    return 0;
}


void bubbleSort(int arr[],int length){
    bool isSwapped = false;

    for (int i = 0; i < length - 1; i++)
    {
        isSwapped = false;

        for (int j = 0; j < length - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
                isSwapped = true;
            }
        }
        
        if(isSwapped == false)
            break;
    }
    
}

