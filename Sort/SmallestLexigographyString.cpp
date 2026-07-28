#include <iostream>
using namespace std;
#include <String>
#include <map>
string smallestPalindrome(string s) {
        int n=s.length();
       map<char,int> f;
       for(char c:s){
         f[c]++;
       }
       int i=0;
       for(auto &[key,value]:f){
            while(value >= 2){
                s[i]=key;
                s[n-i-1]=key;
                 value -= 2;;
                i++;
            }
            if (value == 1) {
            s[n/2] = key;
}
       }
       return s;
    }

int main(){
   string a;
   cout<<"Enter a valid palindromic string:";
   cin>>a;
   cout<<smallestPalindrome(a)<<endl;
    }