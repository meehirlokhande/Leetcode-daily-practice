https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/?envType=daily-question&envId=2025-02-13
class Solution {
public:
    void operation(priority_queue <long long, vector<long long>, greater<long long> > &pq){
        long long num1 = pq.top();
        pq.pop();
        long long num2 = pq.top();
        pq.pop();
        long long temp = min(num1,num2)*2 + max(num1,num2);
        pq.push(temp);
    }
    int minOperations(vector<int>& nums, int k) {
        int count=0;
        priority_queue <long long, vector<long long>, greater<long long> > pq;
        int n = nums.size();
        for(auto i:nums){
            pq.push(i);
        }
        while(pq.top()<k){
            operation(pq);
            count++;
        }
        return count;
    }
};
