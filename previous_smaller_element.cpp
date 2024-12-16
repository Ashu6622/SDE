#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {5,4,3,2,1};

    stack<int> st;

    vector<int> output(nums.size());

    st.push(-1);

    for(int i=0;i<nums.size();i++){

        while(st.top() >= nums[i]){
            st.pop();
        }

        output[i] = st.top();
        st.push(nums[i]);
    }

    for(int i=0;i<output.size();i++){

        cout<<output[i]<<" ";
    }
}