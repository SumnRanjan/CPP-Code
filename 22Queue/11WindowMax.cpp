//239. Sliding Window Maximum
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>dq;

        //first window ko process karo
        for(int i = 0 ; i<k ; i++){
            int element = nums[i];

            //jitna bi queue ka andar small element is unko remaove karo
            while(!dq.empty() && element > nums[dq.back()]){
                dq.pop_back();
            }
            
            dq.push_back(i);
        }

        for(int i = k ; i<nums.size() ; i++){
            //ans store 
            ans.push_back(nums[dq.front()]);

            //remove
            //out of range 
            if(!dq.empty() && i - dq.front() >= k){
                dq.pop_front();
            }

            //chote element ko pop karo
            int element = nums[i];
            while(!dq.empty() && element > nums[dq.back()]){
                dq.pop_back();
            }

            //addition
            dq.push_back(i);
        }

        //last window ka answer
        ans.push_back(nums[dq.front()]);

        return ans;
    }
};