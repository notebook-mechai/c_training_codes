int main()
{

//	int nums[] = {0,2,4,6,8,10,12,14,16,18,20,22};
//	int len_arr = sizeof(nums) / sizeof(nums[0]);
//	int i;
//	for (i=0; i < len_arr; i++)
//	{
//		printf("%d\n", nums[i]);
//	}
	
	
//	int cources_nums[] = {18,20,17,16,15,19};
//	int len_arr = sizeof(cources_nums) / sizeof(cources_nums[0]);
//	float avg, sum = 0;
//	int j;
//	for (j=0; j < len_arr; j++)
//	{
//		sum += cources_nums[j];
//	}
//	avg = sum / len_arr;
//	
//	printf("avg is: %.2f\n", avg);
	
	
	int ages[] = {88,29,77,66,25,19,91,15,18};
	int len_arr = sizeof(ages) / sizeof(ages[0]);
	int min, max = 0;
	int k;
	for (k=0; k < len_arr; k++)
	{
		if (ages[k] > max){
			max = ages[k];
		}
		else{
			min = ages[k];
		}		
	}
	printf("Max is: %d\n", max);
	printf("Min is: %d\n", min);
	
}
