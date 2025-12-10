class Solution {
public:
    int clumsy(int n) {
        
        int cnt = 0;
        int ele;
        vector <int> vec;

        stack<int> s;
        s.push(n);

        for (int i= n-1; i>0; i--){

            if (cnt == 0){
                ele = s.top();
                s.pop();
                s.push(ele * i);
            }

            else if (cnt == 1){
                ele = s.top();
                s.pop();
                s.push(ele / i);
            }

            else s.push(i);

            cnt+=1;
            if (cnt == 4) cnt = 0;
        }

         
        
        while(!s.empty()){
            ele = s.top();
            vec.push_back(s.top());
            s.pop();
        }

        int res = vec.back();
        cnt = 0; 

        for(int i= vec.size()-2; i>=0; i--){
            if(cnt == 0){    
                res += vec[i];
                cnt+=1;
            }
            
            else {
                res -= vec[i];
                cnt-=1;}
        }

        return res;


    }
};