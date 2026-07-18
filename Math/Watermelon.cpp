/*
Question==>One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.
*/

//question explanation ==> we need to divide the given weight w into two halves and return true if both halves are even,false otherwise.
//constraint ==> weight=0 to 100 (inclusive)

//<===code===>

#include<iostream>
using namespace std;
 
int main(){
    int weight;
    cin>>weight;                        // getting input
    
    if(weight!=2 && weight%2==0){       // idea==>if the weight is even and it not equal to 2 ==> true,else it odd then we can't divide it into two even halves ==>false 
        cout<<"YES"<<endl;
    }
    else{                              //for weight =2 it only divides the halves into odd number ==>false
        cout<<"NO"<<endl;
    }
}


