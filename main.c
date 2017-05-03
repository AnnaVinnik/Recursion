#include "SumArray.h"
#include <stdio.h>

int main(){
int amountElem = 7;
int array[amountElem];
int sumArr;

    for (int i = 0; i < amountElem; i++){
         array[i] = i;
    }
    sumArr = sumArray(array, amountElem, amountElem - 1);
    printf("%d \n", sumArr);

    return 0;
}
