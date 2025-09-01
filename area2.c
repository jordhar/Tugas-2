#include <stdio.h>

int main(){
	int length;
	int width;
	int area;
	
	printf("input length: ");
	scanf("%d", &length);
	getchar();
	printf("input width: ");
	scanf("%d", &width);
	getchar();
	
	printf("area: %d", length*width);
	
	return 0;
}
