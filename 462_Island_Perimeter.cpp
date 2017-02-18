//not good
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int result = 0;
        int row = 0, row_end = grid.size(); 
        int col = 0, col_end = grid[0].size();
        bool rowLandLeft = false;
        
        for(; col<col_end; col++){
            if((grid[row][col] == 1) ){
                if(!rowLandLeft){
                    rowLandLeft = true;
                    result = result+2;
                }else{
                    result++;
                }
            }else{//0
                if(rowLandLeft){
                    result++;
                    rowLandLeft = false;
                }
            }
            
        }
        
        
        for(row = 1; row<(row_end-1); row++){
            col_end = grid[row].size();
            rowLandLeft = false;
            for(col = 1; col<col_end; col++){
                if(grid[row][col] == 1){
                    if(!rowLandLeft){
                        result++;
                        rowLandLeft=true;
                        if(!(grid[row-1][col-1]))
                            
                        
                    }
                }
            }
            
        }
        
    }
};



class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int result = 0;
        int row_end = grid.size();
        int col_end;
        bool leftOnLand = false;
        int col_size_max = 0;
        
        for(int row = 0; row<row_end; row++){
            col_end = grid[row].size();
            if(col_end>col_size_max)  col_size_max = col_end;
            leftOnLand = false;
            
            for(int col = 0; col<col_end; col++){
                if(grid[row][col] == 1){
                    if(!leftOnLand){
                        result++;
                        leftOnLand = true;
                    }
                }else{
                    if(leftOnLand){
                        result++;
                        leftOnLand = false;
                    }
                }

            }
            if(grid[row][col_end-1])  result++;
            
            for(int col = 0; col<(col_size_max-col_end); col++){
                grid[row].push_back(0);
            }
        }
        
        bool upOnLand = false;
        int col=0;
        for(int col = 0; col<col_size_max; col++ ){
            upOnLand = false;
            for(int row = 0; row<row_end; row++){
                if(grid[row][col]){
                    if(!upOnLand){
                        result++;
                        upOnLand = true;
                    }
                }else{
                    if(upOnLand){
                        result++;
                        upOnLand = false;
                    }
                }
            }
            if(grid[row_end-1][col]) result++;
        }
        
        return result;
        
    }
    
};