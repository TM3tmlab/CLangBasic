#include <stdio.h>

/* 関数プロトタイプ宣言 */
int max(int *);
int min(int *);
double avr(int *);

int main()
{
    int numbers[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("%d/%d 回目 > ", (i+1), 10);
        scanf("%d", &(numbers[i]));
    }

    printf("入力された数値は ");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("です。\n");

    printf("最小値は %d です。\n", min(numbers));
    printf("最大値は %d です。\n", max(numbers));
    printf("平均値は %f です。\n", avr(numbers));

    return 0;
}

int max(int *arr)
{
    int i;
    int max = *(arr + 0);

    for (i = 1; i < 10; i++) {
        if (max < *(arr + i)) {
            max = *(arr + i);
        }
    }

    return max;
}

int min(int *arr)
{
    int i;
    int min = *(arr + 0);

    for (i = 1; i < 10; i++) {
        if (min > *(arr + i)) {
            min = *(arr + i);
        }
    }

    return min;
}

double avr(int *arr)
{
    int i;
    int sum = 0;

    for (i = 0; i < 10; i++) {
        sum += *(arr + i);
    }

    return (sum / 10.0);
}
