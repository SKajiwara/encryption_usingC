#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

void generatePseudorandom (int prand[SIZE]) {
  srand(time(NULL));
  for(int i=0; i<SIZE; i++)
    prand[i] = rand()%SIZE;
}
void encrypt( int prand[SIZE], int numberToEncrypt[SIZE] ) {
  for (int i=0; i<SIZE; i++)
    numberToEncrypt[i] = numberToEncrypt[i] ^ prand[i];
}
void decrypt ( int prand[SIZE], int numberToDecrypt[SIZE] ) {
  for (int i=0; i<SIZE; i++)
    numberToDecrypt[i] = numberToDecrypt[i] ^ prand[i];
}


int main()
{

  int number[SIZE] = {5,3,2,4,5,6,2,2,3,9}; //edit to SIZE
  int i, prand[SIZE];

  printf("Original Value:     ");
  for(i=0; i<SIZE; i++)
    printf("%d ", number[i]);

  generatePseudorandom(prand);
  printf("\nPseudorandom Value: ");
  for(i=0; i<SIZE; i++) printf("%d ", prand[i]);

  printf("\nEncrypted Value:    ");
  encrypt( prand, number );
  for(i=0; i<SIZE; i++) printf("%d ", number[i]);

  printf("\nDecrypted Value:    ");
  decrypt( prand, number );
  for(i=0; i<SIZE; i++) printf("%d ", number[i]);

  return 0;
}
