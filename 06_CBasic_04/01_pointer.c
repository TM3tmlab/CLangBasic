#include <stdio.h>

int main()
{
    /* 変数を宣言 */
    int i = 0;
    /* ポインタ変数を宣言 */
    /* ポインタ変数にするには 変数名の前に * を付ける */
    int *ip;

    /* & という単項演算子を使うとその変数のアドレスを返す */
    ip = &i;
    
    /* アドレス(ポインタ)の状態で計算をするとアドレス演算を行う仕様 */
    /* アドレスではなく値として扱うときは、* という単項演算子 を使って */
    /* アドレスを手繰る必要がある */
    *ip = 1;

}