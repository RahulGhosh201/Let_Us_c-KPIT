// Define a function that receives weight of a commodity in Kilograms
// and returns the equivalent weight in Grams, Tons and Pounds. Call
// this function from main( ) and print the results in main( ).

#include <stdio.h>

float inGrams(float n)
{
    return n * 1000;
}

float inTons(float n)
{
    return n / 1000;
}
float inPounds(float n)
{
    return n * 2.20462;
}

int main()
{
    float kg;
    printf("Enter weights in Kilograms: \n");
    scanf("%f", &kg);

    printf("After conversion: \n");
    printf("%.2f grams\n", inGrams(kg));
    printf("%.6f tons\n", inTons(kg));
    printf("%.2f pounds\n", inPounds(kg));
    return 0;
}