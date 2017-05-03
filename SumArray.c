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
