#include <stdio.h>
#include <stdlib.h>

struct client_data {
    unsigned int acc_num;
    char last_name[15];
    char first_name[10];
    double balance;
};
    
int main(void) {

    FILE *cf_ptr;

    if(  (cf_ptr = fopen("accounts.txt", "wb")  ) == NULL) {
        printf("Error: couldn't open file");
    }
    else { 
        struct client_data blank_client = {0, "", "", 0.0};

        for(unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blank_client, sizeof(struct client_data), 1, cf_ptr);
        }

        fclose(cf_ptr);
        
    }
}