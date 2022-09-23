#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    int m;
    scanf("%i", &n);
    scanf("%i", &m);
    for (int i = 0; i < m; ++i){a[i]=0;}
    for (int i = 0; i < n; ++i){
            int k;
    for (int j = 0; j < m; ++j){

        scanf("%i", &k);
        a[j] = a[j]+k;
        }}

    for (int i = 0; i < m; ++i)
        printf("%i ", a[i]);

    printf("\n");
}
