#include <stdio.h>

struct complex {
    double real, imaginary;
};

struct complex make_complex(double a, double b);

struct complex add_complex(struct complex a, struct complex b);

int main(void) {
    struct complex c1, c2, c3;
    struct complex m, k;
    m = make_complex(2.0, 1.0);
    c1 = m, c2 = m, c3 = m;


    printf("m.real = %f, m.imaginary = %f\n", m.real, m.imaginary);

    k = add_complex(m, m);

    printf("m.real = %f, m.imaginary = %f\n", k.real, k.imaginary);

}

struct complex make_complex(double a, double b) {

    struct complex p;
    p.real = a;
    p.imaginary = b;

    return  p;
}

struct complex add_complex(struct complex a, struct complex b) {

    struct complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;

    return c;
}