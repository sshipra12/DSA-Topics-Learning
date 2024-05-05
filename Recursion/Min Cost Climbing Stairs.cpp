class Solution {
public:

    // INCORRECT, need to correct
    int minCostRecursive(int stairInd, vector<int> &stairs){
        // base case
        if(stairInd>=stairs.size())
            return 0;

        // algorithmic thinking using recursion
        if(stairInd==-1){
            return min(minCostRecursive(stairInd+1,stairs),minCostRecursive(stairInd+2,stairs));
        }
        else{
            return stairs[stairInd] + min(minCostRecursive(stairInd+1,stairs),minCostRecursive(stairInd+2,stairs));
        }
    }

    int minCostClimbingStairs(vector<int>& cost) {
        // so whereever I am standing or whereever I land, I will have to pay that stair cost to move forward
        // if we are staning at ith index, we can go to i+1 or i+2, we start from i=-1 i.e. bottom of the stairs
        int minCost;
        
        // recursive call
        minCost = minCostRecursive(-1,cost);

        return minCost;
    }
};
