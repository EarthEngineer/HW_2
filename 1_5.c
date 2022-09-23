#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    int k =0;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    for (int i = 0; i < n ; ++i){
        if (a[i] < 0 ){
            ++k;
        }
        else{
            a[i-k]=a[i];
        }

    }

    for (int i = 0; i < n-k; ++i)
        printf("%i ", a[i]);

    printf("\n");
}
