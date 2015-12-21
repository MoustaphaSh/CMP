#pragma once
#include "Map.h"
#include <iostream>
using namespace std;

class ClassScope :public Scope
{
public:
	Modifiers modifier;
	ClassScope* inheritedClass;

	Map dataMembers();
	Map classes();
	Map Methods();
	void* parent;

	void insertVariable(int i,int j){
		cout << "class S";
	}
	
	ClassScope()
	{}
	ClassScope(void* parent, ClassScope* inheritedClass)
	{
		this->parent = parent;
	}
	virtual ~ClassScope()
	{
	}
};

