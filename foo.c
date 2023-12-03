#include "interface.h"

int Student_Num = 0;
int reg_students = 0;
/*
 * By Wafaa Magdy
 *
 */
void add_new_student() {
	int id;
    printf("\nEnter student details:\n");
    printf("Name: ");
    scanf("%s", students[Student_Num].name);
    printf("Age: ");
    scanf("%d", &students[Student_Num].age);
    while (students[Student_Num].age >= 30) {
		printf("Invalid age\n");
        printf("Age: ");
        scanf("%d", &students[Student_Num].age);
	}
    printf("Gender: ");
    scanf("%s", &students[Student_Num].gender);
    printf("ID: ");
    scanf("%d", &id);
	printf("Year: ");
    scanf("%d", &students[Student_Num].study_year);
	while (students[Student_Num].study_year >= 5) {
		printf("Invalid age\n");
    	printf("Year: ");
        scanf("%d", &students[Student_Num].study_year);
	}

    // Check if ID already exists
    for (int i = 0; i < 100; i++) {
        if (students[i].id == id) {
            printf("ID already exists. Student not added.\n");
            return;
        }
    }

	students[Student_Num].id = id;
    Student_Num++;

    printf("Student added successfully.\n");
}
/*
 * By Ammar
 *
 */

void delete_student() {
    int id;
    int index = -1;

    printf("\nEnter student ID: ");
    scanf("%d", &id);

    // Find reservation index based on ID
    for (int i = 0; i < reg_students; i++) {
        if (id == students[i].id ) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Student not found for the given ID.\n");
        return;
    }

    // Move the last reservation to the cancelled reservation's position
    students[index] = students[Student_Num - 1];
    Student_Num--;

    printf("Student deleted successfully.\n");
}

/*
 * By Morad Tammer
 *
 */
void display_all() {
    int id;
    int index = -1;

    printf("\nEnter student ID: ");
    scanf("%d", &id);

    // Find patient index based on ID
    for (int i = 0; i < MAX_PATIENTS; i++) {
        if (students[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Incorrect ID. student not found.\n");
        return;
    }
    printf("\nstudent Record:\n");
   // printf("Name: %s\n", students[index].name);
    printf("student name : %s\n",students[index].name);
    printf("Age: %d\n", students[index].age);
    printf("Gender: %c\n", students[index].gender);
    printf("study_year: %d\n", students[index].study_year);
}


