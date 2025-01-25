#include <stdio.h>

#define phi 3.14159

int main() {
    
    double R;
    scanf ("%lf", &R);
    
    double A;
    A = phi * R * R;
    printf ("A=%.4lf", A);
    printf ("\n");
 
    return 0;
}
