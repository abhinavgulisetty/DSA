class Solution {
public:
    void sortColors(vector<int>& nums) {
       quicksort(nums,0,nums.size()-1); 
    }
    void quicksort(vector<int>& nums,int low,int high){
        if(low < high){
            int p = part(nums,low,high);
            quicksort(nums,low,p-1);
            quicksort(nums,p+1,high);
        }
    }
    int part(vector<int>& arr,int low,int high){
        int p = arr[high];
        int i = low - 1;
        for(int j=low;j<=high - 1;j++){
            if(arr[j] < p){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[high]);
        return i+1;
    }
};