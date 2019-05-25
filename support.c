#include <stdio.h>
extern int count;
void writer_extern(void){
	printf("count is %d\n", count);
}