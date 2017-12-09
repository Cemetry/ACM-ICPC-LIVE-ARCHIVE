#include<bits/stdc++.h>
using namespace std;
int main()
{


    double d=1,sum=0.0;
    cout<<"n e\n";
    cout<<"- -----------\n";
    for(int i=0;i<10;i++)
    {
        if(i>1)
            d*=(double)i;
        sum+=1.0/d;
       cout<<i<<" "<<setprecision(9)<<fixed<<sum<<"\n";
    }

    return 0;
}
