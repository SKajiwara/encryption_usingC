#include<stdio.h>
#include<stdlib.h>

int main()
{
  // Swap with no temp space using XOR (carrot)
  int A = 11;
  int B = 22;
  A = A ^ B;
  B = B ^ A;
  A = A ^ B; // Now A = 22 and B = 11
  printf("%d\n%d\n",A,B);
  return 0;
}
