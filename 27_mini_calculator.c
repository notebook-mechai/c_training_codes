int main()
{
	int a, b;
	char op = '+';
	printf(" --- welcome to my mini calculater --- \n");
	
	printf("please enter two numbers and choose between these operators(  +  -   *  /  ): \n");
	scanf("%d %d %c", &a, &b, &op);
	
	//	printf("%d", a);
	//	printf("%d", b);
	//	printf("%c", op);
	
	switch (op)
	{
		case '+':
			printf("result: %d ", a+b);
			break;
		case '-':
			printf("result: %d ", a-b);
			break;
		case '*':
			printf("result: %d ", a*b);
			break;
		case '/':
			printf("result: %.2f ", a/b);
			break;
		default:
			printf("please follow the instrunctions");
	}
			

	
}
