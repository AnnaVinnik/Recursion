#include <stdio.h>
#include "SumArray.h"

int sumArray(int arr[], int amountElements, int currentNumber)
{
    if (currentNumber == 0){
        return arr[currentNumber];
    }
    else{
        return arr[currentNumber] + sumArray(arr, amountElements, currentNumber - 1);
    }
    
}

int sumArrayRec(int a[], int i)
{
    if (i == 0)
         return a[0];
    return a[i] + sumArrayRec(a, i - 1);
}

int fibonacci(int n)
{
    if (n <= 1){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);

}

int fibonacciIter(int n1, int n2, int i, int amountNumber)
{
int temp;
     if (i == amountNumber - 2)
         return n1 + n2;
     i += 1;
     temp = n2;
     n2 = n1;
     n1 = n2 + temp;
     return fibonacciIter(n1, n2, i, amountNumber);
}

char string(int number, int signs, char str[2], int i)
{
    if (i == signs)
        return '\0';
    str[signs - 1 - i] = number % 10 + '0';//string(number, signs, str, 0);
    number = number/10;
    i += 1;
    return string(number, signs, str, i);
}
