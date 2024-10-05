#pragma once
#include <vector>
#include <map>

//并查集

//template<class T>
//class UnionFindSet
//{
//public:
//	UnionFindSet(const T* a, size_t n)
//	{
//		for (size_t i = 0; i < n; ++i)
//		{
//			_a.push_back(a[i]);
//			_indexMap[a[i]] = i;
//		}
//	}
//
//private:
//	vector<T> _a;  //编号找人
//	map<T,int> _indexMap;   //人找编号
//};


//并查集模拟实现
template<class T>
class UnionFindSet
{
public:
	UnionFindSet(size_t n)
		:_ufs(n, -1)
	{


	}

	void Union(int x1, int x2) //合并集合
	{
		int r1 = FindRoot(x1);
		int r2 = FindRoot(x2);

		if (r1 == r2)
			return;

		if (r1 > r2)//没有规定是小的合并大的还是大合并小
		{
			swap(r1, r2);
		}

		_ufs[r1] += _ufs[r2];  
		_ufs[r2] = r1;

	}

	int FindRoot(int x) //找他的根
	{
		int root = x;
		while (_ufs[root] >= 0)
		{
			root = _ufs[root];
		}
		return root;
	}

	bool Inset(int x1. int x2)  //在不在一个集合
	{
		return FindRoot(x1) == FindRoot(x2);
	}

	size_t Setsize() //有几个负数就有几个
	{
		size_t size = 0;
		for (size_t i = 0; i < _ufs.size(); i++)
		{
			if (_ufs[i] < 0)
			{
				size++;
			}
		}
		return size;
	}

private:
	vector<int> _ufs;
};


class Solution 
{
public:
	int  findcirclenum(vector<vector<int>>& isConnected)
	{
		UnionFindSet ufs(isConnected.size());

		for (size_t i = 0; i < isConnected.size(); i++)
		{
			for(size_t j = 0; j<is)
		}

	}

};