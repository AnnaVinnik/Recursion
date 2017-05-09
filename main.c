#include "SumArray.h"
#include <stdio.h>

int main(){
int amountElem = 7, fib, fib2, number = 123, signs = 3, i;
int array[amountElem];
int sumArr, sumArrRec;
char str[4];

    for (int i = 0; i < amountElem; i++){
         array[i] = i;
    }
    sumArr = sumArray(array, amountElem, amountElem - 1);
    printf("Sum array iter: %d \n", sumArr);

    sumArrRec = sumArrayRec(array, 7);
    printf("Sum array rec: %d \n", sumArr);

    fib = fibonacci(10);
    printf("Fibonacci rec: %d \n", fib);

    fib2 = fibonacciIter(1, 0, 0, 10);
    printf("Fibonacci iter: %d \n", fib2);

    str[signs] = string(123, 3, str, 0);
    printf("String: %s \n", str);

    return 0;
}
