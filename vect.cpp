#include <iostream>
#include<vector>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	vector<int> arr;
	for(int i =0;i<num;i++)
	{   
		int temp;
		cin >>temp;
		arr.push_back(temp); 
	}
}