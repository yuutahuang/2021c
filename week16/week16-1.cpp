#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int i=0; ///for(int i=0; i<n; i++)
	while (i<a){
		/// print 7x7 square
		///for (int k=0; k<n; k++)
		int k=0;
		while (k<a){
			if (k<a-1-i) printf(" ");
			else printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}
