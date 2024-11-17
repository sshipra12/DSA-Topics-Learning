class Solution {
public:
    // NOTE : THIS IS GIVING WRONG ANSWER, NEED TO UNDERSTAND WHY
    // state definition: total ways to reach from ith sum to target sum using given coins
    int waysToReachFromIth(int sum, vector<int> &coins, int targetAmount){
        if(sum==targetAmount)
            return 1;
        else if(sum>targetAmount)
            return 0;
        
        // transition: we look at all the choices from here and add all choices' results
        int ways=0;
        for(int i=0;i<=coins.size()-1;i++){
            ways+=waysToReachFromIth(sum+coins[i],coins,targetAmount);
        }
        return ways;
    }
    
    int change(int amount, vector<int>& coins) {
        return waysToReachFromIth(0,coins,amount);
    }
};
