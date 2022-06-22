#include <stdio.h>

struct client_data {
    unsigned int acct_num;
    char last_name[15];
    char first_name[10];
    double balance;
};

int main(void) {
    FILE* cf_ptr;

    if((cf_ptr= fopen("accounts.txt", "r+")) == NULL) {
        puts("error");
    }

    else {
        struct client_data client = {0, "", "", 0.0};

        printf("%s", "Enter account number"
        " (1 to 100, 0 to end input): ");

        scanf("%d", &client.acct_num);

        while (client.acct_num != 0) {
            printf("%s","\nEnter lastname, firstname, balance: ");

            fscanf(stdin, "%14s%9s%lf", client.last_name, client.first_name, &client.balance);

            fseek(cf_ptr, (client.acct_num - 1) * sizeof(struct client_data), SEEK_SET);

            fwrite(&client, sizeof(struct client_data), 1, cf_ptr);

            printf("%s", "\nEnter account number: ");

            scanf("%d", &client.acct_num); 
           
        }
        fclose(cf_ptr);
    }
}