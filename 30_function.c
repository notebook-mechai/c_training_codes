#include<stdio.h>

/*
int main(){
	show();
	return 0;
}
void show(){
	printf("you can run function");
}
*/





/*
int main(){
	fetch_numbers();
	return 0;
}

void fetch_numbers(){
	int a, b;
	printf("please enter two numbers:\n");
	scanf("%d %d", &a, &b);
	calc(a ,b);
}

int calc(a, b){
	int result = a + b;
	printf("result is: %d\n", result);	
}
*/




/*
int main(){
	char name[64]= "";
	char family[64] = "";
	printf("you'r name: ");
	scanf("%s", &name);
	printf("you'r family: ");
	scanf("%s", &family);
	make_sentence(name, family);
	return 0;
}
void make_sentence(name, family){
	char fn[128] = "";
	strcat(fn, name);
	strcat(fn, " ");
	strcat(fn, family);
	printf("fullname is: %s", fn);
	return 0;
}
*/



/*
const int PI = 3.14; // Global variable 
int main(){
	calcCircle();
	return 0;
}

void calcCircle(){
	float radius, circumference_circle, area_circle ;
	printf("please enter radius:");
	scanf("%f", &radius);
	circumference_circle =  2 * PI * radius;
	area_circle =  PI * radius * radius;
	// ---------
	printf("circumference_circle: %.3f\n", circumference_circle);
	printf("area_circle: %.3f\n", area_circle);
}
*/






const int PI = 3.14; // Global variable 
float result[2];  // Global variable 
float radius;  // Global variable 
int main(){
	calcCircle();
	printf("circumference_circle: %.3f\n", result[0]);
	printf("area_circle: %.3f\n", result[1]);
	return 0;
}

void calcCircle(){
	printf("please enter radius:");
	scanf("%f", &radius);
	result[0] = 2 * PI * radius; //circumference_circle 
	result[1] = PI * radius * radius; //area_circle ;
}







/*
// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  printf("I just got executed!");
}
*/




/*

// Function declaration
int myFunction(int x, int y);

// The main method
int main() {
  int result = myFunction(5, 3); // call the function
  printf("Result is = %d", result);
  return 0;
}

// Function definition
int myFunction(int x, int y) {
  return x + y;
}

*/













