class Solution {
public:
    int minCost(string colors, vector<int>& time) {
        

        int result = 0;
        int sumy =0;
        int maxi  =0;
        int flag = 0;


        for (int i=0; i<colors.size()-1; i++){

            cout<<result<<" ";

            if (colors[i] == colors[i+1]){

                sumy += time[i];
                flag = 1;
                maxi = max(maxi,max(time[i], time[i+1]));


            }

            else {
                if (flag) sumy+= time[i];
                flag = 0;

                result += (sumy- maxi);
                maxi = 0;
                sumy = 0;
                
            }
        }

        if (sumy > 0){
            sumy += time.back();

            result+= (sumy-maxi);
        }

        return result;


    }
};