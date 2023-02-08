#include <stdio.h>


int decimalToBinary(int decimalnum)
{
    int binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}

int main()
{
    int decimalnum,i;
    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);
    printf("Binary Number of 0 is: 0\n");
    for (i=1;i<=decimalnum;i++)
    {
        decimalToBinary(i);
        printf("Binary Number of %d is: %d\n",i, decimalToBinary(i));    }
    return 0;
}
