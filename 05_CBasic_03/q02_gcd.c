#include <stdio.h>

/* 文字列を数値に変換する関数 */
int ascii_to_positive_int(char*);

/* ユークリッドの互除法を計算する関数 */
int gcd(int, int);

/* コマンドライン引数を取るmain関数 */
int main(int argc, char* argv[])
{
    int input_a;
    int input_b;

    /* コマンドライン引数の個数検証 */
    if (argc != 3) {
        printf("整数を2個引数に指定してください\n");
        printf("ex) gdc 5 10\n");
        printf("ex) gdc 1071 1029\n");
        return 1;
    }

    /* コマンドライン引数の文字列を数値に変換 */
    input_a = ascii_to_positive_int(argv[1]);
    input_b = ascii_to_positive_int(argv[2]);
    
    printf("gcd (%d, %d) = %d\n", input_a, input_b, gcd(input_a, input_b));

    return 0;
}

/* ascii文字を数値に変換する関数 */
/* まじめに実装すると様々なチェック処理が必要になるが、最小限に留めた */
/*
実装した仕組みはシンプルに次の通り
1. 入力文字列を終端(\0)までチェック
2. 記号であればスキップ(何もしないでなかったことにする)
3. 0であれば計算中の数値を10倍する
4. 1-9であれば計算中の数値を10倍したうえでその数字を足す
*/
/*
蛇足：内部で char* を char配列 として利用（記述）していますが、
書き方に違いがあるだけで同じ結果になります
*/
int ascii_to_positive_int(char* input)
{
    int result = 0;
    int i = 0;

    for (; input[i] != '\0'; i++) {
        switch(input[i]) {
        case ' ':
            break;
        case '-':
            break;
        case '.':
            break;
        case '0':
            result *= 10;
            break;
        case '1':
            result *= 10;
            result += 1;
            break;
        case '2':
            result *= 10;
            result += 2;
            break;
        case '3':
            result *= 10;
            result += 3;
            break;
        case '4':
            result *= 10;
            result += 4;
            break;
        case '5':
            result *= 10;
            result += 5;
            break;
        case '6':
            result *= 10;
            result += 6;
            break;
        case '7':
            result *= 10;
            result += 7;
            break;
        case '8':
            result *= 10;
            result += 8;
            break;
        case '9':
            result *= 10;
            result += 9;
            break;
        }
    }

    return result;
}

/* 繰り返し版ユークリッドの互除法 */
/* 再帰という方法でも実装できるがここでは繰り返しを利用した */
int gcd(int a, int b)
{
    /* 常に大きい数字を表すm */
    int m;
    /* 常に小さい数字を表すn */
    int n;
    /* 余り格納用の変数 */
    int remainder;

    /* 引数のaとbのうち、大きい値をmとする */
    if (a < b) {
        m = b;
        n = a;
    } else {
        m = a;
        n = b;
    }
    /* もしnが0であれば0を返して終了する */
    if (n == 0) {
        return 0;
    }

    do {
        remainder = m % n;
        m = n;
        n = remainder;
    } while (remainder != 0);

    return m;
}
