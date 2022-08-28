#include <stdio.h>
struct student {
	int stu_id;
	int stu_age;
	char stu_name[50];
	int street_no;
	char state[50];
	char city[50];
	char country[50];
};
int main() {
	int count1=1, count2=1;
	int n, i;

	struct student s[i];

	printf("Enter the  number of students to enter the data for: ");
	scanf("%d", &n);

	for (i=0; i<n ; i++) {
		printf("id of student #%d: ",count1);
		scanf("%d", &s[i].stu_id);
		printf("Age of student #%d: ",count1);
		scanf("%d", &s[i].stu_age);
		printf("Name of student #%d: ",count1);
		scanf(" %s", &s[i].stu_name);
		printf("Street no of student #%d: ",count1);
		scanf("%d", &s[i].street_no);
		printf("State of student #%d: ",count1);
		scanf(" %s", &s[i].state);
		printf("City of student #%d: ",count1);
		scanf(" %s", &s[i].city);
		printf("Country of student #%d: ",count1);
		scanf(" %s", &s[i].country);

		count1++;
	}
	for(i=0; i<n; i++) {
		printf("\nid of student #%d: %d",count2, s[i].stu_id);
		printf("\nAge of student #%d: %d",count2, s[i].stu_age);
		printf("\nName of student #%d: %s",count2, s[i].stu_name);
		printf("\nStreet of student #%d: %d",count2, s[i].street_no);
		printf("\nState of student #%d: %s",count2, s[i].state);
		printf("\nCity of student #%d: %s",count2, s[i].city);
		printf("\nCountry of student #%d: %s",count2, s[i].country);
		count2++;
	}
	return 0;
}
