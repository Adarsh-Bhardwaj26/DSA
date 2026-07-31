#include <iostream>
using namespace  std;
#include <algorithm>
 int minimumPushes(string word) {
        int arr[26]={0};
        for(char c:word){
            arr[c-'a']++;
        }
        sort(arr,arr+26,greater<int>());
        int ans=0;
        for(int i=0;i<26;i++){
            ans+=arr[i]*(i/8+1);
        }
        return ans;
    }
    int main(){
         string s;
        cout<<"Enter the word whoes min no of count you want to know:";
        cin>>s;
        cout<<endl;
        cout<<"Minimum no of push is:"<<minimumPushes(s)<<endl;
    }