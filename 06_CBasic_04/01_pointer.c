#include <stdio.h>

int main()
{
    /* 変数を宣言 */
    int i;
    /* ポインタ変数を宣言 */
    /* ポインタ変数にするには 変数名の前に * を付ける */
    int *ip;

    /* 宣言した変数の状態を確認する */
    /* 確認するのは、、、 */
    /* 値の場合、その値と変数のアドレス */
    /* ポインタの場合、格納しているアドレスと変数のアドレス */
    printf("i  val       = %16d, addr = %16p\n", i, &i);
    printf("ip val(addr) = %16p, addr = %16p\n", ip, &ip);

    /* 初期値を代入する */
    i = 0;
    ip = 0x0;
    printf("区切り-------\n");
    printf("i  val       = %16d, addr = %16p\n", i, &i);
    printf("ip val(addr) = %16p, addr = %16p\n", ip, &ip);
    /* 補足：アドレス 0x0 のことを NULL アドレスと呼ぶ */

    /* & という単項演算子を使うとその変数のアドレスを返す */
    ip = &i;
    printf("区切り-------\n");
    printf("i  val       = %16d, addr = %16p\n", i, &i);
    printf("ip val(addr) = %16p, addr = %16p\n", ip, &ip);
    /* i addr と ip val が一致していることを確認する */
    
    /* アドレス(ポインタ)の状態で計算をするとアドレス演算を行う仕様 */
    /* アドレスではなく値として扱うときは、* という単項演算子 を使って */
    /* アドレスを手繰る必要がある */
    *ip = 1;
    printf("区切り-------\n");
    printf("i  val       = %16d, addr = %16p\n", i, &i);
    printf("ip val(addr) = %16p, addr = %16p\n", ip, &ip);
    /* このとき、i val が変更されていることを確認する */

    return 0;
}
