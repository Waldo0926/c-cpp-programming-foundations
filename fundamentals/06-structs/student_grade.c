#include <stdio.h>

struct Student {
    int number;
    char name[40];
    int score;
    char grade;
};

static char grade_for(int score) {
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}

int main(void) {
    struct Student student;
    if (scanf("%d%39s%d", &student.number, student.name, &student.score) != 3) return 1;
    if (student.score < 0 || student.score > 100) return 1;

    student.grade = grade_for(student.score);
    printf("%d %s %d %c\n", student.number, student.name, student.score, student.grade);
    return 0;
}
