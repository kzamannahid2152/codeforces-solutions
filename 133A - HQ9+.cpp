#include<bits/stdc++.h>
using namespace std;

int main()
{
     string ch;
     cin>>ch;

     for(int i=0; i<ch.size(); i++){
        if(ch[i]=='H' || ch[i]=='Q'||ch[i]=='9'){
            cout<<"YES"<<endl;
            return 0;
        }
     }
     cout<<"NO"<<endl;

}

