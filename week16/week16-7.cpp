#include <stdio.h>
#include <string.h>
char line[100];
int main()
{
	scanf("%s",line);
	int bad=0;
	int n=strlen(line);
	for (int i=0;i<n;i++){
		if (line[i] != line[n-i-1])bad++;
	}
	if (bad == 0) printf("YES");
	else printf ("NO");
}
