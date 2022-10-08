#include <iostream>
#include <string>
using namespace std;
struct Node
{
int Sq_num;
Node* next;
};
void print_ordem(string msg, Node* head)
{
cout << msg;
Node* ptr = head;
while (ptr)

{
cout << ptr->Sq_num << " , ";
ptr = ptr->next;
}
cout <<endl;
}
void vaga(Node** head, int Sq_num)
{
Node* newNode = new Node();
newNode->Sq_num = Sq_num;
newNode->next = *head;
*head = newNode;
}
void inverter_posicao(Node* &head, int m, int n)
{
Node* prev = NULL;
Node* curr = head;
for (int i = 1; curr != NULL && i < m; i++)
{
prev = curr;
curr = curr->next;
}
Node* start = curr;
Node* end = NULL;
for (int i = 1; curr != NULL && i <= n - m + 1; i++)
{
Node* next = curr->next;
curr->next = end;
end = curr;
curr = next;
}
start->next = curr;
if (prev != NULL)
{
prev->next = end;
}
else
{
head = end;
}
}
int main()
{
int k = 2, p = 5;
Node* head = NULL;
for (int i = 7; i >= 1; i--)
{
vaga(&head, i);

}
print_ordem("Sequencia original: ", head);
inverter_posicao(head, k, p);
print_ordem("Sequencia apos reverter a posicao: ", head);
return 0;
}
