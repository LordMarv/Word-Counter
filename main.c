#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void wordCount(const char *x){
	int i, count=0;
	
	for(i=0; x[i] != '\0'; i++){
		if(x[i]==' '){
			count++;
		}
	}
	printf("Word Count: %d",count+1);
}


int main() {
	//char UserInput[100];
	char* UserInput= (char*)malloc(100 * sizeof(char));
	if(UserInput==NULL){
		printf("MEMORY ALLOCATION FAILED\n");
		return 1;
	}
	
	printf("Enter text Input: \n");
	fgets(UserInput, 100, stdin);
	
	if(strlen(UserInput)==99 && UserInput[98] !='\n'){
		printf("Word count exceeds the limit");
		free(UserInput);
		return 1;
	
	}
	
	wordCount(UserInput);
	
	free(UserInput);
	return 0;
}
