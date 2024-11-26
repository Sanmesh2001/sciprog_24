// TODO: Complete the inclusion of necessary libraries
#include<stdio.h>
#include<math.h>

int main() {

//TODO: Complete variable declarations
 int n,i;
printf("Enter the value of n :");
scanf("%d",&n);

// TODO: Enter the number of data points  

    float x[n],y[n];
    float alpha,beta,denom;
    float sum_xiyi=0,sum_xi=0,sum_yi=0,sum_xi_square=0;

// TODO: Enter (xi, yi) values i=1, 2, ..., n
for(i=1;i<=n;i++)
{
    printf("x[%d] =",i);
    scanf("%f",&x[i]);
    printf("y[%d] =",i);
    scanf("%f",&y[i]);
}

//       Note that C array indices start from 0
for ( i = 1; i <=n; i++)
{
   sum_xiyi+= x[i]*y[i];
   sum_xi+=x[i];
   sum_yi+=y[i];
   sum_xi_square+= pow(x[i],2);

}

/*
TODO: Calculate alpha and beta formulas
      Use the pow() function for the calculation of power of 2 in the formula.
      Check and exit the code if the denominator for a is equal to zero.
*/
denom=((n*sum_xi_square)-pow(sum_xi,2));
if (denom==0)
{
    printf("Denominator of Alpha is zero \n");
    return 1;
}

alpha=((n*sum_xiyi)-(sum_xi*sum_yi))/denom;
beta=((sum_yi)-(alpha*sum_xi))/n;
//TODO: Print the equation of the line 
printf("y=%fx + %f",alpha,beta);
    return 0;
}
