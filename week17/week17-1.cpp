#include <stdio.h>
int main()
{
    int n=1234567892;///問個位數是多少
    /*
    n%10 取餘數，就是個位數
    n/10 除10，前面位數
    */
    while(n>0){
        printf("%d => %d %d \n",n,n/10,n%10);
        n = n/10;
    }
}
