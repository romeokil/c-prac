#include<stdio.h>
int main(){
	int i,j,k,r,c,a[25][25],b[25][25],d[25][25];
	int m,n;
	printf("enter the no of rows\n");
	scanf("%d",&r);
	printf("enter the no of columns\n");
	scanf("%d",&c);
	printf("enter the elements in first matrix\n");
	//intake of elements in array 1
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	//intake of elements in array 2
	printf("enter the elements in array 2\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	//reset elements of c[i][j] to 0;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			d[i][j]=0;
		}
	}
	//multiplication of two arrays
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			for(k=0;k<c;k++){
				d[i][j]=d[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	//printing the c[i][j] matrix;
	printf("the resultant matrix is \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d",&d[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
