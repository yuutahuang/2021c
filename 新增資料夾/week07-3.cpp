#include <stdio.h>
int main()
{
    int n = 3;
    while ( n > 0 ){
        printf("n有進來, n:%d\n",n);
        n--;
    }
    printf("最後離開while迴圈, n:%d\n",n);
}
