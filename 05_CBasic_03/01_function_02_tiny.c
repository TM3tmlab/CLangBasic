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

    /* 関数呼び出し */
    y = calc_quadratic_function(x);

    printf("x = %d の時, y = 2x^2 + 3x + 5 の y の値は %d \n", x, y);

    return 0;
}

int calc_quadratic_function(int x)
{
    /* 関数の目的
    次の二次関数のyを求める
    y = 2x^2 + 3x + 5
     */

    /* Cの演算子で指数を扱うものはないので、
    単純に2回かけて2乗を表現 */
    int kotae = 2 * x * x + 3 * x + 5;
    return kotae;
}
