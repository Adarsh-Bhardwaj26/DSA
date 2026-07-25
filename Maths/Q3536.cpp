#include <iostream>
using namespace std;
int maxProduct(int n){
int l=0;
int s=0;
while(n!=0){
    int d=n%10;
    n=n/10;
    if(d>s){
        if(d>=l){
            s=l;
            l=d;
        }
        else{
            s=d;
        }
    }
}
return l*s;
}
int main(){
  cout<<"Enter the No: "<<endl;
  int n;
  cin>>n;
  cout<<maxProduct(n)<<endl;
}