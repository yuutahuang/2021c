#include <stdio.h>///a[]琌
int a[100]={0,0,0,0};///⊿Τ糶常穦干0
///跑计ゑ耕memory丁
//0借计1k计(ぃ琌借计)
int main()
{
    for (int i=2;i<100;i++){
        if (a[i]==0){
        printf("%d ",i);
        for (int k=i+i;k<100;k=k+i) a[k]=1;
        }
    }
}
