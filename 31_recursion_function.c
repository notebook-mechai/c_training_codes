#include <stdio.h>

// way one to summation all number between 0 to you'r number
//int main(){
//	int number = 10;
//	int i;
//	int sum = 0;
//	for (i = 0; i <= number; i++){
//		sum += i;
//	}
//	printf("summation is: %d\n", sum);
//}


// way two to summation all number between 0 to you'r number
int sum(int n); // function declaration

int main(){
	int number = 11;
	int result = sum(number);
	printf("%d", result);
	return 0;
}

int sum (int n){
	if (n > 0){
		return n + sum(n-1);
	}
	else{
		return 0;
	}
}


