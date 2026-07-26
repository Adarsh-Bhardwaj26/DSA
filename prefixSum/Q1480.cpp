#include <iostream>
using namespace std;
#include <vector>
vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            nums[i]=sum;
        }
        return nums;
    }
int main(){
    
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl;
    vector<int> nums(n);
    cout<<"Enter the value of array:";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
   runningSum(nums);
   for(int i=0;i<n;i++){
    cout<<nums[i]<<" ";
   }
}