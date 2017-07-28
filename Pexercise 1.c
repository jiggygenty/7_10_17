#include<stdlib.h>
#include<math.h>
solvprint(double K, double N)
{
    double i,absolute,relative,approx,curval,h=1/N;
    absolute=0;
    approx=0;
    for(i=0;i<=1;i+=h)
    {
        approx=(sin(K*(i+1/N))-sin((double)K*i))*N;
        curval=K*cos(K*((double)i));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("First Derivative ---> When K is: %.0f and N is: %.0f\n",K,N);
    printf("The Absolute Error is:  %0.14lf\nThe Relative Error is:  %0.14lf\n",absolute,relative);
    printf("\n");

    absolute=0;
    approx=0;
    for(i=0;i<=1;i+=h)
    {
        approx=(sin(K*(i+1/N))-2*sin(K*i)+sin((double)K*(i-1/N)))*N*N;
        curval=-K*K*sin(K*((double)i));
        absolute+=fabs(curval-approx);
    }
    relative=absolute/K;
    printf("Second Derivative ---> When K is: %.0f and N is: %.0f\n",K,N);
    printf("The Absolute Error is:  %0.14lf\nThe Relative Error is:  %0.14lf\n",absolute,relative);
    printf("\n");
}

void main()
{
    int K,N;
    double i,y;
    solvprint(1,10);
    solvprint(5,10);
    solvprint(10,10);
    solvprint(20,10);
    solvprint(20,100);
    solvprint(20,500);
    solvprint(1,100);
    solvprint(1,1000);
    solvprint(1,10000);
    solvprint(1,1000000);
    solvprint(1,1000000000);
}
