#include <iostream>
using namespace std;
int f(char maze[][10], int m, int n, int i, int j)
{
    // base case
    if(i ==m-1 and j ==n-1){
        if(maze[i][j] =='X'){
        return 0;
    }
        return 1;
    }
    if(maze[i][j] =='X'){
        return 0;
    }
    // recursive case
    if(j == n-1){
        //last col
        return f(maze, m, n, i+1, j);
    }
    if(i ==m-1){
        return f(maze, m, n, i, j+1);
    }
    return f(maze, m, n, i+1, j) + f(maze, m ,n , i, j+1);
}

int main()
{
    char maze[][10] = {"0000",
                       "00X0",
                       "000X",
                       "0X00"};
    int n = 4;
    int m = 4;

    cout<<f(maze, m, n, 0, 0) ;

    return 0;
}