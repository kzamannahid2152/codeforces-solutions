#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, max1=0, max2=0;
        cin>>n;
        int  a[n]; int  b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        for(int i=0; i<n; i++){
                if(a[i] < b[i]){
                    max1 = max(max1,b[i]);
                    max2 = max(max2,a[i]);
                }else{
                    max1 = max(max1, a[i]);
                    max2 = max(max2, b[i]);
                }

        }
        cout<<max1*max2<<endl;


    }

    return 0;
}
