#include <stdio.h>

int main() {
	int i , j,n;
	
	for (i=45; i>=49; i--) {
		
		for(j=i; j>=49; j--){
			printf("%d ",j);
		}	
		printf("\n");
	}
	
	return 0;
}
