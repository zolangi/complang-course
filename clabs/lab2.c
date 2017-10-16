#include <stdio.h>
#include "lab2def.h"

int main(void)
{
  double doubles[10];
  
  double *dp;
  dp = doubles;

  inputVal(dp, (sizeof(doubles)/sizeof(*doubles)) );
  printArray(dp, (sizeof(doubles)/sizeof(*doubles)) );
 
 
  printf("\nChange to reciprocal: \n");
  double dCopy[10];

  for(int i = 0; i < (sizeof(dCopy)/sizeof(*dCopy)); i++){
    dCopy[i] = doubles[i]; 
  }
  
  double *dpc;
  dpc = dCopy;
  
  printf("Original Array:\n");
  printArray(dp, (sizeof(doubles)/sizeof(*doubles)) );
  
  printf("Reciprocal Array:\n");
  change_to_reciprocal(dpc, (sizeof(dCopy)/sizeof(*dCopy)));
  printArray(dpc, (sizeof(dCopy)/sizeof(*dCopy)));

  return 0;
}
