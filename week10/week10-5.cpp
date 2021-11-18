#include <stdio.h>///a[]琌
int a[10000000]={0,0,0,0};///⊿Τ糶常穦干0
///跑计ゑ耕memory丁
//0借计1k计(ぃ琌借计)
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
