#include <stdio.h>
#include <math.h>
int main(){
    double a;
    double b;
    double c;
    double x1;
    double x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    double d=b*b-4*a*c;
    x1= ((-1)*b+sqrt(d))/(2*a);
    x2= ((-1)*b-sqrt(d))/(2*a);

    printf("%lf\n", x1);
    printf("%lf\n", x2);

    return 0;
}
