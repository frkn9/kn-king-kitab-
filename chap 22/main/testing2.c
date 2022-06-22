#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

struct student_data {
    int order;
    char name[15];
    char surname[10];
    int score;
}student;

int main(void) {

    FILE* fp;
    int order_temp;
    fp = fopen("students.txt", "r");
    printf("enter student order num: ");
    scanf("%d", &student.order);
    fseek(fp, (student.order - 1) *sizeof(struct student_data), SEEK_SET);
    fread(&student, sizeof(struct student_data), 1 , fp);

    printf("%d\n", student.order);
    printf("%s\n", student.name);
    printf("%s\n", student.surname);
    printf("%d\n", student.score);
}