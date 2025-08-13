#include <stdio.h>
#include <omp.h>

// 1. omp_set_num_threads
void fn_omp_set_num_threads() {
    int num;
    printf("Enter number of threads to set: ");
    scanf_s("%d", &num);
    omp_set_num_threads(num);
#pragma omp parallel
    {
        printf("Thread ID: %d\n", omp_get_thread_num());
    }
}

// 2. omp_get_num_threads
void fn_omp_get_num_threads() {
#pragma omp parallel
    {
        printf("Total threads: %d\n", omp_get_num_threads());
    }
}

// 3. omp_get_max_threads
void fn_omp_get_max_threads() {
    printf("Max threads: %d\n", omp_get_max_threads());
}

// 4. omp_get_thread_num
void fn_omp_get_thread_num() {
#pragma omp parallel
    {
        printf("Thread ID: %d\n", omp_get_thread_num());
    }
}

// 5. omp_get_num_procs
void fn_omp_get_num_procs() {
    printf("Available processors: %d\n", omp_get_num_procs());
}

// 6. omp_in_parallel
void fn_omp_in_parallel() {
    printf("Outside parallel? %d\n", omp_in_parallel());
#pragma omp parallel
    {
#pragma omp single
        printf("Inside parallel? %d\n", omp_in_parallel());
    }
}

// 7. omp_set_dynamic
void fn_omp_set_dynamic() {
    omp_set_dynamic(1);
    printf("Dynamic threads enabled.\n");
}

// 8. omp_get_dynamic
void fn_omp_get_dynamic() {
    printf("Is dynamic adjustment enabled? %d\n", omp_get_dynamic());
}

// 9. omp_set_nested
void fn_omp_set_nested() {
    omp_set_nested(1);
    printf("Nested parallelism enabled.\n");
}

// 10. omp_get_nested
void fn_omp_get_nested() {
    printf("Is nested parallelism enabled? %d\n", omp_get_nested());
}







