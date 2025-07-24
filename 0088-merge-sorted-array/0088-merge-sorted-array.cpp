class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        a.erase(a.begin()+m,a.end());
        
        vector <int> res;
        
        int left = 0;
        int right =0;
        
        while(left<a.size() and right<b.size()){
            
            
            if (a[left] <= b[right]){
                
              //  if (res.empty() || res.back() != a[left] ){
                    
                res.push_back(a[left]);
                
                 left+=1;
                
            }
            
            else if (b[right] < a[left])  {
                
              //  if (res.empty() || res.back() != b[right] ){
                    
                res.push_back(b[right]);
                
                right+=1;
            }
            
            // else {
                
            //    // if (res.empty() || res.back() != a[left] ){
            //         res.push_back(a[left]);
            //         left+=1;
            //         right+=1;
                    
                
           // }
            
        }
        
        while(left<a.size()){
            
            //if (res.empty() || res.back() != a[left]){
            res.push_back(a[left]);
            left+=1;
        }
        
        while(right<b.size()){
           // if (res.empty() || res.back() != b[right]){ ;
            res.push_back(b[right]);
            right+=1;
        }
        
        a= res;
        
    }
};


    //     int h=0,i=0,j=0;
    //     vector <int> res;
    //     nums1.erase(nums1.begin()+m,nums1.end());
    //    nums1.insert(nums1.end(),nums2.begin(),nums2.end());
    //    sort(nums1.begin(),nums1.end());}};
       
      