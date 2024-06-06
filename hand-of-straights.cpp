https://leetcode.com/problems/hand-of-straights/
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
    //   if(hand.size()%groupSize !=0)
    //   {
    //     return false;
    //   }  
    //   sort(hand.begin(),hand.end());
    //   for(int i=0;i<hand.size();i++)
    //   {
    //     int temp = groupSize;
    //     while(temp!=0)
    //     {

    //     }

        map<int, int> m;

        for (auto x:hand) {
            m[x]++;
        }
        
        for(auto c: m) {
            int card = c.first;
            int cardCount = c.second;
            if (cardCount > 0) {
                for(int i=card; i<card+groupSize; i++) {
                    m[i] = m[i] - cardCount;
                    
                    if (m[i] < 0) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
