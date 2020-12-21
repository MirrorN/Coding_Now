#include<bits/stdc++.h>
using namespace std;

/*
Leetcode 204:
Sieve method for prime numbers
*/

void sieve_method(vector<int> nums){
    nums[0] = 0;
    nums[1] = 0;
    int len = nums.size();
    for(int i=2; i<len; i++){
        if(nums[i]){
            for(int j=2; i*j<len; j++){
                nums[i*j] = 0;
            }
        }
    }
    for(int i=0; i<len; i++){
        if(nums[i])
            cout<<i<<" "; 
    }
    cout<<endl;
}

class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1)
            return 0;
        vector<bool> tag(n, true);
        tag[1] = false;
        for(int i=2; i<n; i++){
            if(tag[i]){
                for(int j=2; i*j<n; j++)
                    tag[i*j] = false;
            }
        }
        int cou = 0;
        for(int i=1; i<n; i++){
            if(tag[i])
                cou++;
        }
        return cou;
    }
};

bool is_prime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){
    vector<int> vec(0, 5);
    return 0;
}