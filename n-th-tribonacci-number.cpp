https://leetcode.com/problems/n-th-tribonacci-number/description/?envType=study-plan-v2&envId=dynamic-programming

class Solution {
public:

    // int helper(int n, int dp[]){
    //     //base case
    //     if(n==0)
    //     {
    //         return 0;
    //     }

    //     if(n==1 || n==2){
    //         return 1;
    //     }

    //     if(dp[n]!=-1) {
    //         return dp[n];
    //     }

    //     int first = helper(n-1, dp);
    //     int second = helper(n-2, dp);
    //     int third = helper(n-3, dp);

    //     return first+second+third;
        
    // }


    int tribonacci(int n) {
        int dp[n+1];
        // memset(arr,-1,sizeof(dp));
        // return helper(n, dp);

        if (n == 0) {
            return 0;
        }
        else if (n == 1 || n == 2) {
            return 1;
        }

        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;

        for (int i=3 ; i<=n; i++) {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }

        return dp[n];
    }
};
