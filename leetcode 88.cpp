#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c=m+n,i=0,j=0,x=0;
        int a[c];
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                a[x]=nums1[i];
                i++;
            }
            else{
                a[x]=nums2[j];
                j++;
            }
                x++;
        }
        while(i<m){
            a[x]=nums1[i];
            x++;
            i++;
        }
        while(j<n){
            a[x]=nums2[j];
            x++;
            j++;
        }
        for(int i=0;i<c;i++){
            nums1.pop_back();
        }
        for(int i=0;i<c;i++){
            nums1.push_back(a[i]);
        }
    }
};