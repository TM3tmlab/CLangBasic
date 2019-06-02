#include <stdio.h>

/* 引数の変数を書き換えようとするが、異なる実体のため失敗する関数 */
void func(int, int);

int main()
{
    int ix = 100;
    int iy = 200;
    int iz = 0;

    printf("ixの値は %d, iyの値は %d, izの値は %d\n", ix, iy, iz);

    func(ix, iy);
    iz = ix + iy;

    printf("ixの値は %d, iyの値は %d, izの値は %d\n", ix, iy, iz);

    return 0;
}

void func(int ix, int iy)
{
    ix = 300;
    iy = 400;
}