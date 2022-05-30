#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,n,oi[20],i,Ei;
    float sum,calculator[20],critical;
    N=0;
    sum=0.00;

    cout<<"How many class :";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the observed frequency Number"<<i+1<<":";
        cin>>oi[i];
        N=N+oi[i];
    }
    Ei=N/n;
    for(i=0;i<n;i++){
            calculator[i]=(float)((oi[i]-Ei)*(oi[i]-Ei))/Ei;
                sum=sum+calculator[i];
    }
    cout<<"D observed value: "<<sum<<endl;
    cout<<endl;
    cout<<"D critical:";
    cin>>critical;
    cout<<endl;
    if(sum<critical)
    {
        cout<<"This test is Accepted";
    }
    else
    {

        cout<<"This test is Rejected";
    }
        return 0;
}
