#include <iostream>
using namespace std;
#include <vector>
 int maxProduct(vector<int>& nums) {
        int l=0;
        int h=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>l){
                if(nums[i]>h){
                    l=h;
                    h=nums[i];
                }
                else{
                    l=nums[i];
                }
            }
        }
        return (l-1)*(h-1);
 }
int main(){
 int n;
 cout<<"Enter the size of array: ";
 cin>>n;
 cout<<"Enter the values:";
vector<int> nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
cout<<"Max product is: "<<maxProduct(nums)<<endl;
}