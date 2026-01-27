#include<stdio.h>
#include<string.h>

typedef struct{
    char name[50];
    int age;
    float marks;
} student;

student get_student(void);

int main(void){

    student student_1;
    strcpy(student_1.name, "Abu Bakkar");
    student_1.age = 21;
    student_1.marks = 83;

    printf("Name: %s, Age: %i, Marks: %.2f\n", student_1.name, student_1.age, student_1.marks);

    student student_2 = get_student();
    printf("Name: %s, Age: %i, Marks: %.2f\n", student_2.name, student_2.age, student_2.marks);

    return 0;
}

student get_student(void){
    student new_student;
    
    printf("Name: ");
    fgets(new_student.name, sizeof(new_student.name), stdin);
    new_student.name[strcspn(new_student.name, "\n")] = '\0'; // Remove newline
    
    printf("Age: ");
    scanf("%d", &new_student.age);
    
    printf("Marks: ");
    scanf("%f", &new_student.marks);
    
    getchar(); // Clear the newline from input buffer

    return new_student;
}
