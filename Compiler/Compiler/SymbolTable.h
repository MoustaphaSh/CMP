#pragma once
#include "Scope.h"

class SymbolTable
{
public:
	void* currScope;
	void* rootScope;

	Variable* insertVariableInCurrentScope(char* name){
		Variable * v = this->getVariable(name);
		if (v){
			return 0;//item is exist previously
		}
		else{
			v = new Variable();
			((Scope*)currScope)->variablesMap->putVariable(name, v);
		}
		return v;
	}
	Variable* getVariable(char* name){
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
		this->rootScope = new Scope();
		this->currScope = this->rootScope;
	}
	virtual ~SymbolTable(){
	}
};

