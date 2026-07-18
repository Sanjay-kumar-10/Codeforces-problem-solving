/*
Question====>

The classic programming language of Bitland is Bit++. This language is so peculiar and complicated.

The language is that peculiar as it has exactly one variable, called x. Also, there are two operations:

Operation ++ increases the value of variable x by 1.
Operation -- decreases the value of variable x by 1.
A statement in language Bit++ is a sequence, consisting of exactly one operation and one variable x. The statement is written without spaces, that is, it can only contain characters "+",
"-", "X". Executing a statement means applying the operation it contains.

A programme in Bit++ is a sequence of statements, each of them needs to be executed. Executing a programme means executing all the statements it contains.

You're given a programme in language Bit++. The initial value of x is 0. Execute the programme and find its final value (the value of the variable when this programme is executed).
*/

//question explantion ===> if the operation is ++ ==> x+1,if operation is -- ==> x-1; return final value of x;

//constraints ==> n = 1 to 150(inclusive)

//<===code===>
#include<iostream>
using namespace std;

int main(){
    int x=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){              // getting n lines as n string .
       string s;
       cin>>s;
       if(s[0]=='+'||s[2]=='+'){        // checking if operation is ++ ==> increase by 1.
       	x++;
	   }
	   else{
	   	x--;                               // -- ==> decrease by 1.
	   }
    }
    cout<<x<<"\n";
}
