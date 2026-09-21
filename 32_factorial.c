#include <stdio.h>

int fact(int n); // function declaration

int main(){
	int number = 1;
	printf("please enter you'r number:");
	scanf("%d", &number);
	int result = fact(number);
	printf("%d", result);
	return 0;
}

int fact (int n){
	if (n == 1){
		return 1;
	}
	else{
		return n * fact(n-1);
		
	}
}
