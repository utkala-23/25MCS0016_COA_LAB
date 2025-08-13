/*#include<stdio.h>
#include <cstdlib>
#include "helloworld_srl.h"
#include "helloworld_prl.h"
#include "ret_et_helloworld.h"*/

#include<stdio.h>
#include "helloworld_srl.h"
#include "helloworld_prl.h"

int fn_mnudrvprg_010_parallel_construct()
{
    int choice;
    printf("Enter your choice\n");
    scanf_s("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        printf("This is output of Hello world serial program\n");
        fn_hello_world_srl();
        break;
    }
    case 2:
    {
        printf("This is output of Hello world Parallel program\n");
        fn_hello_world_prl();
        break;
    }

    default:
    {
        printf("Opted wrong choice\n");
        break;
    }

    }

    return 0;
}