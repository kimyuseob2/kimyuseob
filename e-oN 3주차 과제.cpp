#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int numArr[6] = {0};
    int iReturn = 0;

    printf("���� 6���� �Է��Ͻÿ� : ");
    scanf("%d %d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4], &numArr[5]);


    for (int isum = 0; isum < 6; isum++)
    {
  
        iReturn += numArr[isum];
    }

    printf("�Է��Ͻ� ������ ���� %d�Դϴ�.", iReturn);

   }