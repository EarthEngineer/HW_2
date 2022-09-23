#include <stdio.h>
int main()
{
    int a[1000];
    int n, k;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    for (int i =1; i < n; ++i)
    if (a[i]<a[i-1]){k=i-1;}

    printf("%i", k);
}
