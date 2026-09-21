/*
There are two types of conversion in C:

    1. Implicit Conversion (automatically)
    2. Explicit Conversion (manually)
*/
int main()
{
    int x = 5, y = 2;
    int dev = x / y;
    printf("percentage d: %d\n", dev);

    printf("\n__ implicit conversation __\n");

    // Automatic conversion int to float
    float flt = 9;
    printf("I.C (int to float): %f\n",flt);

    //Automatic conversion float to int
    int num = 9.99;
    printf("I.C (float to int): %d", num);

    printf("\n__ emplicit conversion __\n");

    // manual conversion
    float dev02 = (float)5/2; // Output: 2.500000
    //float dev02 = 5/2; // output: 2.000000
    printf("%f", dev02);
    printf("%.2f", dev02);






}
