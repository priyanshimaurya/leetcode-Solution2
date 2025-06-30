#include<bits/stdc++.h>
using namespace std;
bool canBeIncreasing(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        vector<int> temp=nums;
        temp.erase(temp.begin()+i);
        bool isIncreasing = true;
        for(int j=1;j<temp.size();j++){
            if(temp[j]<=temp[j-1]){
                isIncreasing = false;
                break;
            }
        }
        if(isIncreasing) {
            return true;
        }
    }        
    return false;
}
int main(){
    vector<int> nums={1,2,10,5,7};
    bool result = canBeIncreasing(nums);
    cout << (result ? "true" : "false") << endl;

}