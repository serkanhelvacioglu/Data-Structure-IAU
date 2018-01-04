#include<iostream>

using namespace std;

struct node
{
	int x;
	node *next;
};


void bastir(node * r)
{
	while (r != NULL) {
		cout << r->x << endl;
		r = r->next;
	}
}

void ekle(node *r, int x) //Sona ekle
{

	while (r->next != NULL)
	{
		r = r->next;
	}
	r->next = new node;
	r->next->x = x;
	r->next->next = NULL;
}

int main()
{

	node * newNode;
	newNode = new node;
	newNode->x = 5;
	newNode->next = NULL;
	node * iter;
	iter = newNode;

	for (int i = 1; i <= 5; i++)
	{
		ekle(newNode, i * 10);
		/*iter->next = new node;
		iter = iter->next;
		iter->x = i * 10;
		iter->next = NULL;*/


	}

	bastir(newNode);

	//node *iter = new node;
	for (int i = 0; i < 3; i++)
	{
		iter = iter->next;
	}
	node *temp = new node;
	temp->next = iter->next;
	iter->next = temp;
	temp->x = 100;

	bastir(newNode);
	system("Pause");
}
