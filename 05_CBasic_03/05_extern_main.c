#include <stdio.h>

/* externされた関数プロトタイプ宣言 */
extern int func1();
extern int func2();

int main()
{
    func1();
    func2();
    func2();
    func1();

    return 0;
}