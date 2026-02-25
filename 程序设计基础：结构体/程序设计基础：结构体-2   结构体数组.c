#include<stdio.h>
#include<string.h>

/*********Begin*********/
struct vote
{
    int Li;
    int Zhang;
    int Sun;
} candidate = {0, 0, 0};
/*********End**********/

int main(void)
{
    /*********Begin*********/
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char temp[10];
        scanf("%s", temp);

        if (strcmp(temp, "Li") == 0) {
            candidate.Li++;
        }
        else if (strcmp(temp, "Zhang") == 0) {
            candidate.Zhang++;
        }
        else if (strcmp(temp, "Sun") == 0) {
            candidate.Sun++;
        }
    }

    printf("Li:%d\nZhang:%d\nSun:%d", candidate.Li, candidate.Zhang, candidate.Sun);
    /*********End**********/

    return 0;
}
