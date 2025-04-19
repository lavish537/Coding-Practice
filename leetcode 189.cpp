#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n){
            k=k%n;
        }
        if(k!=0){
        vector<int> temp;
        for(int i=k;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<k;i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            nums.pop_back();
        }
        for(int i=0;i<n;i++){
            nums.push_back(temp[i]);
        }
        if(n%2!=0){
            int z=nums[0];
            for(int i=0;i<n-1;i++){
                nums[i]=nums[i+1];
            }
            nums[n-1]=z;
        }
        }
        }
};