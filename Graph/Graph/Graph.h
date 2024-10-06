#pragma once
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <functional>
#include "UnionFindSet.h"

namespace matrix   //矩阵的版本
{
	//V顶点  W边  di是否有向
	template<class V, class W, W MAX_W = INT_MAX,  bool Direction = false>
	class Graph
	{
		typedef Graph<V, W, MAX_W, Direction> Self;
	public:
		Graph() = default;
		//图的创建
		//1.IO输入 --不方便测试 除非oj
		//2.图结构关系写到文件 读取文件
		//3.手动添加边

		Graph(const V* a, size_t n)
		{
			_vertexs.reserve(n);  //
			for (size_t i = 0; i < n; i++)
			{
				_vertexs.push_back(a[i]); //存入顶点
				_indexMap[a[i]] = i;  //方便顶点名字找下标
			}

			_matrix.resize(n);
			for (size_t i = 0; i < _matrix.size(); i++)
			{
				_matrix[i].resize(n, MAX_W); //n*n

			}

		}

		size_t GetVertexIndex(const V& v)  //确定顶点的下标
		{
			auto it = _indexMap.find(v);  //有顶点 找下标
			if (it != _indexMap.end())
			{
				return it->second;
			}
			else
			{
				//assert(false);
				throw invalid_argument("顶点不存在");
				return -1;
			}
		}

		void _AddEdge(size_t srci, size_t dsti, const W& w)  //添加边 权值
		{

			_matrix[srci][dsti] = w;
			//无向图
			if (Direction == false)
			{
				_matrix[dsti][srci] = w;
			}

		}

		void AddEdge(const V& src, const V& dst, const W& w)  //添加边 权值
		{
			size_t srci = GetVertexIndex(src);
			size_t dsti = GetVertexIndex(dst);

			_AddEdge(srci, dsti, w);

		}

		void Print()
		{
			//顶点
			for (size_t i = 0; i < _vertexs.size(); i++)
			{
				cout << "[" << i << "]" << "->" << _vertexs[i] << endl;
			}
			cout << endl;

			//矩阵
			//打印横下标
			cout << "  ";
			for (size_t i = 0; i < _vertexs.size(); ++i)
			{
				//cout << i << " ";
				printf("%4d", i);
			}
			cout << endl;
			for (size_t i = 0; i < _matrix.size(); i++)
			{
				cout << i << " "; //列下标
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

		void BFS(const V& src) //广度遍历
		{
			size_t srci = GetVertexIndex(src);
			
			queue<int> q;
			q.push(srci); //队列
			vector<bool> visited(_vertexs.size(), false); //标记数组
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

					//加入邻接的点
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



		void _DFS(size_t srci, vector<bool>& visited)//深度遍历
		{
			cout << srci << ":" << _vertexs[srci] << endl;
			visited[srci] = true;

			//找相邻没有访问的点 深度访问

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
			vector<bool> visited(_vertexs.size(), false); //标记数组

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

		W Kruskal(Self& minTree)//以边为最小生成树
		{
			size_t n = _vertexs.size();
			//最小生成树要初始化
			minTree._vertexs = _vertexs;
			minTree._indexMap = _indexMap;
			minTree._matrix.resize(n);
			for (size_t i = 0; i < n; i++)
			{
				minTree._matrix[i].resize(n , MAX_W);
			}

			//排序 优先级队列
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

			//选出n-1条边
			int size = 0;
			W totalW = W();
			UnionFindSet ufs(n);
			while (!minq.empty())
			{
				Edge min = minq.top();//选出最小的
				minq.pop();

				if (!ufs.InSet(min._srci, min._dsti))
				{
					cout << _vertexs[min._srci] << "->" << _vertexs[min._dsti] << ":" <<min._w << endl;
					minTree._AddEdge(min._srci, min._dsti,min._w); //添加最小边
					ufs.Union(min._srci, min._dsti);//添加到并查集
					size++;
					totalW += min._w;
				}
				else
				{
					cout << "构成环:";
					cout << _vertexs[min._srci] << "->" << _vertexs[min._dsti] << ":" << min._w << endl;
				}

			}
			
			if (size == n - 1)//找到
			{
				return totalW;
			}
			else
			{
				return W();
			}
		}
	private:
		vector<V> _vertexs; //顶点集合
		map<V, int> _indexMap; //顶点映射下标
		vector<vector<W>>  _matrix; //邻接矩阵
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
		string a[] = { "张三", "李四", "王五", "赵六","周七"};
		Graph<string, int> g1(a, sizeof(a)/sizeof(string));
		g1.AddEdge("张三", "李四", 100);
		g1.AddEdge("张三", "王五", 200);
		g1.AddEdge("王五", "赵六", 30);
		g1.AddEdge("王五", "周七", 30);
		g1.Print();
		g1.BFS("张三");
		cout << endl;
		g1.DFS("张三");
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













namespace link_table   //邻接表的版本
{
	template<class W>
	struct Edge 
	{
		int _dsti; // 目标点下标
		int _srci;
		W _w; // 权值
		Edge<W>* _next;//链接指针
		Edge(int dsti , const W& w)
			:_dsti(dsti)
			,_w(w)
			,_next(nullptr)
		{}
	};
	//V顶点  W边  di是否有向
	template<class V, class W , bool Direction = false>
	class Graph
	{
		typedef Edge<W> Edge;

	public:
		//图的创建
		//1.IO输入 --不方便测试 除非oj
		//2.图结构关系写到文件 读取文件
		//3.手动添加边

		Graph(const V* a, size_t n)
		{
			_vertexs.reserve(n);  //
			for (size_t i = 0; i < n; i++)
			{
				_vertexs.push_back(a[i]); //存入顶点
				_indexMap[a[i]] = i;  //方便顶点名字找下标
			}

			_tables.resize(n, nullptr);
		}

		size_t GetVertexIndex(const V& v)  //确定顶点的下标
		{
			auto it = _indexMap.find(v);  //有顶点 找下标
			if (it != _indexMap.end())
			{
				return it->second;
			}
			else
			{
				//assert(false);
				throw invalid_argument("顶点不存在");
				return -1;
			}
		}

		void AddEdge(const V& src, const V& dst, const W& w)  //添加边 权值
		{
			size_t srci = GetVertexIndex(src);
			size_t dsti = GetVertexIndex(dst);

			//1->2
			Edge* eg = new Edge(dsti,w); //添加一条边
			eg->_next = _tables[srci];
			_tables[srci] = eg;


			//无向图 就添加2->1
			if (Direction == false)
			{
				Edge* eg = new Edge(srci, w); //添加一条边
				eg->_next = _tables[dsti];
				_tables[dsti] = eg;
			}
		}

		void Print()
		{
			//顶点
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
		vector<V> _vertexs; //顶点集合
		map<V, int> _indexMap; //顶点映射下标
		vector<Edge*>  _tables; //邻接表
	};


	void TestGraph1()
	{
		string a[] = { "张三", "李四", "王五", "赵六" };
		Graph<string, int ,true> g1(a, 4);
		g1.AddEdge("张三", "李四", 100);
		g1.AddEdge("张三", "王五", 200);
		g1.AddEdge("王五", "赵六", 30);
		g1.Print();
	}
}



