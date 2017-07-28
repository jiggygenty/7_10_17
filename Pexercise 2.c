#include<stdio.h>
#include<math.h>
double function(double *x)
{
    double epsilon=pow(10,-3);
    return(epsilon*pow(*x,-2));
}x
double functionderiv(double *x)
{
    double epsilon=pow(10,-3);
    return(epsilon*(-2)/(*x));
}
void main()
{

    double tolerance=0.001,dt=0.1,i;
    int count,size=1/dt+1;
    double x[size];
    x[0]=1;
//NEWTON RAPHSON METHOD
    count=0;
    for(i=0;i<=1;i+=dt)
    {
    x[count+1]=x[count]-(function(&x[count]))/(functionderiv(&x[count]));
    printf("The approximation  using the NEWTON-RAPHSON METHOD is: %.5lf\n",x[count]);
    count++;
    }
}
