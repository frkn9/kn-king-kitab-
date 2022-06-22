#include <stdio.h>



struct part {
        int number;
        char name[14];
        int on_hand;
    } part1 = {528, "Disk drive", 10}, part2 = {940, "Printer cable", 5}; 

void print_part(struct part p) {
    printf("Part number: %d\n", p.number);
    printf("Part name: %s\n", p.name);
    printf("Quantity on hand: %d\n", p.on_hand);
}

int main(void) {
    
   print_part(part1);
    
}