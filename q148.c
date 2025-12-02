#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1, s2;

    // Input for Student 1
    printf("Enter details for Student1 (Name Roll Marks): ");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    // Input for Student 2
    printf("Enter details for Student2 (Name Roll Marks): ");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    // Compare all fields
    if(strcmp(s1.name, s2.name) == 0 &&
       s1.roll == s2.roll &&
       s1.marks == s2.marks) {
        printf("Same");
    } else {
        printf("Not Same");
    }

    return 0;
}
