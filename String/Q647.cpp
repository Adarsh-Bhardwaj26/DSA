#include <iostream>
using namespace std;
int expand (int a,int b,string s){
        int ans=0;
        while(a>=0 && b<s.size() && s[a]==s[b]){
            ans++;
            a--;
            b++;
        }
        return ans;
     }
    int countSubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans+=expand(i,i,s);
            ans+=expand(i,i+1,s);
        }
        return ans;
    }
    int main(){
        cout<<"Enter the string: ";
        string s;
        cin>>s;
        cout<<countSubstrings(s)<<endl;
    }