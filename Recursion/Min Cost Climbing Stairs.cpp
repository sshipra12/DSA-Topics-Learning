class Solution {
public:
    int minCostFromIthToNthStair(int stair, vector<int>& cost) {
        // TDOD: Better solution than this, as this gives TLE for large inputs
        // definition of state: minimum cost to reach from ith stair to target(here nth) stair

        // base case when transition fails
        // here, when we reach the target
        if(stair>=cost.size())
            return 0;

        // transition : return min cost to reach from this ith stair to target nth stair
        return cost[stair] + min(minCostFromIthToNthStair(stair+1,cost),minCostFromIthToNthStair(stair+2,cost));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        // defining and understanding the meaning of state of dp is the most important thing
        
        return min(minCostFromIthToNthStair(0,cost),minCostFromIthToNthStair(1,cost));
    }
};

// old solution
/*
class Solution {
public:

    // TODO : INCORRECT solution , need to correct
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
*/
