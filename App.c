#include "interface.h"

void App(){
    int mode;

    printf("Welcome to University!\n");
    printf("Choose mode:\n");
    printf("1. Add New student data\n");
    printf("2. Delete existing student\n");
    printf("3. Display all students\n");
    printf("4. Exit program.\n");

    while(1){
    printf("Enter your choice: ");
    scanf("%d", &mode);
		switch (mode){
			case 1:     add_new_student();                              break;
			case 2:     delete_student();                               break;
			case 3:     display_all();                                  break;
            case 4:     return 0;                                       break;
			default:    printf("Invalid mode choice. Exiting...\n");    break;
		}
    }
}

