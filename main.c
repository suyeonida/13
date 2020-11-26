#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[10];   
	double grade;   //소수점 자료형 double 
};


int main(int argc, char *argv[]) {
	struct student s1= { 123456, "suyeon",4.3};
	
	s1.ID=456123;
	s1.grade=2.0;
	
	printf("ID : %d\n",s1.ID);
	printf("name : %s\n",s1.name);
	printf("grade :%f\n",s1.grade);
	
	return 0;
}
