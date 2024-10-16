#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[16];
	char ra[7];
	char city[32];
	float mean;
} Student;

int main() {
	Student *student1;
	Student *student2;
	Student *student3;

	student1 = malloc(sizeof(Student));
	student2 = malloc(sizeof(Student));
	student3 = malloc(sizeof(Student));

	printf("Write your name (max. 16 letters): ");
	scanf(" %s", student1->name);

	printf("Write your city name (max. 32 letters): ");
	scanf(" %s", student1->city);

	printf("Write your RA (max. 7 letters): ");
	scanf(" %s", student1->ra);

	printf("Your mean: ");
	scanf(" %f", &student1->mean);

	printf("Write your name (max. 16 letters): ");
	scanf(" %s", student2->name);

	printf("Write your city name (max. 32 letters): ");
	scanf(" %s", student2->city);

	printf("Write your RA (max. 7 letters): ");
	scanf(" %s", student2->ra);

	printf("Your mean: ");
	scanf(" %f", &student2->mean);

	printf("Write your name (max. 16 letters): ");
	scanf(" %s", student3->name);

	printf("Write your city name (max. 32 letters): ");
	scanf(" %s", student3->city);

	printf("Write your RA (max. 7 letters): ");
	scanf(" %s", student3->ra);

	printf("Your mean: ");
	scanf(" %f", &student3->mean);

	if(strcmp(student1->city, "marilia") == 0) {
		printf("%s lives in marília.\n", student1->name);
	}

	if(strcmp(student2->city, "marilia") == 0) {
		printf("%s lives in marília.\n", student2->name);
	}

	if(strcmp(student3->city, "marilia") == 0) {
		printf("%s lives in marília.\n", student3->name);
	}

	if(student1->mean < 7) {
		printf("%s is below class mean.\n", student1->ra);
	}

	if(student2->mean < 7) {
		printf("%s is below class mean.\n", student2->ra);
	}

	if(student3->mean < 7) {
		printf("%s is below class mean.\n", student3->ra);
	}

	free(student1);
	free(student2);
	free(student3);
	return 0;
}
