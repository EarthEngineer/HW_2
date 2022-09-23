#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    int k;
    int t;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    scanf("%i", &k);
    scanf("%i", &t);
    for(int i = n; i > t; --i)
        a[i+1]=a[i];
    a[t+1] =k;



    for (int i = 0; i < n+1; ++i)
        printf("%i ", a[i]);

    printf("\n");
}
