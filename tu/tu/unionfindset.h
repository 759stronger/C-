#pragma once
#include <vector>
#include <map>

//���鼯

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
//	vector<T> _a;  //�������
//	map<T,int> _indexMap;   //���ұ��
//};


//���鼯ģ��ʵ��
template<class T>
class UnionFindSet
{
public:
	UnionFindSet(size_t n)
		:_ufs(n, -1)
	{


	}

	void Union(int x1, int x2) //�ϲ�����
	{
		int r1 = FindRoot(x1);
		int r2 = FindRoot(x2);

		if (r1 == r2)
			return;

		if (r1 > r2)//û�й涨��С�ĺϲ���Ļ��Ǵ�ϲ�С
		{
			swap(r1, r2);
		}

		_ufs[r1] += _ufs[r2];  
		_ufs[r2] = r1;

	}

	int FindRoot(int x) //�����ĸ�
	{
		int root = x;
		while (_ufs[root] >= 0)
		{
			root = _ufs[root];
		}
		return root;
	}

	bool Inset(int x1. int x2)  //�ڲ���һ������
	{
		return FindRoot(x1) == FindRoot(x2);
	}

	size_t Setsize() //�м����������м���
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