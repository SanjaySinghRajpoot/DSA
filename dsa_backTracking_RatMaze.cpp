#include <bits/stdc++.h>

using namespace std;

boolean maze[n][n], sol[n][n];

boolean solveMaze()
{
	if(solveMazeRec(0,0) == false)
	   return false;
	else{
		printMatrix(sol);
		return true;  
	}
}

boolean isSafe(int i, int j){
	
	return(i < N && j < N && maze[i][j] == 1);
}

boolean solveMazeRec(int i, int j){
	if(i == N-1 && j == N-1){
		sol[i][j] = 1;
		return true;
	}

	if(isSafe(i,j) == true){
		
		sol[i][j] = 1;  // let this cell be a solution          

		if(solveMazeRec(i+1, j) == true) return true;       // check 1
		else if(solveMazeRec(i, j+1) == true) return true;  // check 2
        
        sol[i][j]=0;   // else backtrack to false
	}

	return false;
}




int main(){



}