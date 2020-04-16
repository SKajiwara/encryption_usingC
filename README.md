## simple encryption using pseudorandom and XOR operation.
Using a pseudorandom number a as a key for encryption is the most secure way. By XORing a value you want to encrypt by a pseudorandom number you can easily encrypt a value. To decrypt, you simply need to XOR the encrypted value with the pseudorandom number.

### Exclusive OR
A B | A^B
0 0 |  0
0 1 |  1
1 0 |  1
1 1 |  0

### Pseudorandom
A pseudorandom number generator, also known as a deterministic random bit generator, is an algorithm for generating a sequence of numbers whose properties approximate the properties of sequences of random numbers.

### To Run
  1. ```$ gcc main.c -0 main```
  2. ```$ ./main```
