#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    int b[n];
    int t=0;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);


    for (int i =0; i < n; ++i)
    if (a[i] % 2 > 0){
        b[t] = a[i];
        t++;}

    for (int i =0; i < n; ++i){
        if (a[i] % 2 == 0){
            b[t]=a[i];
            t++;
        }}




    for (int i = 0; i < n; ++i)
        printf("%i ", b[i]);

    printf("\n");
}
