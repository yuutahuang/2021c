#include <stdio.h>
int main()
{
    int n=1234567892;///�ݭӦ�ƬO�h��
    /*
    n%10 ���l�ơA�N�O�Ӧ��
    n/10 ��10�A�e�����
    */
    while(n>0){
        printf("%d => %d %d \n",n,n/10,n%10);
        n = n/10;
    }
}
