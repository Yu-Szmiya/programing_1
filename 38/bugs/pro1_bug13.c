#include <stdio.h>


int main(void)
{
  int num1;
  int num2;
//  int guusu;
  int guusu = 0;
  printf("数値1=");
  scanf("%d", &num1);

  printf("数値2=");
  scanf("%d", &num2);

/*
  if ((num1 / 2) == 0){
      guusu++;
  }
  if ((num2 / 2) == 0){
      guusu++;
  }
*/

  if ((num1 % 2) == 0){
      guusu++;
  }
  if ((num2 % 2) == 0){
      guusu++;
  }

  switch (guusu){
    case 0:
      printf("両方が奇数です\n");
      break;

    case 1:
      printf("片方が偶数です\n");
      break;
    case 2:
      printf("両方が偶数です\n");
      break;
  }

  return (0);
}
