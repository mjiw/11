#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int grade[5];
	
	for(i=0;i<5;i++){
		printf("grade[%i]=",i);
		scanf("%d",&grade[i]);
	} 
	
	//int *number;
	int sum;
	for(i=0; i<5; i++){
		//number=&grade[i];
		//printf("grade[%i]=%i\n",i,*number);
		
		printf("grade[%i]=%i\n",i,*(grade+1));
		sum+=*(grade+i);
	}
	printf("average:%i",sum/5);
	return 0;
}
