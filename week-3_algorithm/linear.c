#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void linear_search(int nums[],int length,int guess);

int main(void)
{
    int nums[] = {1,2,3,4,5};
    int length = sizeof(nums) / sizeof(nums[0]);


    int guess;
    printf("Enter the guesses value: ");
    scanf("%i",&guess);

    linear_search(nums,length,guess);
    
    // for (int i = 0; i < 5; i++)
    // {
    //     if (nums[i]== guess)
    //     {
    //         printf("You win");
    //         break;
    //     }else
    //     {
    //         printf("You failed");
    //     }
        
    //     printf("%i\n",nums[i]);
    // }
    

    return 0;
}


void linear_search(int nums[],int length,int guess){


     for (int i = 0; i < length; i++)
    {
        if (nums[i]== guess)
        {
            printf("You win");
            return;
        }
    }

    printf("You failed");
    return;
}