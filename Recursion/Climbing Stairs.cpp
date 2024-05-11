class Solution {
public:
    int climbStairs(int n) {
        // solution usng recursion with passing value by reference
        int ways=0;

        // recursive call and passing value/var 'ways' by reference to calculate the answer
        noOfWays(0,n,ways);

        return ways;
    }

    void noOfWays(int stairIndex, int n, int &ways){
        // base case
        if(stairIndex==n){
            ways++;
            return;
        }
        else if(stairIndex>n)
            return;

        // else from this step we have two choices, we can go i+1 or i+2
        // since here we have to find the no. of ways, we do not bother for returning optimal cases
        // whatever chocie we can make from this step/index, we just make it

        noOfWays(stairIndex+1, n, ways);
        noOfWays(stairIndex+2, n, ways);

        // here point to note is at last there is no return
        // because this is a void type function
    }
};
