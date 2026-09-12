#include <stdio.h>
#include <string.h>

static const char *match(const char *text, char ch) {
    return strchr(text, ch);
}

int main(void) {
    char text[80];
    char ch;
    if (scanf("%79s %c", text, &ch) != 2) return 1;

    const char *found = match(text, ch);
    puts(found != NULL ? found : "not found");
    return 0;
}
