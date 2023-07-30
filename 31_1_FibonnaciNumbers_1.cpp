/*Given a number 'n', find the nth fibonnaci number*/

#include<iostream>
using namespace std;
int get_Nth_FibonnaciNumber(int n){
	
	if(n==0||n==1){
		return n;
	}else{
		return get_Nth_FibonnaciNumber(n-1) + get_Nth_FibonnaciNumber(n-2);
	}
	
	return -1;
}
int main(){

	int n = 7;
	cout << endl << n << "th Fibonacci Number is :" << get_Nth_FibonnaciNumber(n);
	return 0;
}