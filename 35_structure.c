#include <stdio.h>
#include <string.h>

struct student{
	char name[32];
	char family[64];
	int age;
	int nid;
};
int main(){
	struct student s1;
	strcpy(s1.name, "morteza"); // Assign a value to the string using the strcpy function
	strcpy(s1.family, "hosseinzadeh"); // Assign a value to the string using the strcpy function
	s1.age = 35;
	s1.nid = 13823;
	printf("%s\n", s1.name);
	printf("%s\n", s1.family);
	printf("%d\n", s1.age);
	printf("%d\n", s1.nid);
		
	struct student s2 ={"reza", "mardani", 34, 137};
	printf("%s\n", s2.name);
	printf("%s\n", s2.family);
	printf("%d\n", s2.age);
	printf("%d\n", s2.nid);
	
	// Copy Structures 
	struct student s3;
	s3 = s2;
	printf("%s\n", s3.name);
	printf("%s\n", s3.family);
	printf("%d\n", s3.age);
	printf("%d\n", s3.nid);
	
	
	
	
//	printf("%s", s1);
	
	return 0;
	
}

