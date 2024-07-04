#include<stdio.h>
int main () {
	
	int a, b, c, min;
	printf("Nhap vao a:");
	scanf("%d", &a);
	printf("Nhap vao b:");
	scanf("%d", &b);
	printf("Nhap vao c:");
	scanf("%d", &c);
	
	min = a;
	if(b < min) {
		min = b;
	}
	if(c < min) {
		min = c;
	}
	
	printf("Gia tri nho nhat la: %d\n", min);
	
	return 0;
}