#include <stdlib.h>
#include <stdio.h>

typedef struct{
	int a;
	char b;
	int c;
	char d;
}bit1;

typedef struct{
	int a;
	
	int c;
	char d;
	char b;
}bit2;

struct bit3{
	int a;
	char b;
	int c;
	char d;
}__attribute__((packed));


int main(){
	bit1 p1;
	bit2 p2;
	bit3 p3;
	printf("str1 = %d\n",sizeof(p1));
	printf("str2 = %d\n",sizeof(p2));
	printf("str3 = %d\n",sizeof(p3));
	return 0;
}
