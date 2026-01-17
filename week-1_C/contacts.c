#include<stdio.h>
// #include<cs50.h>

int main(void){
    // get name, age phone number and location from user
    char name[50];
    int age = 0;
    char phone[20];
    char location[100];

    printf("Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Age: ");
    scanf("%d", &age);

    printf("Phone: ");
    fgets(phone, sizeof(phone), stdin);
    
    printf("Location: ");
    fgets(location, sizeof(location), stdin);

    // print the info
    printf("New contact: %s, %i, lives in %s and can be reached at %s\n",name, age, location, phone);

    return 0;
}
