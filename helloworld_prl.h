#include"stdio.h"
#include "omp.h"

//parallel program

void fn_hello_world_prl()
{
#pragma omp parallel
	printf("hello world parallel\n");
}
