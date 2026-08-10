#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Student{
    char name[50]; 
    int age;
    float gpa;
    bool isFullTime;
};


int main(){

    struct Student student1 = {"Théo", 20, 3.2, true}; 
    struct Student student2;

    strcpy(student2.name, "Jade");
    student2.age = 22;
    student2.gpa = 3.4;
    student2.isFullTime = false;

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", (student1.isFullTime) ? "Yes" : "No"); 

    printf("\n");
    printf("%s\n", student2.name);
    printf("%d\n", student2.age);
    printf("%.2f\n", student2.gpa);
    printf("%s\n", (student2.isFullTime) ? "Yes" : "No"); 

    return 0;
}