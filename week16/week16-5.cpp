#include <stdio.h>
char line[300];
int main()
{
   printf("�п�J�A���r��: ");
   scanf("%s",line);
   printf("����J���O =%s=\n ",line);

   int ans=0;
   int i =0;
   while (line[i] != '\0'){
        if (line[i]== '1') ans++;
        i++;
   }
   printf("����J�F%d��1\n",ans);
}
