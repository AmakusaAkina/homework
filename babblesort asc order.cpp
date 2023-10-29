#include<stdio.h>
#include<stdlib.h>
#include<String.h>
int main()
{
    const int n=10;
    int a[n],tmp;
    for(int i=0;i<n;++i)
    scanf("%d",&a[i]);
    for(int i=0;i<n;++i)
    printf("%d\t",a[i]);
    int key=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n-i;++j)
        {
            if(a[j]>a[j+1])
            {
            tmp=a[j];
            a[j]=a[j+1];
            a[j+1]=tmp;
            key=1;
            }
        }
        if(key==0) break;
    }
    printf("\n");
    for(int i=0;i<n;++i) printf("%d\t",a[i]);
    system("pause");
    return 0;
}