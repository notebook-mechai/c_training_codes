int main()
{
    printf("______ show even numbers 0 to 20 \n");
    int i = 0;
    while( i <= 20)
    {
        if ( i % 2 == 0 ){
           printf("%d\n", i);
        }
        ++i;
    }


    printf("______ show odd numbers 0 to 20 \n");
    int j = 0;
    while( j <= 20)
    {
        if ( j % 2 != 0 ){
           printf("%d\n", j);
        }
        ++j;
    }

}
