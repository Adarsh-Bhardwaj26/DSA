#include <iostream>
using namespace std;
#include <algorithm>
int minimumPushes(string word) {
        int n=word.length();
        int freq[26]={0};
        for(char c:word){
            freq[c-'a']++;
        };
        sort(freq,freq+26, greater<int>());
        int a=0;
 
        for(int i=0;i<26;i++){
          a+=freq[i]*(i/8+1);
        }
        return a;
    }
int main(){
    string s;
        cout<<"Enter the word whoes min no of count you want to know:";
        cin>>s;
        cout<<endl;
        cout<<"Minimum button click is: "<<minimumPushes(s);
}