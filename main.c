#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char src[]="The worrst things to eat before you sleep";
	char dst[100];
	char str[30]="happy C progarmming";
	
	strcpy(dst,src);
	
	printf("copied string : %s\n",dst);
	printf("문자열 %s의 길이 : %i\n",str,strlen(str));
	return 0;
} 
