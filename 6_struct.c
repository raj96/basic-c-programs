#include <stdio.h>
#include <string.h>

// structs are a way of declaring complex data structures in C
// structs help you in defining a blueprint as to how you expect
// your data to look. Instead of handling multi-dimensional arrays
// of single field datas (like 'name', 'rollno' and 'grade' in the
// below example), structs simplify the process by defining small packets
// of the same.
struct StudentRecord {
	char name[50];
	int rollno;
	char grade;
};

void printStudentRecord(struct StudentRecord s_Record) {
	printf("Name:\t%s\n", s_Record.name);
	printf("Roll No.:\t%d\n", s_Record.rollno);
	printf("Grade:\t%c\n", s_Record.grade);
	printf("=================\n");
}

int main() {
	struct StudentRecord student1;
	strcpy(student1.name, "Ashish Thakur");
	student1.rollno = 1;
	student1.grade = 'A';
	printStudentRecord(student1);

	return 0;
}
