#include<stdio.h>

int main() {

    for (int i = 10, j = 30; i >= 1 && j > 0; i /= 2, j--) {   // 10, 5, 3, 2, 1 1 1 1 ..... burda j dummy variable fonksiyonu durdurmak için

        printf("%5d", i++);
    }
}