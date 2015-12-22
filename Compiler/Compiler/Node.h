#pragma once
#include <iostream>
using namespace std;

enum Modifiers
{
	None, Public, Proticted, Private
};

struct Nodes
{
	Node* prev = NULL;
	Node* node = NULL;
	Node* next = NULL;
};

class Node
{
public:
	char* name;
	char type;
	Node* parent;
	Modifiers modifier;
	Node* inheretedFrom = NULL; //class
	bool isAbstract = 0;
	Nodes subClasses;
	Nodes functions;
	Nodes parameters;
	Nodes variables;
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

	static Node classNode(Node* parent, char* name, Modifiers modifier, bool isAbstract, Node* inheretedFrom, Nodes variables, Nodes subClasses){
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

	static Node funcNode(Node* parent, char* name, Nodes variables, Nodes parameters, Node* returnValue, Nodes functions, Nodes subClasses){
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
		while (variables.next != NULL)
		{
			if (strcmp(variables.node->name, name)){
				return variables.node;
			}
		}
		
		if (strcmp(variables.node->name, name)){
			return variables.node;
		}
		else
		{
			return NULL;
		}
	}

};

