#include <stdio.h> ///�令 �x�}�[�k
int a[10][10],b[10][10],c[10][10]; ///��~��
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++){ ///Ū�JA
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	} ///�W�U���i�X��
	for(int i=0;i<n;i++){ ///Ū�JB
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){ ///�⵪��
		for(int j=0;j<n;j++){
				c[i][j] = a[i][j]+b[i][j];
				printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}
