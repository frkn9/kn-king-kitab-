#include<stdio.h>

int main() {
    int i = 10;
  /*  while (i> 0)
    {
         
        printf("dummy text\n");
        i--;

        if (i > 2)
        {
            continue;
        }

        printf("dummy text 2\n"); 
    }  */

    while (i> 0)
    {
         
        printf("dummy text\n");
        i--;

        if (i > 2)
        {
            goto exit;
        }

        printf("dummy text 2\n");
    }  
    exit: ;
}



