class Solution {
public:
    int minCost(string colors, vector<int>& time) {
        
        int left = 0;
        int result = 0;
        
        for (int right = 0; right<colors.size(); right++){

            if (colors[left] == colors[right] and right-left+1 >= 2 ){

                if (time[left] <= time[right]){
                    result+= time[left];
                    cout<<time[left]<<" ";
                    left=right;
                }
                else {
                    result+= time[right];
                    cout<<time[right]<<" ";}
                    cout<<"right index : "<< right<<endl;
                // result += min(time[left], time[right]);

                


            }

            else if (colors[left] != colors[right]) left = right; 
        }

        return result;
    }
};