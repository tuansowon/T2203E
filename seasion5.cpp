#include <stdio.h>
int main(){
	int S=4000;
	
	int year;
	printf("Nhap year=");
	scanf("%d",&year);
	
	int i=0;
	
	while (S<=year){
		int L= S*8/100;
		S+=L;
		i++;
	}
	printf("i=%d\n",i);
	
}

