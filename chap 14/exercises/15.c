#include <stdio.h>

#define ENG 1

#if defined(ENG)    
#define INSERT_DISK "Insert Disk 1"
#elif defined(SPA)
#define INSERT_DISK  "Inserte El Disco 1"
#elif defined(FR)
#define INSERT_DISK  "Inserez Le Disque 1"
#endif

int main(void) {
    printf("%s", INSERT_DISK);

    int class = 1;
}