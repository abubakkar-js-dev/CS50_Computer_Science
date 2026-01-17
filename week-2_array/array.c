#include<stdio.h>
#include<stdlib.h>

#define SIZE 6
#define MAX_NAME_LENGTH 50

void getFriends();

int main(void){
    // char *friends[SIZE];
    // friends[0] = "Alice";
    // friends[1] = "Bob";
    // friends[2] = "Charlie";
    // friends[3] = "Diana";
    // printf("My friends are: %s, %s, %s, and %s.\n", friends[0], friends[1], friends[2], friends[3]);
    getFriends();

    return 0;
}

void getFriends(){
    int size;
    char friendName[MAX_NAME_LENGTH];
    
    // get size number of friends from user
    printf("How many friends do you have? ");
    scanf("%d", &size);
    printf("\n");

    
    if(size <= 0)
    {
        printf("Enter a valid number of friends.\n");
        return;
    }
    
    char *friends[size];


    for(int i = 0; i < size; i++){
        printf("Enter the name of your friend: ");
        friends[i] = malloc(MAX_NAME_LENGTH * sizeof(char));
        fgets(friends[i], sizeof(MAX_NAME_LENGTH), stdin);
    }
    

    printf("Your friends are:\n");
    for(int i = 0; i < size; i++){
        printf("%s\n", friends[i]);
    }
 


}