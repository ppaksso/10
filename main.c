#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE*fp=NULL;
	char c;
	char str [30];
	
	fp=fopen("sample1.txt","r");
	

	/*while( (c=fgetc(fp))!= EOF)
	  putchar(c);
	  */
	  
	while (fgets(str,30,fp) !=NULL)
	  printf("%s",str); 
	
	fclose(fp);
	
	return 0;
} 
