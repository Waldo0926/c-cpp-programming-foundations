#include <stdio.h>

int main(void) {
    int score;
    if (scanf("%d", &score) != 1 || score < 0 || score > 100) return 1;

    char grade;
    if (score >= 90) grade = 'A';
    else if (score >= 60) grade = 'B';
    else grade = 'C';

    printf("%c\n", grade);
    return 0;
}
