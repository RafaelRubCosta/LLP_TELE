#include <stdio.h>

int main(void) {
  int i;
    int s;
    
	for(int i = 1; i <= 10; i++){
    	s = 5 * i;
        if( s % 5 == 0){
        	if( s % 2 == 0){
            	printf("%d\n", s);
    }
   }
  }
  return 0;
}