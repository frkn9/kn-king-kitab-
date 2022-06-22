#include <stdio.h>
    //bu kitapta değil kendim ekledim, getcharda chyi tanımlarken *space* koyunca ch = *boşluk* oluyor ve 
    // sadece ilk gelen karakteri okuyor okunmayan karakter hemen atılmıyor birdahaki getchar onu emiyor dikkat et.
int main() {
    
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("The character you entered is: ");
    putchar(ch); 
    char a;
    a=getchar();
    printf("\n");
    putchar(a);
    
}
    