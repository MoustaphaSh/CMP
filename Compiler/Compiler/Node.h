#pragma once
#include <iostream>
using namespace std;

enum Modifiers
{
	None, Public, Proticted, Private
};


class Node
{
public:

	Node* prev = NULL;
	Node* next = NULL;

	char* name;
	char type;
	Node* parent = NULL;
	Modifiers modifier;
	Node* inheretedFrom = NULL; //class
	bool isAbstract = 0;
	Node* subClasses;
	Node* functions;
	Node* parameters;
	Node* variables;
	Node* returnValue;
	bool isFinal = 0;
	bool isStatic = 0;
	bool isRef = 0;
	char varType;
	void* varVal;

	Node(){
		
	}

	static Node varNode(Node* parent, char varType, char* name, void* varVal){
		Node n = Node();
		n.parent = parent;
		n.type = 'v';
		n. name = name;
		n. varType = varType;
		n.varVal = varVal;
		return n;
	}

	static Node paramNode(Node* parent, char varType, char* name, void* varVal, bool isRef){
		Node n = Node();
		n.parent = parent;
		n.type = 'p';
		n.name = name;
		n.varType = varType;
		n.varVal = varVal;
		n.isRef = isRef;
		return n;
	}

	static Node dataMemNode(Node* parent, char varType, char* name, void* varVal, Modifiers modifier, bool isFinal, bool isStatic){
		Node n = Node();
		n.parent = parent;
		n.type = 'd';
		n.name = name;
		n.varType = varType;
		n.varVal = varVal;
		n.modifier = modifier;
		n.isFinal = isFinal;
		n.isStatic = isStatic;
		return n;
	}

	static Node classNode(Node* parent, char* name, Modifiers modifier, bool isAbstract, Node* inheretedFrom, Node* variables, Node* subClasses){
		Node n = Node();
		n.parent = parent;
		n.type = 'c';
		n.name = name;
		n.modifier = modifier;
		n.isAbstract = isAbstract;
		n.inheretedFrom = inheretedFrom;
		n.variables = variables;
		n.subClasses = subClasses;
		return n;
	}

	static Node funcNode(Node* parent, char* name, Node* variables, Node* parameters, Node* returnValue, Node* functions, Node* subClasses){
		Node n =  Node();
		n.parent = parent;
		n.type = 'f';
		n.name = name;
		n.variables = variables;
		n.subClasses = subClasses;
		n.parameters = parameters;
		n.returnValue = returnValue;
		n.functions = functions;
		return n;
	}


	Node* getVar(char* name){
		Node* t = variables;
		while (t != NULL)
		{
			if (strcmp(t->name, name)){
				return t;
			}
			t = t->next;
		}
		return NULL;
	}

};

