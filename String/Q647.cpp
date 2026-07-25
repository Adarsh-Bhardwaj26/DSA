#include <iostream>
using namespace std;
/**
 * optimised approach
 */
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
/*
brute force approach

*/ 
 int countSubstringsBruteForce(string s) {
        int n = s.size();
        int count = 0;

        for (int l = 0; l < n; l++) {
            for (int r = l; r < n; r++) {

                bool palindrome = true;
                int i = l;
                int j = r;

                while (i < j) {
                    if (s[i] != s[j]) {
                        palindrome = false;
                        break;
                    }
                    i++;
                    j--;
                }

                if (palindrome)
                    count++;
            }
        }

        return count;
    }
    int main(){
        cout<<"Enter the string: ";
        string s;
        cin>>s;
        cout<<countSubstrings(s)<<endl;
        cout<<countSubstringsBruteForce(s)<<endl;
    }