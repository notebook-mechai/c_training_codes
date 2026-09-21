#include <stdio.h>

int main()
{
//	int myAge = 43;     // An int variable
//	int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge
//
//	// Output the value of myAge (43)
//	printf("%d\n", myAge);
//
//	// Output the memory address of myAge (0x7ffe5367e044)
//	printf("%p\n", &myAge);
//
//	// Output the memory address of myAge with the pointer (0x7ffe5367e044)
//	printf("%p\n", ptr);
	
	
	
//	printf(" ----- you can also use pointers to access arrays.\n");
//	
	int nums[] = {5, 7, 6, 8, 4, 2, 9};
//	int i;
//
//	for(i = 0; i < 6; i++){
//		printf("value: %d , memory_address: %p\n", nums[i], &nums[i]);
//	}
	
//	int cnt = 56;
//	printf("%lu\n", sizeof(cnt));
	
	
	printf(" ----- How Are Pointers Related to Arrays \n");
	
	// Get the value of the first element in myNumbers
//	printf("%d", *nums);
	int i;

	// way one
//	for(i = 0; i < 6; i++){
//		printf("value: %d , memory_address: %p\n", nums[i], *nums + i );
//	}
	
	
	// way two accesss values number array
	int *ptr = nums;
	printf("before change  array values with pointer\n");
	for(i = 0; i < 6; i++){
		printf("value: %d , memory_address: %p\n", nums[i], *ptr + i );
	}
	
	*(nums) = 15;
	*(nums + 1) = 17;
	*(nums + 2) = 16;
	*(nums + 3) = 18;
	*(nums + 4) = 14;
	*(nums + 5) = 12;
	*(nums + 6) = 19;
	
	printf("\nAfter change  array values with pointer\n");
	for(i = 0; i < 6; i++){
		printf("value: %d , memory_address: %p\n", nums[i], *ptr + i );
	}
	
	
	
	
	
	return 0;
	
}
