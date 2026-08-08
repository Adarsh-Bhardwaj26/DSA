#include <iostream>
using namespace std;
 int longestPalindrome(string s) {
        int arr[52]={0};
        for(char c:s){
            if(c>='a' && c<='z')
                arr[c-'a']++;
            else{
                arr[c-'A'+26]++;
            }
        }
        int c=0;
        bool t=false;
        for(int i=0;i<52;i++){
            c+=arr[i]/2;
            if(arr[i]%2!=0){
                t=true;
            }
        }
        if(t){
            return c*2+1;
        }
        return c*2;
    }
    int main(){
        cout<<"Enter the string and get the longest palindrome size formed by that \n";
        string a;
        cin>>a;
        cout<<longestPalindrome(a)<<endl;
       return 0;
    }