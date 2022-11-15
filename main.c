#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *x,int *y){
	//int *x=&a;
	//int *y=&b;
	
	//변수의 값을 변경 
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}

int main(int argc, char *argv[]) {
	int a=3;
	int b=5;
	
	swap(&a,&b);
	printf("a:%i, b:%i\n",a,b);
	return 0;
	
}
