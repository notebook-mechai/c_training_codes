int main()
{
//	char word = 's';
//	printf("%c\n", word);
//	
//	char greeting[] = "hello world";
//	printf("%s\n", greeting);
//	printf("%c\n", greeting[4]);
//	greeting[5] = '_';
//	printf("%s\n", greeting);
//	
//	int length = sizeof(greeting)/ sizeof(char);
//	//int length = sizeof(greeting);
//	printf("length of word: %d\n", length);
//	
//	int i;
//	for(i = 0; i<length; i++)
//	{
//		printf("%c\n", greeting[i]);	
//	}
	
	// **********************************************
//	char greeting_02[] = "hello";
//	
//	printf("way one to fetch len: %d\n", sizeof(greeting_02)/ sizeof(char));
//	printf("way two to fetch len: %lu\n", sizeof(greeting_02));
//	printf("way three to fetch len: %d\n", strlen(greeting_02));
//	printf("way one to fetch len: %d\n", sizeof(greeting_02)/ sizeof(greeting_02[0]));

	// **********************************************
	char txt_01[] = "hey,";
	char txt_02[] = " i'm more";
	strcat(txt_01, txt_02);
	printf("variable txt_01 after concatination string: %s\n", txt_01);
	
	// **********************************************
	char res[] = "";
	strcpy(res, txt_01);
	printf("variable res(copy function):%s\n", res);
	
	// *********************************************
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Hi";

	// Compare str1 and str2, and print the result
	printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

	// Compare str1 and str3, and print the result
	printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)
	
	
	
	
	
	
}
