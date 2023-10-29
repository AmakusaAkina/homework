#include <stdio.h>
#include <stdlib.h>
//输出100以内的奇数
int main()
{
    for(int i=1;i<=50;i++)
    {
        printf("%d,",(2*i-1));
    }
    system("pause");
    return 0;
}