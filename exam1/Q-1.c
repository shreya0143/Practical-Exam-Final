#include <stdio.h>

 void checkevenodd(int number) {
	
	if(number % 2 == 0) {
		printf("%d id even.\n",number);
	}
	
	else {
		printf("%d id odd.\n",number);
	}
}

int main() {
	int number;
	
	printf("enter a number : ");
	scanf("%d",&number);
	
	checkevenodd(number);
	
	return 0;
}
