#include "Node.h"
#include <iostream>
#include <istream>
#include <ostream>
#include <fstream>
using namespace std;


class SymbolTable
{
public:
	static Nodes st;
	static Nodes curr;

	SymbolTable(){
		freopen("D:\\Compiler\\CMP\\Compiler\\Compiler\\SymbolTableOut.txt", "w", stdout);
	}


	void addNode(){
		if (st.node == NULL){
			st.node = new Node();
		}

	}
	

	void print(Nodes t, int i=0){
		do{
			cout << i<< "-"<<t.node->type <<" : "<< t.node->name<<"\n";	

			switch (t.node->type)
			{
				case 'v':
					cout << t.node->varType<<"\t";
					cout << t.node->varVal;
					break;

				case 'c':
					cout << t.node->modifier << "\t";
					cout << t.node->inheretedFrom->name << "\t";
					Nodes tt = t.node->variables;
					do{
						print(tt, i+1);
					} while (tt.next != NULL);
					break;

				case 'f':
					Nodes tt = t.node->variables;
					do{
						print(tt, i + 1);
					} while (tt.next != NULL);

					tt = t.node->parameters;
					do{
						print(tt, i + 1);
					} while (tt.next != NULL);
					
					
					tt = t.node->functions;
					do{
						print(tt, i + 1);
					} while (tt.next != NULL);


					tt = t.node->subClasses;
					do{
						print(tt, i + 1);
					} while (tt.next != NULL);

					break;


				case 'p':
					cout << t.node->varType << "\t";
					cout << t.node->varVal<<"\t";
					cout << t.node->isRef;
					break;


				case 'd':
					cout << t.node->varType << "\t";
					cout << t.node->varVal << "\t";
					cout << t.node->isAbstract << "\t";
					cout << t.node->isFinal << "\t";
					cout << t.node->isStatic;
					break;

			default:
				break;
			}
		} while (t.next != NULL);

	}
	
};

