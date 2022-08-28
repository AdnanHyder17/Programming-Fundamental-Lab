#include <stdio.h>
#include <string.h>
struct Register {
	int Course_id;
	char Course_name[25];
};

struct Student {
	int Student_id;
	char f_name[20];
	char l_name[20];
	struct Register R1;
	int cell_no;
	char email[25];
};

int main() {
	struct Student std[5];
	int i;

	for(i=0; i<5; i++) {
		printf("For Student #%d\n", i+1);
		printf("Enter your 4 digit student id: ");
		scanf("%d", &std[i].Student_id);
		fflush(stdin);
		printf("Enter your first name: ");
		fgets(std[i].f_name, 20, stdin);
		printf("Enter your last name: ");
		fgets(std[i].l_name, 20, stdin);
		printf("Enter your cell no: ");
		scanf("%d", &std[i].cell_no);
		fflush(stdin);
		printf("Enter your email: ");
		fgets(std[i].email, 25, stdin);
		printf("Enter Your course id: ");
		scanf("%d", &std[i].R1.Course_id);
		fflush(stdin);
		printf("Enter your course name: ");
		fgets(std[i].R1.Course_name, 25, stdin);
		printf("\n");
	}

	for(i=0; i<5; i++) {
		printf("\nFor Student #%d\n", i+1);
		printf("Your 4 digit student no is: %d\n", std[i].Student_id);
		std[i].f_name[strcspn(std[i].f_name, "\n")] = '\0';
		std[i].l_name[strcspn(std[i].l_name, "\n")] = '\0';
		printf("Your name is %s %s\n", std[i].f_name, std[i].l_name);
		printf("Your cell no is: %d\n", std[i].cell_no);
		std[i].email[strcspn(std[i].email, "\n")] = '\0';
		printf("Your email is %s.\n", std[i].email);
		printf("Your course id is %d.\n", std[i].R1.Course_id);
		std[i].R1.Course_name[strcspn(std[i].R1.Course_name, "\n")] = '\0';
		printf("Your course name is %s.\n", std[i].R1.Course_name);
	}

	return 0;
}



