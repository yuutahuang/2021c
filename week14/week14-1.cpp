#include <stdio.h>
//int a[3] = {10,20,30};
/*int a[2][3] = {
    {10,20,30},
    {40,50,60}
};*/
int a[2][3] = { {10,20,30},{40,50,60} };
int main()
{
//  for (int i=0;i<3;i++) printf("%d",a[i]);
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
