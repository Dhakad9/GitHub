#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class linked_list
{
private:
    node *first,*second;
public:
    linked_list()
    {
        first = NULL;
        second = NULL;
    }
    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;
        if(first == NULL)
        {
            first = tmp;
            second = tmp;
        }
                else
        {
            second->next = tmp;
            second = second->next;
        }
    }
    node* gethead()
    {
        return first;
    }
    static void display(node *first)
    {
        if(first == NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << first->data << endl;
            display(first->next);
        }
    }
static void concatenate(node *a,node *b)
    {
        if( a != NULL && b!= NULL )
        {
            if (a->next == NULL)
                a->next = b;
            else
                concatenate(a->next,b);
        }
        else
        {
            cout << "Either a or b is NULL\n";
        }
    }

    void front(int n)
    {
        node *tmp = new node;
        tmp -> data = n;
        tmp -> next = first;
        first = tmp;
    }

    void after(node *a, int value)
    {
        node* p = new node;
        p->data = value;
        p->next = a->next;
        a->next = p;
    }
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.front(3);
    linked_list::display(a.gethead());
    return 0;
}
