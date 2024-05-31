https://leetcode.com/problems/fibonacci-number/submissions/1273361961/

class Solution {
public:
    int fib(int n) {
        int arr[n+1];

        memset(arr,-1,sizeof(arr));
        return fibHelper(n,arr);
       
    }
    int fibHelper(int n,int arr[])
    {
        if(n==1 || n==0)
        {
            return n;
        }
        if(arr[n]!=-1) return arr[n];
        int last = fibHelper(n-1,arr);
        int slast = fibHelper(n-2,arr);
        return last+slast;
    }
};
