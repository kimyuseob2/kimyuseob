#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int numArr[6] = {0};
    int iReturn = 0;

    printf("숫자 6개를 입력하시오 : ");
    scanf_s("%d, %d, %d, %d, %d, %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4], &numArr[5]);


    for (int isum = 0; isum < 6; isum++)
    {
  
        iReturn += numArr[isum];
    }

    printf("입력하신 숫자의 합은 %d입니다.", iReturn);

   }
