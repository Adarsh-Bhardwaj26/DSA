#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>   
 int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==3){
            return nums[0]*nums[1]*nums[2];
        }
      sort(nums.begin(),nums.end());
        return max(nums[0]*nums[1]*nums[n-1],nums[n-3]*nums[n-2]*nums[n-1]);
    }
int main(){
 int n;
 cout<<"Enter the size of array:";
 cin>>n;
 vector<int> nums(n);
 cout<<"Enter the array: ";
 for(int i=0;i<n;i++){
    cin>>nums[i];
 }
  cout<<maximumProduct(nums)<<endl;
}