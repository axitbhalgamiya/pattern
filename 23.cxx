#include <stdio.h>

/*structure declaration*/
struct employee
{
	char name[30];
	int empjd;
	float salary;
};

int main()
{
	/*declare structure variable*/
	struct employee emp;

	/*read employee details*/
	printf("\nEnter details :\n");
	printf("Name ?:");
	gets(emp.name);
	printf("joining date :");
	scanf("%d", &emp.empjd);
	printf("Salary ?:");
	scanf("%f", &emp.salary);

	/*print employee details*/
	printf("\nEntered detail is:");
	printf("\nName: %s", emp.name);
	printf("\njoining date: %d", emp.empjd);
	printf("\nSalary: %f\n", emp.salary);
	return 0;
}