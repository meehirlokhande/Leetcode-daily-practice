https://leetcode.com/problems/k-th-symbol-in-grammar/description/

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 && k==1){
            return 0;
        }
        int lengthOfN = pow(2,(n-1));
        int mid =lengthOfN /2;

        if(k <= mid){
            return kthGrammar(n-1,k);
        }else{
            return !kthGrammar(n-1,k-mid);  //! represent complement
        }

    }
};
