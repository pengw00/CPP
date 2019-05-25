#include <stdio.h>
#include <float.h>
int main(){
/*my first program in C*/
	printf("Storage size for float: %lu\n", sizeof(float));
	printf("Minimum float positive value: %E\n",FLT_MIN);
	printf("Maximum float positive value: %E\n", FLT_MAX);
	printf("%d\n", FLT_DIG);
	printf("Hello, World! \n");
	return 0;
}
