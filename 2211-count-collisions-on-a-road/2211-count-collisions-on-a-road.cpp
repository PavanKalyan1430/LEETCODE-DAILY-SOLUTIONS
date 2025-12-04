class Solution {
public:
    int countCollisions(string s) {
        

        int coll = 0;
        int max_r = 0;
        int count = 0;


        for (int i=0; i<s.size(); i++){

            if (s[i] == 'R') {
                max_r +=1;
            }

            else if (s[i] == 'S'){
                coll = 1;

                count += (max_r);
                max_r = 0;
            }

            else if (s[i] == 'L' &&  (max_r !=0  || coll == 1)  ){

                coll = 1;

                if (max_r == 1){
                    count += 2;
                    max_r = 0;
                }

                else if (max_r > 1){
                    count += (max_r + 1);
                    max_r = 0;
                }

                else{
                    count += 1;
                    }

            }
        }

            return count;

        }

};