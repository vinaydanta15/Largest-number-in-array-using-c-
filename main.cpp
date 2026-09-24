#include<iostream>
#include<vector>
using namespace std;

int main(){
    int v;
    cout<<"enter your range of array:";
    cin>>v;
    if(v<=0){
        cout<<"enter valid number else insearch of zero or lesser number":
    }
    else{
        vector<int> nums(v);
        for(int i=0 ; i<v;++i){
            cout<<"a["<<i<<"]:";
            cin>>nums[i];
            
        }
        int max_val=nums[0];
        for(int i=1 ; i<v ; ++i){
            if(nums[i]>max_val){
                max_val=nums[i];
                
            }
            else{
                max_val=max_val;
                
            }
            
        }
        cout<<max_val;
    }
}