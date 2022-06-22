#include <stdio.h>

struct complex {
    double real;
    double imaginary;
};


struct complex make_complex(struct complex a, struct complex b) {
    return (struct complex) {a.real + b.real, a.imaginary + b.imaginary};
}


int main(void) {
    

    struct complex c4;

    struct complex c1, c2, c3;



    printf("%.2lf\n", c3.real);
    printf("%.2lf\n", c3.imaginary);


}