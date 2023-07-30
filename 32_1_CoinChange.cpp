/*

You are given an integer array coins representing coins of different denominations and an integer amount 
representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. 

You may assume that you have an infinite number of each kind of coin.

Don't forget to handle the case if that amount of money cannot be made up by any combination of the coins.

Example 1:

	Input: coins = [1,2,5], amount = 11
	Output: 3

	Input: coins = [3, 6], amount = 13
	Output: no way

*/
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int CoinsRequired(vector<int>coins, int amount){
	int n = coins.size();
	if (amount==0)
		return 0;
	if (amount < 0)
		return -1;
	
	for(int i=0;i<=n;i++){

		//using ith coin
		int left_amount = amount - coins.at(1);

		int required = 1 + CoinsRequired(coins,left_amount);

		int required = CoinsRequired(coins,amount);

	}

	return;

}

	 
int main(){
	vector<int> coins = {1,2,5};
	int amount =  11;
	int n = CoinsRequired(coins,amount);
	if (n<0)
		cout << "NO WAY";
	else	
		cout << n;

	return 0;
}