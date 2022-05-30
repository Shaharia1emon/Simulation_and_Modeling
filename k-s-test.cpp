
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    float numbers[20];
    float ratio[20],ratiominus[20];
    float Dplus[20],Dminus[20];
    float Dplusmax,Dminusmax;
    float D,Dalpa;

    cout<<"How many numbers?:";
    cin>>n;
    cout<<"Enter "<<n<<"numbers"<<endl;
    for(i=0; i<n;i++)
    {
        cout<<" Enter "<< (i+1) <<"numbers:";
        cin>>numbers[i];
    }
        //sorting the number in asecding order.
        sort(numbers,numbers+n);
        for(i=0; i<n;i++){
            j=i+1;
            ratio[i]= (float) j/n;
            ratiominus[i] = (float) i/n;
            Dplus[i]= ratio[i] - numbers[i];
            Dminus[i] = numbers[i] - ratiominus[i];

        }
        cout<<endl;
        cout<<endl;

        Dplusmax = Dplus[0];
        Dminusmax = Dminus[0];
        for(i=1; i<n; i++)
        {
            if(Dplus[i] > Dplusmax){
                Dplusmax = Dplus[i];
            }
            if(Dminus[i] > Dminusmax){
                Dminusmax = Dminus[i];
            }
        }

        cout<<"D+ max: "<<Dplusmax<<endl;
        cout<<"D- max:" <<Dminusmax<<endl;
        D = max (Dplusmax, Dminusmax);
        cout<<"D = max("<<Dplusmax<<","<<Dminusmax<< ")=" <<D<<endl;
        cout<<"Enter the tabulate value (D Alpa):"<<endl;
        cin>>  Dalpa;

        if(D < Dalpa){

        cout<<"The test is accepted."<<endl;
}
else{
     cout<<"The test is rejected."<<endl;
}
        return 0;
}

