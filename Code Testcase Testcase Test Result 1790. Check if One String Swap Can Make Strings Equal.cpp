class Solution {
public:
bool solve(string s1,string s2){
    sort(begin(s1),end(s1));
    sort(begin(s2),end(s2));
    if(s1 == s2){
        return true;
    }
    return false;
}
    bool areAlmostEqual(string s1, string s2) {
        vector<int>idx;
        int sum1 = 0;
        int sum2 = 0;

        if(s1==s2){
            return true;
        }
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i]){
                idx.push_back(i);
                 
            }
            sum1 = sum1 + (s1[i]-'0');
            sum2 = sum2 + (s2[i]-'0');
        }
        if(idx.size()>2  || sum1!=sum2 || !solve(s1,s2)){
            return false;
        }
        return true;
    }
};
