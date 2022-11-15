#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *pc; //1바이트 
	int *pi; //4바이트 
	double *pd; //8바이트 
	
	pc=(char*)10000;
	pi=(int*)10000;
	pd=(double*)10000;
	
	printf("증가 전: pc=%d, pi=%i, pd=%d\n",pc,pi,pd);
	
	pc++;
	pi++;
	pd++;
	
	printf("증가 후: pc=%d, pi=%i. pd=%d\n",pc,pi,pd);
	
	 
	return 0;
}
