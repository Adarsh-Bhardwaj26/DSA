#include <iostream>
using namespace std;
int smallestNumber(int n, int t) {
        while(true){
            int a=n;
            int p=1;
            while(a>0){
                p*=a%10;
                a=a/10;
            }
            if(p%t==0){
                return n;
            }
            n++;
        }
    }
int main(){
    int n;
    int t;
    cin>>n;
    cin>>t;
    cout<<smallestNumber(n,t)<<endl;
}