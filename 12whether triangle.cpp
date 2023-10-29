#include <stdio.h>
#include <stdlib.h>
//根据三边长度判断是否为三角形
int main()
{
    float a, b, c;
    scanf("%f,%f,%f",&a,&b,&c);
    if(a<=0||b<=0||c<=0)
    printf("error");
    else
    {
        if (a+b>c&&a+c>b&&b+c>a)
        printf("yes");
        else
        printf("no");
    }
    system("pause");
    return 0;
}