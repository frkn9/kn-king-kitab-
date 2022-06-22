#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct student_data {
    char name[15];
    char surname[10];
    int no;
};


int main(void) {    

    struct student_data* str_ptr;

    struct student_data student1;

    str_ptr = &student1;

    scanf("%s%s%d", student1.name, student1.surname, &student1.no);

    printf("%s\n%s\n%d", str_ptr ->name, str_ptr ->surname, str_ptr ->no);
}

