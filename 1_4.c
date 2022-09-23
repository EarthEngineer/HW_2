#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    int x;
    int y;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    scanf("%i", &x);
    scanf("%i", &y);

    for(int i = y; i < n; ++i)
        a[i-y+x]=a[i];




    for (int i = 0; i < n-y+x; ++i)
        printf("%i ", a[i]);

    printf("\n");
}
