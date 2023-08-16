#include<bits/stdc++.h>
using namespace std;

int main(){

    int testcase;
    cin>>testcase;

    while(testcase--){
        int number;
        cin>>number;
        int summation=0;
        int array_color[number];
        for(int i=0; i<number; i++){
            cin>>array_color[i];
            summation +=array_color[i];
        }

        if(summation%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }

return 0;
}
