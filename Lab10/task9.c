#include <stdio.h>

int main() {

    FILE *fptr;

    fptr = fopen("config.txt", "r");

    if(fptr == NULL){

        printf("Config file not found. Creating default config.txt\n");

        fptr = fopen("config.txt", "w");

        if(fptr == NULL){
            printf("Error creating config file\n");
            return 0;
        }

        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "retry_limit=5\n");

        fclose(fptr);

        printf("Default configuration file created successfully\n");
    }
    else{

        printf("Config file found. No changes needed\n");

        fclose(fptr);
    }

    return 0;
}