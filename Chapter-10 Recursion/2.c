// sum of first 25 natural numbers
#include <stdio.h>

// without using recursion
// float soln(float n)
// {
//     float ans = (n * (n + 1)) / 2;
//     return ans;
// }

// using recuursion
float soln(float n)
{
    if (n == 0)
        return 0;
    return n + soln(n - 1);
}

int main()
{
    float n = 25;
    printf("Ans: %.2f\n", soln(n));
}