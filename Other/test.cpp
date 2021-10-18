#include <stdio.h>

int main(){
	int i, j, k, n, col, row;
	printf("Enter a number : ");
	scanf("%d", &n);
	for (i = 1; j <= n; i++){
		for (j = 1; j <= n; j++){
			if ((i==1 || i==n) && (j==1 || j==n))
				printf("0");
			else if ((i==1 || i==n) || (j==1 || j==n))
				printf(" ");
			else if (j==2 || j==n-1)
				printf("B");
			else if (i==2 || i==n-1)
				printf("A");
			else
				printf("*");
		}
		printf("\n");
	}
}
