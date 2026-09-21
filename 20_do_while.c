int main()
{
    int i = 0;

    printf("____ counter 0 to 20\n");
    do{
        printf("%d\n", i);
        i++;
    }while( i <= 10);


    printf("____ summation numbers 0 to 20\n");
    int j = 0;
    int sum = 0;
    do{
        sum += j;
        ++j;
    }while( j <= 10);
    printf("sum is: %d\n", sum);
    
    return 0;

}
