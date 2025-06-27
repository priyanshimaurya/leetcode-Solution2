#include<iostream>
#include<vector>
using namespace std;
int isTrangle(vector<int> nums){
    int a=nums[0];
    int b=nums[1];
    int c=nums[2];
    if(a==b&&b==c){
        cout<<"equilateral";
    }
    else if(a==b || a==c|| b==c){
        cout<<"Isosceles";
    }
    else{
        cout<<"Scalene";
    }
}
int main(){
    vector<int> nums={3,3,3};
    isTrangle(nums);
}