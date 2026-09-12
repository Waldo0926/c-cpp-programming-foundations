#include <ctype.h>
#include <stdio.h>

int main(void) {
    int ch = getchar();
    if (ch == EOF) return 1;

    if (islower((unsigned char)ch)) puts("lowercase letter");
    else if (isupper((unsigned char)ch)) puts("uppercase letter");
    else if (isdigit((unsigned char)ch)) puts("digit");
    else puts("other character");
    return 0;
}
