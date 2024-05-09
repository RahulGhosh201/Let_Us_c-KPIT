#include <stdio.h>
#include <math.h>

void soln(int p[], int r[], int n[], int q[])
{
    printf("Ans: ");
    for (int i = 0; i < 10; i++)
    {
        int t1 = 1 + (r[i] / q[i]);
        int t2 = pow(t1, (n[i] * q[i]));
        int t3 = p[i] * t2;
        printf("%d, ", t3);
    }
}

int main()
{
    int p[10], r[10], n[10], q[10];
    printf("Enter set of elements: ");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter p: ");
        scanf("%d", &p[i]);
        printf("\nEnter r: ");
        scanf("%d", &r[i]);
        printf("\nEnter n: ");
        scanf("%d", &n);
        printf("\nEnter q: ");
        scanf("%d", &q);
    }
    soln(p, r, n, q);
    return 0;
}

// Replacement of pow() function
//  float power(float base, float exponent){
//      float result=1.0;
//      for(int i=0;i<exponent;i++){
//          result*=base;
//      }
//      return result;
//  }
