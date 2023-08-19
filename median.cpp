#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),res.begin());

        if(res.size()%2 == 0)
          
         {
           double d= ((double)(res[(res.size())/2-1]+res[res.size()/2]))/2;
           return d;
        }
        else
        {
            double d = (double)res[res.size()/2];
            return d;
        }
    }
};

int main()
{
    vector<int> first = {13, 23,10};
   vector<int> second = { 28, 33, 43};
   Solution s1;
   cout<<s1.findMedianSortedArrays(first, second);
}