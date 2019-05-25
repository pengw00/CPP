#include <iostream>
#include <unordered_map> 
using namespace std;


class Solution {
    
    public:
        vector<int> debt;
        int minTransfers(vector<vector<int>>& transactions) {
            unordered_map<int,int> map;
            for(auto& t: transactions){
                int lender = t[0], borrower = t[1], amount = t[2];
                map[lender] -= amount;
                map[borrower] += amount;
            }
            for(auto& p: map){
                if(p.second != 0) debt.push_back(p.second);
            }
            return dfs(0);
        }
        int dfs(int start){
            int res = INT_MAX;
            while(start < debt.size() && debt[start] == 0) start++;
            for(int i = start + 1; i < debt.size(); i++){
                if(debt[i]*debt[start]<0){
                    debt[i] += debt[start];
                    res = min(res, 1 + dfs(start+1));
                    debt[i] -= debt[start];
                }
            }
            return res == INT_MAX? 0: res;
        }
};