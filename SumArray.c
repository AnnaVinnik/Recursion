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
