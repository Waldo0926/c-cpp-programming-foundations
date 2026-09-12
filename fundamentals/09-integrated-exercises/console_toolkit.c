#include <stdio.h>

static void phone_keypad(void) {
    char text[200];
    if (scanf("%199s", text) != 1) return;
    for (int i = 0; text[i] != '\0'; ++i) {
        const char ch = text[i];
        if (ch >= 'A' && ch <= 'C') text[i] = '2';
        else if (ch >= 'D' && ch <= 'F') text[i] = '3';
        else if (ch >= 'G' && ch <= 'I') text[i] = '4';
        else if (ch >= 'J' && ch <= 'L') text[i] = '5';
        else if (ch >= 'M' && ch <= 'O') text[i] = '6';
        else if (ch >= 'P' && ch <= 'S') text[i] = '7';
        else if (ch >= 'T' && ch <= 'V') text[i] = '8';
        else if (ch >= 'W' && ch <= 'Z') text[i] = '9';
    }
    puts(text);
}

static void day_of_year(void) {
    int year, month, day;
    if (scanf("%d%d%d", &year, &month, &day) != 3) return;
    static const int days_before_month[] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        puts("invalid date");
        return;
    }
    int result = days_before_month[month] + day;
    const int leap = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
    if (leap && month > 2) ++result;
    printf("%d\n", result);
}

static void armstrong_numbers(void) {
    int limit;
    if (scanf("%d", &limit) != 1 || limit < 0 || limit > 1000) return;
    for (int n = 100; n <= limit; ++n) {
        int a = n / 100;
        int b = n / 10 % 10;
        int c = n % 10;
        if (a * a * a + b * b * b + c * c * c == n) printf("%d\n", n);
    }
}

static void max_min(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return;
    int value;
    if (scanf("%d", &value) != 1) return;
    int min = value, max = value;
    for (int i = 1; i < n; ++i) {
        if (scanf("%d", &value) != 1) return;
        if (value < min) min = value;
        if (value > max) max = value;
    }
    printf("max=%d min=%d\n", max, min);
}

int main(void) {
    int choice;
    do {
        puts("1) phone keypad conversion");
        puts("2) day of year");
        puts("3) Armstrong numbers");
        puts("4) max/min");
        puts("5) exit");
        if (scanf("%d", &choice) != 1) return 1;
        switch (choice) {
            case 1: phone_keypad(); break;
            case 2: day_of_year(); break;
            case 3: armstrong_numbers(); break;
            case 4: max_min(); break;
            case 5: break;
            default: puts("invalid choice"); break;
        }
    } while (choice != 5);
    return 0;
}
