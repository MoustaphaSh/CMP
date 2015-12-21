#pragma once

#include <iostream>
#include <istream>
#include <ostream>
#include <fstream>
#include "Scope.h"
using namespace std;


class SymbolTable
{
public:
	char scopeType;
	void* currScope;
	void* rootScope;

	void insertVariable(char type, char* name, void* value,Modifiers modifier=Modifiers::None, bool isRef=0, bool isFinal=0, bool isStatic=0)
	{
		Variable * var = this->getVariable(name);
		if (var)
		{
			cout << name << "variable is exist previously";
		}
		else
		{
			switch (scopeType)
			{
			case 'm':
			{
						Variable* newVariable = new Variable(isFinal, isStatic, type, value);
						 ((Scope*)(currScope))->variables->putVariable(name, newVariable);
						 break;
			}
			case 'c':
			{
						Variable* newVariable = new Variable(modifier, isFinal, isStatic, type, value);
						((Scope*)(currScope))->variables->putVariable(name, newVariable);
						break;
			}
			case 'f':
			{
						Variable* newVariable = new Variable(isFinal, isStatic, type, value);
						((Scope*)(currScope))->variables->putVariable(name, newVariable);
						break;
			}
			default:
				break;
			}
		}
	}

	Variable* getVariable(char* name)
	{
		switch (scopeType)
		{
		case 'm':
		{
					Variable* newVariable = new Variable(isFinal, isStatic, type, value);
					((Scope*)(currScope))->variables->putVariable(name, newVariable);
					break;
		}
		case 'c':
		{
					Variable* newVariable = new Variable(modifier, isFinal, isStatic, type, value);
					((Scope*)(currScope))->variables->putVariable(name, newVariable);
					break;
		}
		case 'f':
		{
					Variable* newVariable = new Variable(isFinal, isStatic, type, value);
					((Scope*)(currScope))->variables->putVariable(name, newVariable);
					break;
		}
		default:
			break;
		}
		Variable* variable = (Variable*)((Scope*)currScope)->variablesMap->get(name);
		if (!variable){
			Scope* temp = dynamic_cast<Scope*>(((Scope*)currScope)->parent);
			while (temp && !variable){
				variable = (Variable*)temp->variablesMap->get(name);
				temp = temp->parent;
			}
		}
		return v;
	}
	Type* insertTypeInCurrentScope(char* name){
		Type * t = (Type*)this->currScope->m->get(name);
		if (t)
			return 0;
		t = new Type();
		t->setName(name);
		t->setInheritedType(0);
		return t;
	}
	
	SymbolTable(void){
		freopen("D:\\Compiler\\CMP\\Compiler\\Compiler\\SymbolTableOut.txt", "w", stdout);
		this->rootScope = new Scope();
		this->currScope = this->rootScope;
	}
	virtual ~SymbolTable(){
	}
};

