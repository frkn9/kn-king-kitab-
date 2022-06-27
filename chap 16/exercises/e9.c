#include <stdbool.h>
#include <stdio.h>
#include "e8.c"

struct color make_color(int red, int green, int blue);

int get_red(struct color p);

bool equal_color(struct color color1, struct color color2);

struct color brighter(struct color p);

struct color darker(struct color p);

int main(void) {

    struct color my_color = {123, 48, 214};

    my_color = darker(my_color);

    printf("%d %d %d", my_color.red, my_color.green, my_color.blue);

}

struct color make_color(int red, int green, int blue) {

    struct color p;

    if (red < 0)
        p.red = 0;
    else if (red > 255)
        p.red = 255;
    else 
        p.red = red;

    if (green < 0)
        p.green = 0;
    else if (green > 255)
        p.green = 255;
    else 
        p.green = green;
    
    if (blue < 0)
        p.blue = 0;
    else if (blue > 255)
        p.blue = 255;
    else 
        p.blue = blue;
}


int get_red(struct color p) {
    return p.red;
}

bool equal_color(struct color color1, struct color color2) {
    if(color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue) 
        return true;
    else 
        return false;
}

struct color brighter(struct color p) {
    float divisor = 0.7;

    if(p.red == 0 && p.blue == 0 && p.green == 0) {
       p.red = 3;
       p.blue = 3;
       p.green = 3;

       return p;
    }
    if(( p.red > 0 && p.red < 3) || (p.blue > 0 && p.blue < 3) || (p.green > 0 && p.green < 3) ) {
        if (p.red > 0 && p.red < 3) 
            p.red = 3;
        if (p.blue > 0 && p.blue < 3) 
            p.blue = 3;
        if (p.green > 0 && p.green < 3) 
            p.green = 3;
    }

    p.red = (float) p.red / divisor;
    p.blue = (float) p.blue / divisor;
    p.green = (float) p.green / divisor;

        if( p.red > 255)
            p.red = 255;

        if(p.blue > 255)
            p.blue = 255;

        if(p.green > 255)
            p.green = 255;

    return p;
     
    }

struct color darker(struct color p) {

    float divisor = 0.7;

    p.red = p.red * divisor;
    p.green = p.green * divisor;
    p.blue = p.blue * divisor;

    return p;
}
   