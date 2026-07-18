/*
Question====>

Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.
Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.
Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.
After how many full years will Limak become strictly larger (strictly heavier) than Bob?
*/

// question explanation ===> limak triples for a year and bob doubles for a year. to find the total year that limak is greater than bob

//constraints ==> a,b = 1 to 10;

//<====code=====>
#include<iostream>
using namespace std;
 
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=1;i<7;i++){            // by the constraints for the worst case it runs about 6 year.
		a*=3;
		b*=2;
		if(a>b){
			cout<<i<<"\n";            // if limak > bob prints year;
			break;
		}
	}
}
