#include <stdio.h>///a[]�O�Ӥj���
int a[10000000]={0,0,0,0};///�S���g�����|��0
///�~���ŧi���ܼơA�i�H����hmemory�Ŷ�
//0����ơA1��k������(���O���)
int main()
{
    int ans=0;
    for (int i=2;i<10000000;i++){
        if (a[i]==0){
        ans++;
        //printf("%d ",i);
        for (int k=i+i;k<10000000;k=k+i) a[k]=1;
        }
    }
    printf("ans: %d",ans);
}
