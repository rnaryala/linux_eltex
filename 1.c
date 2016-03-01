#include <stdlib.h>
#include <stdio.h>

typedef struct complex1{
	int a;
	int b;
}com;

com sum(com n1, com n2){
	com s;
	s.a = n1.a+n2.a;
	s.b = n1.b+n2.b;
	return s;
}

com minu(com n1, com n2){
	com m;
	m.a = n1.a-n2.a;
	m.b = n1.b-n2.b;
	return m;
}

com mult(com n1, com n2){
	com m;
	m.a = (n1.a*n2.a) - (n1.b*n2.b);
	m.b = (n1.b-n2.a)  + (n1.a*n2.b);
	return m;
}

com divi(com n1, com n2){
	com d;
	d.a = (n1.a*n2.a+n1.b*n2.b)/(n2.a*n2.a + n2.b*n2.b);
	d.b = (n1.b-n2.a-n1.a*n2.b)/(n2.a*n2.a + n2.b*n2.b);
	return d;
}

int main(){
	com c1 ,c2;
	scanf("%d%d%d%d",&c1.a,&c1.b,&c2.a,&c2.b);
	com ans = sum(c1,c2);
	printf("summa = %d+%di\n",ans.a, ans.b);
	ans = minu(c1,c2);
	printf("minus = %d+%di\n",ans.a, ans.b);
	ans = mult(c1,c2);
	printf("mult = %d+%di\n",ans.a, ans.b );
	ans = divi(c1,c2);
	printf("del = %d+%di\n",ans.a, ans.b);
	return 0;
}
