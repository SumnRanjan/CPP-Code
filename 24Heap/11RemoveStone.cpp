//1962. Remove Stones to Minimize the Total
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> maxheap;

        for (int i = 0; i < piles.size(); i++){
            int element = piles[i];
            maxheap.push(element);
        }

        while(k--){
            int topEle = maxheap.top();
            maxheap.pop();

            topEle = topEle - (topEle/2);

            maxheap.push(topEle);
        }

        int sum = 0;
        while(!maxheap.empty()){
            int top = maxheap.top();
            sum += top;
            maxheap.pop();
        }
        return sum;
    }
};