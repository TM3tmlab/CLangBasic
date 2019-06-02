#include <stdio.h>
/*
関数プロトタイプ
*/

/* 関数プロトタイプ宣言 */
int calc_quadratic_function(int);

int main()
{
    int x = 10;
    int y = 0;
    int i;

    /* 関数呼び出し */
    y = calc_quadratic_function(x);

    printf("x = %d の時, y = 2x^2 + 3x + 5 の y の値は %d \n", x, y);

    /* 表示を区切るための線を表示しているだけ */
    printf("-----------\n");
    
    /* -10 <= x <= 10 の区間で 計算結果を求める */
    for (i = -10; i <= 10; i++) {
        /* 関数はforの中で呼び出すこともできる */
        y = calc_quadratic_function(i);

        printf("x = %d の時, y = 2x^2 + 3x + 5 の y の値は %d \n", i, y);
    }

    return 0;
}

int calc_quadratic_function(int x)
{
    /* 関数の目的
    次の二次関数のyを求める
    y = 2x^2 + 3x + 5
     */
    /* 蛇足：^について
    ^(ハット記号・サーカムフレックス・キャレット) は
    上付き文字などの修飾ができない環境で
    指数を表すときに使う
     */

    /* Cの演算子で指数を扱うものはないので、
    単純に2回かけて2乗を表現 */
    int kotae = 2 * x * x + 3 * x + 5;
    return kotae;
}
