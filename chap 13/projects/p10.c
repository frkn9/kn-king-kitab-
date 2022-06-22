#include <stdio.h>
#include <string.h>

#define N 50
int main(void) {

    char thrombo[N];
    char thramba[N];
    printf("Enter a first name and last name: ");
    
    scanf("%s", thrombo);
    scanf("%s", thramba);

    printf("%s, %c.", thramba, thrombo[0]);




    return 0;

}