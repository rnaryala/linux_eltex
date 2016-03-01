#include <stdlib.h>
#include <stdio.h>

typedef struct{
	int a1:1; int a2:1; int a3:1; int a4:1;
    int a5:1; int a6:1; int a7:1; int a8:1;
}bit1;

int main(){
	int a;
	scanf("%d",&a);
	bit1 *p = (bit1 *)&a;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", -p->a1, -p->a2,\
			 -p->a3, -p->a4, -p->a5, -p->a6, -p->a7, -p->a8);
	return 0;
}
