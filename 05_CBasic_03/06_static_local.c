#include <stdio.h>

int auto_func(int);
int static_func(int);

int main()
{
    int iresult = 0;

    printf("iresultは%d\n", iresult);
    iresult = auto_func(1);
    printf("iresultは%d\n", iresult);
    iresult = auto_func(1);
    printf("iresultは%d\n", iresult);
    iresult = auto_func(0);
    printf("iresultは%d\n", iresult);
    iresult = static_func(1);
    printf("iresultは%d\n", iresult);
    iresult = static_func(1);
    printf("iresultは%d\n", iresult);
    iresult = static_func(0);
    printf("iresultは%d\n", iresult);

    return 0;
}

int auto_func(int ix)
{
    int icalc = 0;
    icalc = icalc + ix;
    return icalc;
}

int static_func(int ix)
{
    /* static変数宣言 */
    static int icalc = 0;
    icalc = icalc + ix;
    return icalc;
}
