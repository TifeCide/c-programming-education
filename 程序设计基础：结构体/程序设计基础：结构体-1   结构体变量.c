#include<stdio.h>
/*********Begin*********/
struct student
{
    long num;
    char name[20];
    int score;
};

int main()
{
    struct student s1, s2;

    scanf("%ld %s %d", &s1.num, s1.name, &s1.score);
    scanf("%ld %s %d", &s2.num, s2.name, &s2.score);

    if (s1.score > s2.score)
        printf("%ld %s %d", s1.num, s1.name, s1.score);
    else
        printf("%ld %s %d", s2.num, s2.name, s2.score);

    return 0;
}
/*********End*********/
