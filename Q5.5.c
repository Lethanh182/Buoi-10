#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
    char s[100]; 
    int count = 0;
    int i = 0;

    printf("Nhap mot chuoi: ");
    fgets(s, sizeof(s), stdin);

    if (isalpha(s[i]) && tolower(s[i]) == 'a') {
        count++;
    }

    for (i = 1; s[i] != '\0'; i++) {
        if (isspace(s[i-1]) && (isalpha(s[i]) && tolower(s[i]) == 'a')) {
            count++;
        }
    }

    printf("So tu bat dau bang 'a' or 'A': %d\n", count);

    return 0;
}