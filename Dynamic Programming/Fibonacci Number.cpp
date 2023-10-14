class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return fibo(n,dp);
    }

    int fibo(int n,vector<int> &dp){
        if(n==0)
            return 0;
        else if(n==1)
            return 1;

        int nthTerm,n1,n2; // n1= n-1, n2= n-2
        if(dp[n-1]==-1){
            dp[n-1]=fibo(n-1,dp);
        }
        if(dp[n-2]==-1){
            dp[n-2]=fibo(n-2,dp);
        }

        nthTerm=dp[n-1]+dp[n-2];
        return nthTerm;
    }
};
