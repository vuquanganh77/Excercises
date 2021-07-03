#include <stdio.h> 
#include <stdbool.h> 
#include <math.h> 
 
int main () 
{ 
int i, j;
    for (i = 1; i <= 100; i++) 
    { 
        bool prime = true; 
 
        if( i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0 ) { 
            prime = false; 
        } else { 
            for (j=9; j*j < i; j++) 
            { 
                if (i % j == 0) 
                { 
                    prime = false; 
                    break; 
                } 
            } 
        } 
 
        if(prime) printf("%d\n", i); 
    } 
    return 0; 
} 
