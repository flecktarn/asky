#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char * argv[]){

	bool spaces = false;

	int cols = 4;

	for (int i = 1; i < argc; ++i)
		{
			if(!strcmp(argv[i],"--spaces")){
				spaces = true;
			}
			else if(!strcmp(argv[i],"-c" && i<argc-1)){

			}

		}	


	int first = 33;
	int last = 126;
	int diff = (last-first)/cols+1;

	for (int i = first; i < first+diff; i+=1)
	{
			for(int j=i; j<(i+(cols-1)*diff)+1; j+=diff){
				if(j <= last){
					printf("%03d: %c\t\t",j , (char)j);
				}
			}
			printf("\n");
			if(spaces){
				printf("\n");
			}


	


	}

	return 0;
}