#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i =10;
	char c='a';
	
	int *iptr;
	iptr=&i;
	
	char *cptr;
	cptr=&c;
	
	int *iptr2;
	iptr2=iptr; //iptr이 iptr2가 가리키는 곳을 동일하게 가리키게 함  
	
	printf("i: %p\n %p(size:%i)\n",iptr,&i,sizeof(iptr));
	printf("c: %p\n %p(size:%i)\n",cptr,&c,sizeof(cptr));
	printf("iptr2: %p,%i\n",iptr2,*iptr2);
		
	return 0;
}
