#include <stdio.h>
#include <string.h>


struct student{
    char name[15];
    char surname[15];
    int student_number;
    int grade;
};

int main(void) { 
        
    struct student ahmet = {"Ahmet", "Gedikli", 150200073, 97};
    struct student mehmet = {"Mehmet", "Yilmaz", 150100085, 54};

    printf("%s\n%s\n%d\n%d\n\n", ahmet.name, ahmet.surname, ahmet.student_number, ahmet.grade);
    printf("%s\n%s\n%d\n%d", mehmet.name, mehmet.surname, mehmet.student_number, mehmet.grade);
}





