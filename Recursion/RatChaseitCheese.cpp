#include <iostream>
using namespace std;
void printPath(char path[][10], int m, int n){
    for(int i =0; i<m; i++){
        for(int j=0; j<n; j++){

        }
        cout<<endl;
    }
    

}
void f(char maze[][10], char path[][10], int m, int n, int i, int j){
    //base case
    if(i==m-1 and j==n-1){
        if(maze[i][j] ='X'){
            return;
        }
        // f(path, m, n);
        return;
    }
    //recursive case
}

int main()
{
    char maze[][10] = {"0000",
                       "00X0",
                       "000X",
                       "0X00"};

    char path[][10] = {"0000",
                       "00X0",
                       "000X",
                       "0X00"};
    int n = 4;
    int m = 4;

    f(maze, path, m, n, 0, 0);

    return 0;
}