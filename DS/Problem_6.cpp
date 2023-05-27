// Given two sorted linked lists, write a function to merge them into a single sorted linked list.
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
int data;
node *next;
};
node *SortedMerge(node *a, node *b)
{
node *result = NULL;
if (a == NULL)
return (b);
else if (b == NULL)
return (a);
if (a->data <= b->data)
{
result = a;
result->next = SortedMerge(a->next, b);
}
else
{
result = b;
result->next = SortedMerge(a, b->next);
}
return (result);
}
void push(node **head_ref, int new_data)
{
node *new_node = new node();
new_node->data = new_data;
new_node->next = (*head_ref);
(*head_ref) = new_node;
}
void printList(node *node)
{
while (node != NULL)
{
cout << node->data << " ";
node = node->next;
}
}
int main()
{
node *res = NULL;
node *a = NULL;
node *b = NULL;
push(&a, 15);
push(&a, 10);
push(&a, 5);
push(&b, 20);
push(&b, 3);
push(&b, 2);
res = SortedMerge(a, b);
cout << "Merged Linked List is: \n";
printList(res);
return 0;
}
