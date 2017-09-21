template <class Item>
class stack
{
	private:
	struct node
	{
		Item item;
		node* next;
		node(Item x, node* t)
		{
			item = x;
			next = t;
		}
	};
	typedef node *link;
	link head;
	public:
	stack(int)
	{ head = 0; }
	int empty() const
	{
		return head == 0;
	}
	void push(Item x)
	{
		head = new node(x, head);
	}
	Item pop()
	{
		Item v = head->item;
		link t = head->next;
		delete head;
		head = t;
		return v;
	}
};
