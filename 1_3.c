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
    for(int i = k; i < n; ++i)
        a[i]=a[i+1];



    for (int i = 0; i < n-1; ++i)
        printf("%i ", a[i]);

    printf("\n");
}
