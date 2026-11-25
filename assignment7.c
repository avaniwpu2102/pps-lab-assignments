#include <stdio.h>

struct Student {
    int rollno;
    char name[30];
    float marks;
};

int main(void) {
    struct Student s[3];
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("Enter roll, name, and marks: ");
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
    }
    
    printf("\nStudent Records\n");
    for (i = 0; i < 3; i++) {
        printf("%d %s %.2f\n", s[i].rollno, s[i].name, s[i].marks);
    }
    
    return 0;
}
