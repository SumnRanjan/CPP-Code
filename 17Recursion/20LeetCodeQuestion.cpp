// Question 198
class Solution {
public:

    int solve(vector<int>& nums , int size , int index) {
        // base case

        if(index>= size){
            return 0;
        }

        // chori karlo -> ith index pr
        int option1 = nums[index] + solve(nums , size , index + 2);

        // chori mat karlo ->  ith index pr
        int option2 = 0 + solve(nums, size , index+1);

        int finalans = max(option1 , option2);
        return finalans;
    }

    int rob(vector<int>& nums) {
        int size = nums.size();
        int index = 0;
        int ans = solve(nums , size , index);
        return ans;
        
    }
};

// Question 322

class Solution {
public:

    int solve(vector<int>& coins, int amount) {
        if(amount == 0){
            return 0;
        }

        int mini = INT_MAX;
        int ans = INT_MAX;

        for(int i = 0 ; i < coins.size() ; i++)
        {
            int coin = coins[i];
            if(coin<=amount)
            {
                int recans = solve(coins , amount - coin);
                if(recans != INT_MAX)
                ans =  1 + recans;
            }
            mini = min(mini , ans);
        }
        return mini;
    }


    int coinChange(vector<int>& coins, int amount) {
        int ans = solve(coins , amount);

        if(ans == INT_MAX)
        return -1;

        else
        return ans;
    }
};