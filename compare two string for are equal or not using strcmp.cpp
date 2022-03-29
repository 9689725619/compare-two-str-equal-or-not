#include<string.h>
#include<stdio.h>
int main(){
	char str1[50],str2[50];
	printf("enter first string");
	gets(str1);
	printf("enter second string");
	gets(str2);
	if (strcmp(str1,str2)==0)
	printf("equal");
	else 
	printf("not equal");
	return 0;
}
