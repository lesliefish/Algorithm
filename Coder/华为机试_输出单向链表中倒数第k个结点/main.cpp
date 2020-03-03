#include <iostream>
#include <vector>

using namespace std;

struct Node
{
	Node(int i) { val = i; }
	int val;
	Node* next;
};

int main()
{
	int nodeCount = 0;
	while (cin >> nodeCount)
	{
		vector<int> vc;
		Node* head = new Node(-1);
		head->next = nullptr;
		Node* pCurNode = head;

		vc.resize(nodeCount);
		for (size_t i = 0; i < nodeCount; i++)
		{
			cin >> vc[i];
		}

		for (size_t i = 0; i < vc.size(); i++)
		{
			Node* newNode = new Node(vc[i]);
			pCurNode->next = newNode;
			newNode->next = nullptr;
			pCurNode = newNode;
		}

		int k;
		cin >> k;
		Node* p = head->next;
		Node* q = head->next;
		if (head->next)
		{
			while (--k)
			{
				q = q->next;
			}
			while (q->next)
			{
				p = p->next;
				q = q->next;
			}

			cout << p->val << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}

	return 0;
}