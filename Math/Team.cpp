/*
Question===>

One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems during programming contests. Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution.
*/

// question explanation ==> if two friends are sure about the solution, then they implement  the problem else they don't implement the solution.To find the number of problems they solved.

//constraints ===> problems=1 to 1000 (inclusive)

//<===code===>

#include<iostream>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int problem=0;
	for(int i=0;i<n;i++){
		int count=3;
		for(int i=0;i<3;i++){          //if count=3 is reduced to 1 or 0 then problems will increase by 1,else continue the iteration until all problems checked. 
			int val;
			cin>>val;
			if(val==1)
			count--;
		}
		if(count<=1){
			problem++;
		}
	}
	cout<<problem<<endl;
}
