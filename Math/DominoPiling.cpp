/*  <=== question ===>
You are given a rectangular board of M × N squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares. You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:

1. Each domino completely covers two squares.

2. No two dominoes overlap.

3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes, which can be placed under these restrictions.
*/

// question explanation ===> given m x n square board .we need to place domino piece each piece size==2 squares. find maximum domino pieces placed in the board without overlapping the domino pieces.

//constraints ==> m=1 to 16; n>=m;

//<===code===>

#include<iostream>
using namespace std;
 
int main(){
    int m,n;
    cin>>m>>n;
    cout<<(m*n)/2<<"\n";    //since each piece occupies 2 squares ==>total squares divided by 2 will be the answer.
}


