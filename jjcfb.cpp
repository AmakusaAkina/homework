#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    for(int i=1;i<10;++i)
    {
        for(int j=1;j<=i;++j)
        {
            printf("%d*%d=%d\t",i,j,i*j);
            if(j==i) printf("\n");
        }
    }
    system("pause");
    return 0;
}