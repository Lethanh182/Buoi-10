#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char s[101];
	int i;
	char c;
	int count = 0;
	
	printf("Nhap vao mot chuoi s:");
	fgets(s, 101, stdin);
	
	size_t length = strlen(s);
	if (length > 0 && s[length - 1] == '\n') {
		s[length - 1] =  '\0';
	}
	for (i = 0; s[i] != '\0'; i++) {
		 c = tolower(s[i]);
		 if ( c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
		 	count++;
		 }	 		 
	}
	
	printf("%s\n", s);
	printf("%d\n", count);
	printf("OUTPUT:\n");
	
	return 0;
}