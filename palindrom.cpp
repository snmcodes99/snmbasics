#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
        int x;
        cin>>x;
        int m=x;
        int s=0;
        if(x<0){
            cout<<"false"<<endl;
        }
        else{
            while(x>0){
                int y=x%10;
                s=s*10+y;
                x=x/10;
            }
            // cout<<s<<endl;
            // cout<<m<<endl;
            if(m==s){
                cout<<"true"<<endl;
            }
            else{
                cout<<"false"<<endl;
            }
        } 
        return 0;
}
