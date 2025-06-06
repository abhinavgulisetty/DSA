class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0) return;
        int l1 = m + n - 1;
        while(n>0 && m>0){
            if(nums2[n - 1] >= nums1[m - 1]){
                nums1[l1] = nums2[n - 1];
                n--;
            }
            else{
                nums1[l1] = nums1[m - 1];
                m--;
            }
            l1--;
        }
        while(n>0){
            nums1[l1] = nums2[n - 1];
            n--;
            l1--;
        }
    }
};