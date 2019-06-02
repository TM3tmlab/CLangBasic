#include <stdio.h>

/*
ソースコードも通常一番上から処理される
Cでは関数の有無も逐次チェックされるので、
関数定義か、関数プロトタイプ宣言が必要になる

printf も関数だが、私たちはプロトタイプ宣言をしていない。
「プロトタイプ宣言をしていないprintf関数が使える」
という問題（疑問）を紐解くカギが、おまじないとなっていた
#include <stdio.h>
にある。

ファイルパス検索
whereis stdio.h

grepでファイル検索
grep printf /usr/include/stdio.h

extern int printf (const char *__restrict __format, ...);

*/

/* 関数定義 */
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

int main()
{
    int x = 10;
    int y = 0;

    /* 関数呼び出し */
    y = calc_quadratic_function(x);

    printf("x = %d の時, y = 2x^2 + 3x + 5 の y の値は %d \n", x, y);

    return 0;
}
