#include<bits/stdc++.h>
using namespace std;

int xi (int x0,int a, int c, int m)
{
    int xi=(a*x0+c)%m;
    return xi;
}
int main()

{
    int x0,a,c,m,x1,n,r;
    cout<<"Enter the value of x0:";
    cin>>x0;

    cout<<"Enter the value of a:";
    cin>>a;

    cout<<"Enter the value of c:";
    cin>>c;

    cout<<"Enter the value of m:";
    cin>>m;
    cout<<"Enter the Random number length:";
    cin>>n;

    int i;
    for(i=0; i<n;i++){
        x1=xi(x0,a,c,m);
        double r = (double) x0/ (double) m;
        cout<<r;
    }
}
