#include <stdio.h>

static int gix;
static void func2();

void func1()
{
    printf("func1\n");
    printf("gix=%d\n", gix);
    func2();
}

/* static 関数も作れる */
/* このソース以外でどこにも使ってほしくない関数を作るときに */
static void func2()
{
    printf("func2\n");
    printf("gix=%d\n", gix);
}