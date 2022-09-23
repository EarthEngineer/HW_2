#include <stdio.h>
int main()
{
    int a[1000];
    int k;
    int n;


    scanf("%i", &n);
    scanf("%i", &k);
    int b[n];
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    for (int i =0; i < n; ++i)
            b[i]=a[(i+k)%n];


    for (int i = 0; i < n; ++i)
        printf("%i ", b[i]);

    printf("\n");
}
