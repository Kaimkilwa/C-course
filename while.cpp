//Demonstrates a simple while statement
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int calculate;
 //print the numbers 1 through 12
 //set the initial value...
 calculate = 1;
 //set the while condition...
 while(calculate <= 12)
 {
 //display...
 printf("%d ", calculate);
 //increment by 1...repeats
 calculate++;
 }
 printf("\n");
 system("pause");
 return 0;
}
