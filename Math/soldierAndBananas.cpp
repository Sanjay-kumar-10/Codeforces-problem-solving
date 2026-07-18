/*
Question ===>
A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?
*/

// question explanation ===> to buy w banana the price will be i.k =first banana + i+1.k =second banana + ...+ w.k =last banana .n be initial dollars to find how many dollars still need to buy.

// constraints ===> k,w = 1 to 1000 and n = 1 to 1000000000(10^9-one billion)

//<===code===>
#include<iostream>
using namespace std;
 
int main(){
	int k,n,w;
	cin>>k>>n>>w;
	int total=0;
	for(int i=1;i<=w;i++){
		total+=i*k;                    // taking total price of w bananas
	}
	if(total<=n){                    // not borrow ==> 0
		cout<<0<<endl;
	}
	else{
		cout<<total-n<<endl;            // borrow ==> total price - given dollar
	}
}
