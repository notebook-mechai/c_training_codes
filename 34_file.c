#include <stdio.h>
#include <string.h>

FILE *fptr;
char file_name[] = "filename.txt";
char text[] = ".";

int main(){
//	printf("please enter your text: ");
//	fgets(text, 256, stdin);
	//create_file();
//	write_into_file();
//	read_from_file(); 
	read_whole_data_file();
}

void create_file(){
	fptr = fopen(file_name, "w"); // Create a file
	fclose(fptr); 	// Close the file
}

void write_into_file(){
	fptr = fopen(file_name, "a"); // Open a file in append mode
	fprintf(fptr, text); // Write some text to the file
	fclose(fptr); 	// Close the file
}


// for read first line
void read_from_file(){ 
	fptr = fopen(file_name, "r");
	char data[1024];
	fgets(data, 1024, fptr);
	printf("%s\n", data);
}

// for read first line
void read_whole_data_file(){ 
	fptr = fopen(file_name, "r");
	char data[1024];
	char temp_text[1024];
	
	// Print some text if the file does not exist
	if(fptr != NULL) {
		// way one
		//	while(fgets(data, 1024, fptr)) {
		//		printf("%s\n", data);
		//	}
	
		// way two
		while(fgets(data, 1024, fptr)) {
			strcat(temp_text, data);
		}
		printf("%s\n", temp_text);
	
	
		fclose(fptr);
	}
	else{		
		printf("Not able to open the file.");
	  	return 0;
	}
}

