#include <stdio.h>
int a[4];
char s[4]="ABC";
char s2[4]={'A','B','C','\0'};
///��޸��N��̭��u���@�Ӧr��
///���޸��̭��i�H���ӥH�W EX:"A"�̭���'A' '\0';
int main()
{
    for (int i=0;i<4;i++){
        printf("�r��:%c= �ȬO%d\n",s[i],s[i]);
        printf("�t�@�}�C:%c= �ȬO%d\n",s2[i],s2[i]);
    }
    printf("�ϱ׽un���ȬO:%d\n",'\n');
    printf("�ϱ׽u0���ȬO:%d\n",'\0');
}

