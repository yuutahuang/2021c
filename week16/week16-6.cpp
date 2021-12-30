#include <stdio.h>
#include <string.h> ///為了用strlen()
char line[300]="10101010101010101010101010";
int main()
{
    int ans=0;
    int n=strlen(line);
    for (int i=0;i<n;i++){
        if (line[i] == '1') ans++;
    }
    printf("有%d個1\n",ans);
}
