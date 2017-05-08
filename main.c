#include "SumArray.h"
#include <stdio.h>

int main(){
int amountElem = 7;
int array[amountElem];
int sumArr, sumArrRec;

    for (int i = 0; i < amountElem; i++){
         array[i] = i;
    }
    sumArr = sumArray(array, amountElem, amountElem - 1);
    printf("%d \n", sumArr);

    sumArrRec = sumArrayRec(array, 7);
    printf("Rec: %d \n", sumArr);

    return 0;
}
