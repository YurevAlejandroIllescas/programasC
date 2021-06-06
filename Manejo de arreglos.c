#include <stdio.h>

int main(void){
	
	int aEnteros[100];
	int eCont;
	
	for (eCont = 0; eCont < 100; eCont++){
		
		aEnteros[eCont] = eCont;
	}
	
	printf("%d", aEnteros[1]);
	
	getchar();
	return 0;
}
