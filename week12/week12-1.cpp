#include <stdio.h>
int a[10] = {9,8,7,6,5,4,3,2,1,0};
int main()
{
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("�}�l���e:\n");

    for (int i=0;i<10;i++){
        for (int j=i+1;j<10;j++){
            if (a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("�̫ᵲ��:\n");
}
