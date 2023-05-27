// Write a function to find the middle element of a linked list.
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
int data;
node *next;
};
class New_Node
{
public:
void pushNode(class node **head, int data)
{
class node *new_node = new node();
new_node->data = data;
new_node->next = *head;
*head = new_node;
}
};
int main()
{
int n;
cin >> n;
class node *head = NULL;
class New_Node *temp = new New_Node();
for (int i = 0; i < n; ++i)
{
int a;
cin >> a;
temp->pushNode(&head, a);
}
vector<int> v;
while (head != NULL)
{
v.push_back(head->data);
head = head->next;
}
cout << "Middle Value Of Linked List is : ";
cout << v[v.size() / 2] << endl;
return 0;
}
