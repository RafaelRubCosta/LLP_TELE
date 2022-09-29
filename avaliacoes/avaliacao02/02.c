#include <stdio.h>

int main() {
	int i = 1;
    
    while(i <= 40){
    	if(i % 4 != 0){
       		i++;
            continue;
            }
        printf("%d\n", i);
        i++;
        }
  return 0;
}