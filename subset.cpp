//subset problem
vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmpRes;
        permuteHelper (ans, tmpRes, nums);
        return ans;

    }
    // 帮助函数以实现数据集合功能
    // ans 表示几个数组
    // tmpRes 表示部分解
    // nums 表示的当前数组元素个数
    void permuteHelper(vector<vector<int>>& ans, vector<int>&tmpRes, vector<int>& nums){
       // step1 如果部分解的元素个数和数字的元素相同，直接插入
       if(tmpRes.size () == nums.size ()){
           ans.push_back (tmpRes);
           return;
       }  
        //step2 从集合中选定一个元素     
        for(int i = 0; i < nums.size(); i++) 
        {
            if(std::find (tmpRes.begin(), tmpRes.end(), nums [i]) == tmpRes.end()){
                //step 2.1 如果部分解不包含该元素，
                // 其实也可以用一个set<int> 来判定是否含有该元素。
                tmpRes.push_back (nums [i]);
                //step 2.2 递归调用
                permuteHelper (ans, tmpRes, nums);
                // 回溯部分解
                tmpRes.pop_back();
            }
            else{
                continue;
            }
        }
        // Step3,完成，直接返回
        return；
    }