class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int indG=0,indS=0,childCount=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(indG<g.size()&&indS<s.size()){
            if(s[indS]>=g[indG]){
                childCount++;
                indG++;
                indS++;
            }
            else{
                indS++;
            }
        }
        return childCount;
    }
};
