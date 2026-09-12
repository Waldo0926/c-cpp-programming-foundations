#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "usage: %s <source> <destination>\n", argv[0]);
        return 1;
    }

    FILE *source = fopen(argv[1], "rb");
    if (source == NULL) {
        perror(argv[1]);
        return 1;
    }
    FILE *destination = fopen(argv[2], "wb");
    if (destination == NULL) {
        perror(argv[2]);
        fclose(source);
        return 1;
    }

    unsigned char buffer[4096];
    size_t bytes_read;
    int status = 0;
    while ((bytes_read = fread(buffer, 1, sizeof buffer, source)) > 0) {
        if (fwrite(buffer, 1, bytes_read, destination) != bytes_read) {
            status = 1;
            break;
        }
    }
    if (ferror(source)) status = 1;
    if (fclose(source) != 0) status = 1;
    if (fclose(destination) != 0) status = 1;
    return status;
}
