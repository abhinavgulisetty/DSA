class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        if(people.size() == 1) return 1;
        sort(people.begin(),people.end());
        int i = 0,j = people.size() - 1;
        int ans = 0;
        while(i < j){
            if(people[i] + people[j] <= limit) {
                ans++;
                i++;
                j--;
            }
            else if(people[i] + people[j] > limit){
                j--;
                ans++;
            }
        }
        if(i == j) ans++;
        return ans;
    }
};