#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void)
{
    int r, c, input, resulut, moji;

    printf("乱数の種（奇数）>> ");
    scanf("%d", &r);

    c = 1;

    while (c != 0)
    {
        //人間の処理
        input = getch();
        input -= 48;
        printf("人間：");
        switch (input)
        {
        case 1:
            printf("ぐう\n");
            break;
        case 2:
            printf("ちょき\n");
            break;
        case 3:
            printf("ぱあ\n");
            break;
        case 0:
            printf("終了\n");
            c = 0;
        default:
            printf("0～3を入力しなさい。\n");
        }

        //コンピュータの処理
        r = (r * 12869 + 6925) % 32768;
        moji = (r % 3) + 1;

        printf("コンピュータ：");
        switch (moji){
        case 1:
            printf("ぐう\n");
            break;
        case 2:
            printf("ちょき\n");
            break;
        case 3:
            printf("ぱあ\n");
            break;
        }

        //勝敗の判定
        resulut = moji - input;
        switch (resulut){
        case 0:
            printf("引き分け\n");
            break;
        case 1:
            printf("勝ち\n");
            break;
        case 2:
            printf("負け\n");
            break;
        case -1:
            printf("負け\n");
            break;
        case -2:
            printf("勝ち");
            break;
        }
    }

    return 0;
}