//to find the number of ways the matrices can be arranged for matrix chain multiplication using recursion

#include <stdio.h>

int p(int n);	//declaring recursive function to find number of arrangements possible

int main()		//main function
{
    int n;		//number of matrices to be multiplied
    printf("Enter the number of matrices to be multiplied ");
    scanf("%d",&n);
    int t=p(n);	//number of arrangements
    printf("The number of ways of arranging the matrices for multiplication = %d",t);
}

int p(int n)	//recursive function definition
{   int k; int arr=0;
    if(n==1)	//base condition
    terms=1;	
    for(k=1;k<n;k++)
    {
        arr+=(p(k)*p(n-k));	//recurrence relation
    }
    return arr;
}
