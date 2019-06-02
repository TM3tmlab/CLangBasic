#include <stdio.h>

/* グローバル変数の定義 */
/* もし、ここをexternしてしまうと・・・？ */
int gix;

int func1()
{
    printf("ここはfunc1関数\n");
    printf("変更前の gix の値は %d\n", gix);
    gix = 1;
    printf("変更後の gix の値は %d\n", gix);

    return 0;
}
