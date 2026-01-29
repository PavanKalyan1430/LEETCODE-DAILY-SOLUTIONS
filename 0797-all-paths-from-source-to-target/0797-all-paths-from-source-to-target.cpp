
void DFS(vector<vector<int>>&adjlist, int node , int dest ,vector<int>&temp, vector<vector<int>>&result){
    
    
    temp.push_back(node);

    if (node == dest){
        result.push_back(temp);
        return; 
    }
    
    
    for (auto neighbour : adjlist[node]){

            DFS(adjlist , neighbour , dest , temp, result);
            if (temp.size() > 0) temp.pop_back();
            //else cout<<"no"<<" ";
        
    }
    
    return;
    
    
}


class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& adjlist) {
         
        int n = adjlist.size();
        vector<vector<int>> result;
        vector<int> temp;
      
        DFS(adjlist , 0 , n-1, temp, result);
        
        return result;
        
        
    }
};




