#pragma once
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <functional>
#include "UnionFindSet.h"

namespace matrix   //����İ汾
{
	//V����  W��  di�Ƿ�����
	template<class V, class W, W MAX_W = INT_MAX,  bool Direction = false>
	class Graph
	{
		typedef Graph<V, W, MAX_W, Direction> Self;
	public:
		Graph() = default;
		//ͼ�Ĵ���
		//1.IO���� --��������� ����oj
		//2.ͼ�ṹ��ϵд���ļ� ��ȡ�ļ�
		//3.�ֶ���ӱ�

		Graph(const V* a, size_t n)
		{
			_vertexs.reserve(n);  //
			for (size_t i = 0; i < n; i++)
			{
				_vertexs.push_back(a[i]); //���붥��
				_indexMap[a[i]] = i;  //���㶥���������±�
			}

			_matrix.resize(n);
			for (size_t i = 0; i < _matrix.size(); i++)
			{
				_matrix[i].resize(n, MAX_W); //n*n

			}

		}

		size_t GetVertexIndex(const V& v)  //ȷ��������±�
		{
			auto it = _indexMap.find(v);  //�ж��� ���±�
			if (it != _indexMap.end())
			{
				return it->second;
			}
			else
			{
				//assert(false);
				throw invalid_argument("���㲻����");
				return -1;
			}
		}

		void _AddEdge(size_t srci, size_t dsti, const W& w)  //��ӱ� Ȩֵ
		{

			_matrix[srci][dsti] = w;
			//����ͼ
			if (Direction == false)
			{
				_matrix[dsti][srci] = w;
			}

		}

		void AddEdge(const V& src, const V& dst, const W& w)  //��ӱ� Ȩֵ
		{
			size_t srci = GetVertexIndex(src);
			size_t dsti = GetVertexIndex(dst);

			_AddEdge(srci, dsti, w);

		}

		void Print()
		{
			//����
			for (size_t i = 0; i < _vertexs.size(); i++)
			{
				cout << "[" << i << "]" << "->" << _vertexs[i] << endl;
			}
			cout << endl;

			//����
			//��ӡ���±�
			cout << "  ";
			for (size_t i = 0; i < _vertexs.size(); ++i)
			{
				//cout << i << " ";
				printf("%4d", i);
			}
			cout << endl;
			for (size_t i = 0; i < _matrix.size(); i++)
			{
				cout << i << " "; //���±�
				for (size_t j = 0; j < _matrix[i].size(); j++)
				{
					//cout << _matrix[i][j] << " ";
					if (_matrix[i][j] == MAX_W)
					{
						//cout << "* ";
						printf("%4c", '*');
					}
					else
					{
						//cout << _matrix[i][j] << " "; 
						printf("%4d", _matrix[i][j]);
					}
				}
				cout << endl;
			}
		}

		void BFS(const V& src) //��ȱ���
		{
			size_t srci = GetVertexIndex(src);
			
			queue<int> q;
			q.push(srci); //����
			vector<bool> visited(_vertexs.size(), false); //�������
			visited[srci] = true;

			size_t n = _vertexs.size();
			int levelsize = 1;
			while (!q.empty())
			{
				for (int i = 0; i < levelsize; i++)
				{
					int front = q.front();
					q.pop();
					cout << front << ":" << _vertexs[front] <<" ";

					//�����ڽӵĵ�
					for (size_t i = 0; i < n; i++)
					{
						if (_matrix[front][i] != MAX_W && visited[i] != true)
						{
							q.push(i);
							visited[i] = true;
						}
					}
				}
				cout << endl;
				levelsize = q.size();
			}
		}



		void _DFS(size_t srci, vector<bool>& visited)//��ȱ���
		{
			cout << srci << ":" << _vertexs[srci] << endl;
			visited[srci] = true;

			//������û�з��ʵĵ� ��ȷ���

			for (size_t i = 0; i < _vertexs.size(); i++)
			{
				if (_matrix[srci][i] != MAX_W && visited[i] != true)
				{
					_DFS(i, visited);
				}
			}
		}
		void DFS(const V& src)
		{
			size_t srci = GetVertexIndex(src);
			vector<bool> visited(_vertexs.size(), false); //�������

			_DFS(srci, visited);
		}

		struct Edge
		{
			size_t _srci;
			size_t _dsti;
			 W _w;

			Edge(size_t srci, size_t dsti, const W& w)
				:_srci(srci)
				, _dsti(dsti)
				, _w(w)
			{
			}

			bool operator>( const Edge& e) const
			{
				return _w > e._w;
			}
		};

		W Kruskal(Self& minTree)//�Ա�Ϊ��С������
		{
			size_t n = _vertexs.size();
			//��С������Ҫ��ʼ��
			minTree._vertexs = _vertexs;
			minTree._indexMap = _indexMap;
			minTree._matrix.resize(n);
			for (size_t i = 0; i < n; i++)
			{
				minTree._matrix[i].resize(n , MAX_W);
			}

			//���� ���ȼ�����
			priority_queue<Edge ,vector<Edge> , greater<Edge>> minq;
			for (size_t i = 0; i < n; i++)
			{
				for (size_t j = 0; j < n; j++)
				{
					if (_matrix[i][j] != MAX_W)
					{
						minq.push(Edge(i, j, _matrix[i][j]));
					}
				}
			}

			//ѡ��n-1����
			int size = 0;
			W totalW = W();
			UnionFindSet ufs(n);
			while (!minq.empty())
			{
				Edge min = minq.top();//ѡ����С��
				minq.pop();

				if (!ufs.InSet(min._srci, min._dsti))
				{
					cout << _vertexs[min._srci] << "->" << _vertexs[min._dsti] << ":" <<min._w << endl;
					minTree._AddEdge(min._srci, min._dsti,min._w); //�����С��
					ufs.Union(min._srci, min._dsti);//��ӵ����鼯
					size++;
					totalW += min._w;
				}
				else
				{
					cout << "���ɻ�:";
					cout << _vertexs[min._srci] << "->" << _vertexs[min._dsti] << ":" << min._w << endl;
				}

			}
			
			if (size == n - 1)//�ҵ�
			{
				return totalW;
			}
			else
			{
				return W();
			}
		}
	private:
		vector<V> _vertexs; //���㼯��
		map<V, int> _indexMap; //����ӳ���±�
		vector<vector<W>>  _matrix; //�ڽӾ���
	};


	/*void TestGraph()
	{
		Graph<char, int, INT_MAX, true> g("0123", 4);
		g.AddEdge('0', '1', 1);
		g.AddEdge('0', '3', 4);
		g.AddEdge('1', '3', 2);
		g.AddEdge('1', '2', 9);
		g.AddEdge('2', '3', 8);
		g.AddEdge('2', '1', 5);
		g.AddEdge('2', '0', 3);
		g.AddEdge('3', '2', 6);
		g.Print();
	}

	void TestBDF1()
	{
		string a[] = { "����", "����", "����", "����","����"};
		Graph<string, int> g1(a, sizeof(a)/sizeof(string));
		g1.AddEdge("����", "����", 100);
		g1.AddEdge("����", "����", 200);
		g1.AddEdge("����", "����", 30);
		g1.AddEdge("����", "����", 30);
		g1.Print();
		g1.BFS("����");
		cout << endl;
		g1.DFS("����");
	}*/

	void TestGraphMinTree()
	{
		const char* str = "abcdefghi";
		Graph<char, int> g(str, strlen(str));
		g.AddEdge('a', 'b', 4);
		g.AddEdge('a', 'h', 8);
		//g.AddEdge('a', 'h', 9);
		g.AddEdge('b', 'c', 8);
		g.AddEdge('b', 'h', 11);
		g.AddEdge('c', 'i', 2);
		g.AddEdge('c', 'f', 4);
		g.AddEdge('c', 'd', 7);
		g.AddEdge('d', 'f', 14);
		g.AddEdge('d', 'e', 9);
		g.AddEdge('e', 'f', 10);
		g.AddEdge('f', 'g', 2);
		g.AddEdge('g', 'h', 1);
		g.AddEdge('g', 'i', 6);
		g.AddEdge('h', 'i', 7);

		Graph<char, int> kminTree;
		cout << "Kruskal:" << g.Kruskal(kminTree) << endl;
		kminTree.Print();

		/*Graph<char, int> pminTree;
		cout << "Prim:" << g.Prim(pminTree, 'a') << endl;
		pminTree.Print();*/
	}
}













namespace link_table   //�ڽӱ�İ汾
{
	template<class W>
	struct Edge 
	{
		int _dsti; // Ŀ����±�
		int _srci;
		W _w; // Ȩֵ
		Edge<W>* _next;//����ָ��
		Edge(int dsti , const W& w)
			:_dsti(dsti)
			,_w(w)
			,_next(nullptr)
		{}
	};
	//V����  W��  di�Ƿ�����
	template<class V, class W , bool Direction = false>
	class Graph
	{
		typedef Edge<W> Edge;

	public:
		//ͼ�Ĵ���
		//1.IO���� --��������� ����oj
		//2.ͼ�ṹ��ϵд���ļ� ��ȡ�ļ�
		//3.�ֶ���ӱ�

		Graph(const V* a, size_t n)
		{
			_vertexs.reserve(n);  //
			for (size_t i = 0; i < n; i++)
			{
				_vertexs.push_back(a[i]); //���붥��
				_indexMap[a[i]] = i;  //���㶥���������±�
			}

			_tables.resize(n, nullptr);
		}

		size_t GetVertexIndex(const V& v)  //ȷ��������±�
		{
			auto it = _indexMap.find(v);  //�ж��� ���±�
			if (it != _indexMap.end())
			{
				return it->second;
			}
			else
			{
				//assert(false);
				throw invalid_argument("���㲻����");
				return -1;
			}
		}

		void AddEdge(const V& src, const V& dst, const W& w)  //��ӱ� Ȩֵ
		{
			size_t srci = GetVertexIndex(src);
			size_t dsti = GetVertexIndex(dst);

			//1->2
			Edge* eg = new Edge(dsti,w); //���һ����
			eg->_next = _tables[srci];
			_tables[srci] = eg;


			//����ͼ �����2->1
			if (Direction == false)
			{
				Edge* eg = new Edge(srci, w); //���һ����
				eg->_next = _tables[dsti];
				_tables[dsti] = eg;
			}
		}

		void Print()
		{
			//����
			for (size_t i = 0; i < _vertexs.size(); i++)
			{
				cout << "[" << i << "]" << "-> " << _vertexs[i] << endl;
			}
			cout << endl;

			for (size_t i = 0; i < _tables.size(); i++)
			{
				//printf("[%d]->")
				cout << _vertexs[i] << "[" << i << "] -> " ;
				Edge* cur = _tables[i];
				while (cur)
				{
					//printf("[%d]->", cur->_dsti);
					cout << _vertexs[cur->_dsti] << "[" << cur->_dsti << "]"<<cur->_w<<" -> ";
					cur = cur->_next;
				}
				cout << "nullptr" <<endl;
			}
		}

	private:
		vector<V> _vertexs; //���㼯��
		map<V, int> _indexMap; //����ӳ���±�
		vector<Edge*>  _tables; //�ڽӱ�
	};


	void TestGraph1()
	{
		string a[] = { "����", "����", "����", "����" };
		Graph<string, int ,true> g1(a, 4);
		g1.AddEdge("����", "����", 100);
		g1.AddEdge("����", "����", 200);
		g1.AddEdge("����", "����", 30);
		g1.Print();
	}
}



