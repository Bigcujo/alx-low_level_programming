#include <stdio.h>
/**
 * main - this is the entry into the code block
 * Return: 0
 */
int main(void)
{
	int f;
	int arr[5];
	int *p;

	arr[2] = 1024;
	p = &f;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
	*(p + 5) = 98;
  /* ...so that this prints 98\n */
	printf("arr[2] = %d\n", arr[2]);
	return (0);
}

