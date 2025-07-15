#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }
    fprintf(fp, "Hello, File Handling in C!");
    fclose(fp);

    char buffer[100];
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 0;
    }
    fgets(buffer, 100, fp);
    printf("Content: %s\n", buffer);
    fclose(fp);

    return 0;
}
