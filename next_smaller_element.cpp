#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {2,1,4,3};

    vector<int> output;

    for(int i=0;i<nums.size();i++){

        int ele = -1;

        for(int j=i+1;j<nums.size();j++){

            if(nums[i] > nums[j]){
                ele = nums[j];
                break;
            }
        }
        output.push_back(ele);
    }
   

    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
}