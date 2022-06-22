#include <stdio.h>

struct client_data {
    unsigned int acct_num;
    char last_name[15];
    char first_name[10];
    double balance;
};

int main(void) {

    FILE* cf_ptr;

    if((cf_ptr = fopen("credit.txt", "rb")) == NULL) {
        puts("error");
    }

    else {
        printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");

        while (!feof(cf_ptr))
        {
            struct client_data client = {0, "", "", 0.0};

            int result = fread(&client, sizeof(struct client_data), 1, cf_ptr);

            if(result != 0 && client.acct_num != 0) {
                printf("%-6d%-16s%-11s%10.2f\n",
                client.acct_num, client.last_name, client.first_name, client.balance);
            }

            fclose(cf_ptr);
        
        
    }
}
}