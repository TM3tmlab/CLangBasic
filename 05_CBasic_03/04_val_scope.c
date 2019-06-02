#include <stdio.h>
/* グローバル変数の定義 */
int gix = 11;

void sub();

int main()
{
    int iy = 3;

    /* ローカル変数のiyを利用できるのは今まで通り */
    printf("iy = %d\n", iy);

    /* グローバル変数のgixを利用できる */
    /* 出力される値に注目すること */
    printf("gix = %d\n", gix);

    /* このコメントを切り替えると・・・
    printf("giy = %d\n", giy);
    */

    sub();
    return 0;
}

/* ソースコードの途中にもグローバル変数の定義はできる */
/* 「できる」が目移りの原因になるのでお勧めしない */
int giy;

void sub()
{
    int iz = 7;

    /* ローカル変数のizを利用できるのは今まで通り */
    printf("iz = %d\n", iz);

    /* グローバル変数のgixを利用できる */
    /* 出力される値に注目すること */
    printf("gix = %d\n", gix);

    /* もう一つのグローバル変数のgiyも利用できる */
    /* 出力される値に注目すること */
    printf("giy = %d\n", giy);
    return;
}