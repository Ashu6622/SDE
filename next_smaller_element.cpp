#include<bits/stdc++.h>
using namespace std;

int main(){

    // brute approach
    // T.C = O(N^2)

    // vector<int> nums = {2,1,4,3};

    // vector<int> output;

    // for(int i=0;i<nums.size();i++){

    //     int ele = -1;

    //     for(int j=i+1;j<nums.size();j++){

    //         if(nums[i] > nums[j]){
    //             ele = nums[j];
    //             break;
    //         }
    //     }
    //     output.push_back(ele);
    // }
   

    // for(int i=0;i<output.size();i++){
    //     cout<<output[i]<<" ";
    // }

    // ---------------------------------------------------------------------->

    // optimized approach
    // T.C -> O(N)

    vector<int> nums = {2,1,4,3};
    stack<int> st;
    vector<int> output(nums.size(), -1);

    for(int i=nums.size()-1;i>=0;i--){

        while(!st.empty() && st.top() >= nums[i]){
            st.pop();
        }

        if(!st.empty() && st.top() < nums[i]){
            output[i] = st.top();
        }
        st.push(nums[i]);
    }

    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }

}