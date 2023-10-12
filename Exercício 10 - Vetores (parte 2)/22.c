#include <stdio.h>

int main(void){
    int a[5] = {1,2,3,4,5}, b[5]={1,3,5,7,9}, c[10], i;
	
	
	for(i = 0; i < 10; i++){
		c[i*2] = a[i];
		c[i*2+1] = b[i];
	}
	
	for(i = 0; i < 10; i++){
		printf("\n%d",c[i]);
	
	}


    return 0;
}