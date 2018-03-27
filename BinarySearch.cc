#include <iostream>
#include <vector>
using namespace std;

int BinarySearchFind(vector<int>& L, int target)
{
	
	if(L.size() <= 0)
		return -1;
	if(L.size() == 1)
		return L[0] == target? 0: -1;

	int res = -1;
	int left = 0;
	int right = L.size() - 1;
	
	while(left <= right)
	{
		int mid = (left + right) >> 1;
		if(L[mid] == target)
		{
			res = mid;
			break;
		}
		if(L[mid] > target)
		{
			right = mid - 1;
		}
		else
			left = mid + 1;

	}

	return res;
}

int main()
{
	vector<int> L = {1,2};
	int target = 2;
	cout << BinarySearchFind(L, target) << "\n";
}
