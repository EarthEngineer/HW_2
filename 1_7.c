#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    for (int i =0; i < n; ++i)
        a[i+n*2]=a[i];
    for (int i =0; i < 2*n; i=i+2){
        a[i]=a[i/2+n*2];
        a[i+1]=a[i/2+n*2];}




    for (int i = 0; i < n*2; ++i)
        printf("%i ", a[i]);

    printf("\n");
}
