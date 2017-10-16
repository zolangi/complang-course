void inputVal(double* p, size_t size)
{
  printf("Enter a double:\n");
  for(int i = 0; i < size; i++){
    scanf("%lf", p);
    p++;
  }

}

void printArray(double* p , size_t size)
{
  for(int i = 0; i < size; i++){
    printf("Value of doubles[%d] = %lf\n", i, *p);
    p++;
  }
}

void change_to_reciprocal(double* pc, size_t size)
{
  for(int i = 0; i < size; i++){
    double j = pc[i];
    pc[i] = 1/j;

  }
}
