#include "Node.h"
#include <iostream>
#include <istream>
#include <ostream>
#include <fstream>
using namespace std;


class SymbolTable
{
public:
	static Node* root;
	static Node* curr;

	SymbolTable(){
		freopen("D:\\Compiler\\CMP\\Compiler\\Compiler\\SymbolTableOut.txt", "w", stdout);
		curr = new Node();
		curr->parent = NULL;
		root = curr;
	}


	void addNodeToCurr(){	
		Node* t = new Node();		
		t->prev = curr;
		curr->next = t;
		curr = curr->next;
	}


	

	Node* addVar(char* name){
		Node n = Node();
		n.parent = curr;
		n.name = name;
		return &n;
	}

	Node* addDatamem(char* name){
		Node n = Node();
		n.parent = curr;
		n.name = name;
		return &n;
	}

	Node* addParam(char* name){
		Node n = Node();
		n.parent = curr;
		n.name = name;
		return &n;
	}

	Node* addClass(char* name){
		Node n = Node();
		n.parent = curr;
		n.name = name;
		return &n;
	}

	Node* addFunc(char* name){
		Node n = Node();
		n.parent = curr;
		n.name = name;
		return &n;
	}


	void returnToParent(){
		curr = curr->parent;
	}

	Node* goInside(Node* t){
		curr = t;
	}
	

	void print(Node* t, int i=0){
		while (t!= NULL)
		{

		
			cout << i<< "-"<<t->type <<" : "<< t->name<<"\n";	

			switch (t->type)
			{
				case 'v':
					Node* tt = t->variables;
					while (tt != NULL)
					{
						cout << t->varType << " " << t->varVal<<"\n";
						tt = tt->next;
					}
					break;

				case 'c':
					cout << t->modifier << " " << t->inheretedFrom->name << "\n";

					print(t->variables, i + 1);

					print(t->functions, i + 1);

					break;

				case 'f':

					print(t->variables, i+1);

					print(t->parameters, i + 1);
							
					print(t->functions, i + 1);

					print(t->subClasses, i + 1);


				case 'p':
					Node* tt = t->variables;
					while (tt != NULL)
					{
						cout << t->varType << " " << t->varVal << " " << t->isRef << "\n";
						tt = tt->next;
					}
					break;


				case 'd':

					Node* tt = t->variables;
					while (tt != NULL)
					{
						cout << t->varType << " " << t->varVal << " " << t->isAbstract << " " << t->isFinal << " " << t->isStatic << "\n";
						tt = tt->next;
					}
					break;

			default:
				break;
			}


			t = t->next;

		} 

	}
	
};

