#include <stdio.h>

int main(void) {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("output.txt");
        return 1;
    }

    int ch;
    while ((ch = getchar()) != EOF) fputc(ch, file);
    if (fclose(file) != 0) return 1;
    return 0;
}
