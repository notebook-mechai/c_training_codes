#include <stdio.h>
#include <string.h>


// way one
/*
enum Level {
  LOW, // 0
  MEDIUM, // 1
  HIGH // 2
};
*/

//way two
/*
enum Level{
	LOW = 25,
	MEDIUM = 50,
	HIGH = 75
};
*/

// way three
/*
enum Level {
  LOW = 5,
  MEDIUM, // Now 6
  HIGH // Now 7
};
*/

enum Level{
	LOW = 1,
	MEDIUM = 2,
	HIGH = 3
};

int main(){
  enum Level myVar = { HIGH }; // Create an enum variable and assign a value to it
//  printf("%d", myVar); // Print the enum variable
  switch (myVar) {
    case 1:
      printf("Low Level");
      break;
    case 2:
      printf("Medium level");
      break;
    case 3:
      printf("High level");
      break;
  };
  
  
  return 0;
	
}

