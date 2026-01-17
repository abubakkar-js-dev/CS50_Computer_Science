#include<stdio.h>
#include<stdlib.h>

void getAverage();

int main(void){
    int sum = 0;
    int numbers[6];
    int count = 0;
    float average;

    numbers[0] = 10; 
    numbers[1] = 21;
    numbers[2] = 20;
    numbers[3] = 222;
    numbers[4] = 5;
    numbers[5] = 15;

    count = sizeof(numbers) / sizeof(numbers[0]);
    printf("Count of numbers: %d\n", count);

    for(int i = 0; i < count; i++){
        sum += numbers[i];
    }

    average = (float)sum / count;
    printf("Average: %.2f\n", average);

    //  Dynamically get average from user
    printf("\nNow let's calculate the average of numbers you provide.\n");
    getAverage();

    return 0;
}


void getAverage(){
    int sum = 0;
    int numLength = 0;
    float average;

    // get count of numbers from user
    printf("How many numbers do you want to average? ");
    scanf("%d", &numLength);

    int numbers[numLength];

    // get numbers from user
    for( int i = 0; i < numLength; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    
    }

    average = (float)sum / numLength;
    printf("The average is: %.2f\n", average);
}