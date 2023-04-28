#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char **argv)
{
	if(argc < 2){
		printf("Need to enter a hex\n");
		exit(1);
	}
	long answer=0;
	
	char *str = malloc(sizeof(argv[1]));
	strcpy(str,argv[1]);
	int length = (int)strlen(str);
	
	if(*(str)!= '0' || (*(str+1) != 'x'&& *(str+1) != 'X' ) || length <= 2){
		printf("Hex must start with 0x or 0X and be at least 3 characters\n");
		exit(1);
	}
	str+=2;
	int pos;
	pos = length-3;
	while( *str != '\0'){
		if(*str < 48 || *str > 102 || (*str < 97 && *str > 70)|| (*str > 57 && *str < 65)){
			printf("That is not valid. Aborting.\n");
			exit(0);
		}
		if(*str <= 57)
			answer+=(long)pow(16,pos)*(*str-48);
		else if(*str <= 70)
			answer+=(long)pow(16,pos)*(*str-65+10);
		else
			answer+=(long)pow(16,pos)*(*str-97+10); 
		pos--;
		str+=1;
	}
	printf("The Number is : %ld\n",answer);
	
	
	return 0;
}
