/*
Author:Tanim Ahmed
*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double a[13];
    double sum=0;
    double avg;
    for(int i=0;i<12;i++)
    {
        cin>>a[i];

        sum+=a[i];
    }

   printf("$%.2f\n",sum/12);
    return 0;
}
