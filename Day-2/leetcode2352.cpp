// equal row and column pairs

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        map<vector<int>, int> row;
        map<vector<int>, int> col;
        int n = grid.size();
        
         for(int i=0;i<n;i++){   // To check the occurences of rows 
            row[grid[i]]++;
        }
        
        for(int i=0;i<n;i++){   // to check the occcurence of columns
            vector<int>temp;
            for(int j=0;j<n;j++){
                temp.push_back(grid[j][i]);
            }
            
            col[temp]++;
        }
        
        int count = 0;
        
        for(auto &i: row){
            if(col.find(i.first)!=col.end()){
                count += (i.second)*col[i.first];
            }
        }
        
        return count;      
    }
};