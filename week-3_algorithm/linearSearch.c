#include<stdio.h>
#include<string.h>

int main(void){
    // lenear search
    int numbers[] = {1,4,64,54,23,75,20};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int num = 0;

    //  get number
    printf("Enter a Number to find: ");
    scanf("%i",&num);



    for(int i = 0; i < length; i++){
        if(numbers[i] == num){
            printf("Found the number\n");
            return 0;
        }
    }

    printf("The number not founded.\n");
    return 1;
}
