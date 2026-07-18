/*
Question ===>

"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.
*/

//Question expalnation ==> checking the array if  element is greater than or equal to arr[k] and element is greater than 0 ,that element is selected to next round.

//constraints==> n=1 to 50;k<=n;

//<===code===>

#include<iostream>
using namespace std;
 
int main(){
	int n,k;
	cin>>n>>k;                  //getting input n and k
	int arr[n];
	for(int i=0;i<n;i++){     // getting array values
		cin>>arr[i];
	}
	int nxtround=0;
	for(int i=0;i<n;i++){          
		if(arr[k-1]==0){          // if kth element is 0 ,then we need to take the elements greater than 0
			if(arr[i]>=1){
				nxtround++;
			}
		}
		else if(arr[i]>=arr[k-1])          //otherwise element should greater than or equal to kth element
		nxtround++;
	}
	cout<<nxtround<<endl;
}
