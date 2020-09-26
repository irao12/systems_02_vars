#include <stdio.h>
int main() {

    int a = 250;
    double b = 13123.323;
    char c = 99;
    char d = 'c';
    char e = 10000;

    //unsigned integers
    unsigned int f = 3147483648;
    unsigned char g = -1;
    printf("Testing int: %d\nTesting double: %f\n", a,b);
    printf("Testing char initialized as an integer: %c\n", c); //should be c
    printf("Testing char initialized as a character: %c\n", d); // should be c
    printf("Testing out of bound char: %c\n", e); //results in an empty space

    printf("Testing unsigned integer: %u\n",f);
    printf("Testing unsigned char: %u",g); //-1 becomes 255
  return 0;

}
