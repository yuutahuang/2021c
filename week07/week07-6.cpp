#include <stdio.h>
int main()
{
    int n;
    float sum = 0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int now;
        scanf("%d",&now);
        sum = sum + now;
    }
    printf("%.2f",sum/n);
}
