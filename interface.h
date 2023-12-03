#ifndef INTERFACE_H_
#define INTERFACE_H_

/*
 * By Mahmoud Tarek
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATIENTS 100

typedef struct {
	char study_year;
	char gender;
    char name[50];
    int age;
    int id;

}newStudent;


// Function prototypes
void App();
void add_new_student();         // Add New Student student
void display_all();             // Display All student
void delete_student();          // delete student


// Global variables
newStudent students[100];


#endif
