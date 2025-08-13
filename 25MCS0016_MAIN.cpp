#include <stdio.h>
#include<omp.h>
#include "040_wsc_sections_pp1.h"
int main()
{
    fn_wsc_sections_pp1_srl();
    fn_wsc_sections_pp1_prl();
    return 0;
}

/*#include "031_wsc_for_num_square.h"

int main() {
    int choice;

    do {
        printf("\n==============================\n");
        printf("Menu: Number Square using Work-Sharing Construct (OMP)\n");
        printf("==============================\n");
        printf("1. Serial Execution\n");
        printf("2. Parallel Execution\n");
        printf("3. Compare Execution Time, Speedup, and Efficiency\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            fn_num_square_srl();
            break;
        case 2:
            fn_num_square_prl();
            break;
        case 3:
            fn_num_square_speedup_efficiency();
            break;
        case 4:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice. Please enter 1–4.\n");
        }
    } while (choice != 4);

    return 0;
}*/



//int main() {

	//fn_mnudrvprg_helloworld();
	//fn_wsc_for_2constructs();
	//fn_wsc_for_1construct();
	//fn_num_square();
  

    /*int choice;
    do {
        printf("\n======= OpenMP RER Demo Menu =======\n");
        printf("1. Hello World (Serial)\n");
        printf("2. Hello World (Parallel)\n");
        printf("3. Measure Execution Time (Serial vs Parallel)\n");
        printf("4. Display Thread IDs (omp_get_thread_num)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);  // Visual Studio prefers scanf_s for security

        switch (choice) {
        case 1:
            hello_serial();
            break;
        case 2:
            hello_parallel();
            break;
        case 3:
            measure_execution_time();
            break;
        case 4:
            display_thread_ids();
            break;
        case 5:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);
	return 0;*/
//}

