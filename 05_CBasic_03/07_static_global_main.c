#include <stdio.h>

extern void func1();

/* static宣言をexternしようとするとリンクエラー */
/*
extern void func2();
extern int gix;
*/

int main()
{
    func1();
    /*
    func2();
    printf("%d\n", gix);
    */
    return 0;
}
