#include <stdio.h>

/* 10進数80桁を考える */
/* 0-9999までを1つの桁として担当する */
static int big_number[20];

/* 多桁とshortの掛け算を行う */
void multiply(short a)
{
    int i;
    int carry = 0;
    int answer;

    for (i = 0; i < 20; i++) {
        answer = big_number[i] * a;
        big_number[i] = answer % 10000 + carry;
        carry = answer / 10000;
    }
    
    if (carry != 0) {
        printf("オーバーフロー\n");
    }

    return;
}

/* 多桁を表示する */
void display_big_number()
{
    int i;

    for (i = 20 - 1; i >= 0; i--) {
        if (big_number[i] == 0) {
            printf("    ");
        } else {
            printf("%4d", big_number[i]);
        }
    }
    printf("\n");
    
    return;
}

/* 多桁を初期化する */
void clear()
{
    int i;
    for (i = 0; i < 20; i++) {
        big_number[i] = 0;
    }

    return;
}

void fact(short f){
    if (f == 1) {
        big_number[0] = 1;
        return;
    }

    fact(f - 1);
    multiply(f);

    return;
}

int main()
{
    big_number[0] = 1233;
    big_number[1] = 8080;
    big_number[2] = 2508;
    big_number[3] = 3050;

    display_big_number();
    multiply(101);
    display_big_number();

    clear();

    fact(30);
    display_big_number();

    return 0;
}