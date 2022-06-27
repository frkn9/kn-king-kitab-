#include <stdio.h>

struct dialing_code {
    char* country;
    int code;
};

const struct dialing_code country_codes[] = { {"Argentina", 54}, {"Brazil", 55} , {"China", 86},
 {"Congo, Dem. Rep. Of", 243}, {"Ethiopia", 251}, {"Germany", 49}, {"Bangladesh", 880}, {"Burma", 95}, 
 {"Colombia", 57}, {"Egypt", 20}, {"France", 33}, {"India", 91} };


int main(void) {

    int code;
    int i;
    printf("Enter a country code: ");
    scanf("%d", &code);

    for(i = 0; i < 12; i++) {
        if (code == country_codes[i].code) {
            printf("Country with the country code %d is: %s.\n", code, country_codes[i].country );
            return 0;
        }
    }

    printf("Country with the country code %d couldn't be found.\n", code);
}

