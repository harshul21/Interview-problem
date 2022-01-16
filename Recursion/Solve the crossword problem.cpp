//Youtube video Link:-https://www.youtube.com/watch?v=fUAZS-sdP2Q&list=PL-Jc9J83PIiE-181crLG1xSIWhTGKFiMY&index=10
//How to solve crossword puzzle using recursion
bool placewordHorizontally(vector<vector<char>> arr,string word,int i,int j){
    bool weplaced[word.length()];
    for(int jj=0;jj<word.length();jj++){
        if(arr[i][j+jj]=='-'){
            arr[i][j+jj]=word[jj];
            weplaced[jj]=true;
        }
    }
    return weplaced;
}

void unplaceHorizontally(vector<vector<char>> arr,vector<int> wepalced,int i,int j){
    for(int jj=0;jj<arr[0].size();jj++){
        if(weplaced[jj]==true){
            arr[i][j+jj]='-'
        }
    }
}

bool placewordVertically(vector<vector<char>> arr,string word,int i,int j){
    bool weplaced[word.length()];
    for(int ii=0;ii<word.length();ii++){
        if(arr[i+ii][j]=='-'){
            arr[i+ii][j]=word[ii];
            weplaced[ii]=true;
        }
    }
    return weplaced;
}

void unplaceVertically(vector<vector<char>> arr,vector<int> wepalced,int i,int j){
    for(int ii=0;ii<arr[0].size();ii++){
        if(weplaced[ii]==true){
            arr[i+ii][j]='-';
        }
    }
}
bool canPlacewordHorizontally(vector<vector<char>> arr,vector<string> word,int i,int j){
    if(j-1>=0 andf arr[i][j-1]!='+'){
        return false;
    }
    else if(j+word.length()<=arr[0].size() and arr[i][j+word.length()]!='+'){
        return false;
    }
    else{
        for(int jj=0;jj<word.length();jj++){
            if(j+jj>=arr[0].size()){
                return false;
            }
            if(arr[i][j+jj]=='-' or arr[i][j+jj]==word[jj]){
                continue;
            }
            else{
                return false;
            }
        }
    }
    return true;
}

bool canPlacewordVertically(vector<vector<char>> arr,vector<string> word,int i,int j){
    if(i-1>=0 andf arr[i-1][j]!='+'){
        return false;
    }
    else if(i+word.length()<=arr.size() and arr[i+word.length()][j]!='+'){
        return false;
    }
    else{
        for(int ii=0;ii<word.length();ii++){
            if(i+ii>=arr.size()){
                return false;
            }
            if(arr[i+ii][j]=='-' or arr[i+ii][j]==word[ii]){
                continue;
            }
            else{
                return false;
            }
        }
    }
    return true;
}
void Solution(vector<vector<char>> arr, vector<string> words, int idx){

    string word=words[idx];
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            if(arr[i][j]=='-' or arr[i][j]==word[0]){
                if(canPlacewordHorizontally(arr,word,i,j)){
                    vector<int> weplaced=placewordHorizontally(arr,word,i,j);
                    solution(arr,words,idx+1);
                    unplaceHorizontally(arr,weplaced,i,j);
                }

                if(canPlacewordVertically(arr,word,i,j)){
                    vector<int> weplaced=placewordVertically(arr,word,i,j);
                    solution(arr,words,idx+1);
                    unplaceVertically(arr,weplaced,i,j);
                }
            }
        }
    }
}
