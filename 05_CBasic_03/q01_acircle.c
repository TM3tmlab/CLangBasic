#include <stdio.h>

double acircle(int radius)
{
    return (radius * radius * 3.141592654);
}

int main()
{
    int radius;

    printf("面積を求める円の半径を入力してください > ");
    scanf("%d", &radius);

    printf("半径 %d の円の面積は %f です。\n", radius, acircle(radius));

    return 0;
}
