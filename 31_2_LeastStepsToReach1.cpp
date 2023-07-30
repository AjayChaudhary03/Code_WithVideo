/*

Given a number n, count the minimum steps to reduce n to 1 such that at each step you may

	reduce n to n/2 if n is divisible by 2
	or reduce n to n/3 if n is divisible by 3
	or reduce n to n-1 by decrementing n by 1

Example :
	Input : n = 10
	Output : 3

	Input : 6
	Output : 2

*/
#include<iostream>
#include<climits>
using namespace std;
int minStepsToReachOne(int n){
	if(n==1)
		return 0;

	int DivBy2    = INT_MAX; 
	int DivBy3    = INT_MAX;
	int ReduceBy1 = INT_MAX; 
	// #option-1 -- i can divide by n by 2
		if(n%2==0)	
			DivBy2 = minStepsToReachOne(n/2);
	// #option-2 -- i can divide by n by 3
		if(n%3==0)	
			DivBy3 = minStepsToReachOne(n/3);
	// #option-3 -- i can subtract '1' from n 
		ReduceBy1 = minStepsToReachOne(n-1);

		int min_Steps_here = min(DivBy2,min(DivBy3,ReduceBy1));
		int reducedNumber  = INT_MAX;
		
		if(min_Steps_here == DivBy2){
			reducedNumber = n/2;
		}else if(min_Steps_here == DivBy3){
			reducedNumber = n/2;
		}else{
			reducedNumber = n-1;
		}
		
		cout << "Path taken :: " << reducedNumber;
		return 1+min_Steps_here;
	
}

int main(){

	int n = 10;
	cout << endl << "Min number of steps required to reduced " << n << " to 1 are :" << minStepsToReachOne(n);



	return 0;
}