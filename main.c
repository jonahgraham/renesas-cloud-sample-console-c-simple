#include <stdio.h> 
 
int x(int a, int b) { 
    if (a < 0) { 
        return -1; 
    } else { 
        return a + b; 
    } 
} 
 
int main(int argc, char** argv) { 
     
	printf("Hello from e2cloud\n"); 
	printf("x = %d\n", x(1, 2)); 
	printf("x = %d\n", x(-1, 2)); 
	return 0; 
} 
