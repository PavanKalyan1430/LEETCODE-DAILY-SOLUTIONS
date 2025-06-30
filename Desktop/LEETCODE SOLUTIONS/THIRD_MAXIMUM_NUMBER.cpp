#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector <int> nums = {1,1,1,4,4,4,5,6,6,6};
    
    int maxi=INT_MIN;
    int sec_maxi = INT_MIN;
    int third_maxi = INT_MIN;
    
    
    for (int i : nums){
        
        if (i == maxi || i == sec_maxi || i == third_maxi) continue;

        if (i > maxi){
            third_maxi = sec_maxi;
            sec_maxi = maxi;
            maxi = i;
        }
        
        else if (i > sec_maxi  and i!=maxi and i!=third_maxi ){
            third_maxi = sec_maxi;
            sec_maxi = i;
        }
        
        else if (i > third_maxi and i!=sec_maxi){
            third_maxi = i;
        }
            
    }
    
    cout<<endl<<third_maxi;
    
} 