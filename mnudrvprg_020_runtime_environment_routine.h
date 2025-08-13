
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include "ret_et_helloworld.h"
#include "ret_tid_helloworld.h"

int fn_mnudrvprg_020_runtime_environment_routines()
{
    int choice;

    while (1)
    {

        printf("List of choices:\n");
        printf("0: Exit\n1: Execution time - Serial\n2: Execution time - Parallel\n3: Thread ID - Serial\n4: Thread ID - Parallel\n");


        printf("Enter your choice: ");
        scanf_s("%d", &choice);

        switch (choice)
        {
        case 0:
            printf("You opted to exit the program.\n");
            exit(0);

        case 1:
            fn_ret_et_helloworld_srl();
            break;

        case 2:
            fn_ret_et_helloworld_prl();
            break;

        case 3:
            fn_ret_tid_helloworld_srl();
            break;

        case 4:
            fn_ret_tid_helloworld_prl();
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }

    return 0;
}

/*#include<stdio.h>
#include <cstdlib>
#include"omp.h"
#include "ret_et_helloworld.h"
#include "ret_tid_helloworld.h"

int fn_mnudrvprg_020_runtime_environment_routines()
{
    int choice;
    printf("Enter your choice:");
    scanf_s("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        fn_ret_et_helloworld_srl();
        break;
    }
    case 2:
    {
        fn_ret_et_helloworld_prl();
        break;
    }
    case 3:
    {
        fn_ret_tid_helloworld_srl();
        break;
    }
    case 4:
    {
        fn_ret_tid_helloworld_prl();
        break;
    }
    }
    return 0;
}*/
