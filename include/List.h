namespace list
{
	struct Node
	{
		int data;
		Node *next = nullptr;
	};
	Node *root = new Node;
	class List
	{
		void add(int data, Node *&node)
		{
			node = new Node;
			node->data = data;
			node->next = nullptr;
		}

	public:
		void add_setter(int data)
		{
			add(data, root->next);
		}
	};
}
