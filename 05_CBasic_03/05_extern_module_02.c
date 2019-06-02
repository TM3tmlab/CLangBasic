#include <stdio.h>

/* グローバル変数の宣言のみ */
extern int gix;

int func2()
{
    printf("ここはfunc2関数\n");
    printf("変更前の gix の値は %d\n", gix);
    gix = 2;
    printf("変更後の gix の値は %d\n", gix);

    return 0;
}