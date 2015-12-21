#pragma once
#include <iostream>
#include "MapElem.h"
#include "Var.h"
#include "Variable.h"
#include "Parameter.h"
#include "DataMember.h"
#include "Function.h"
#include "Class.h"

enum Modifiers
{
	Public, Proticted, Private
};
const int MAX_LENGTH = 71;

class Map
{
private:
	static const int mapLength = MAX_LENGTH;
	MapElem * arr[mapLength];
	int hash(char* name){
		unsigned int i;
		int retVal = 0;
		for (i = 0; i < strlen(name); i++)
		{
			retVal <<= 2;
			retVal ^= (int)(*name);
			name++;
		}
		return (retVal%mapLength);
	}
public:
	Var* putVar(char* name, char* type, void* value){

		Var* newVar = new Var(type, value);
		
		int index = this->hash(name);
		MapElem * newMapElem = new MapElem(name, newVar, this->arr[index]);

		this->arr[index] = newMapElem;

		return newVar;
	}

	Variable* putVariable(char* name, char* type, void* value, bool* isFinal, bool* isStatic){

		Variable* newVariable = new Variable(type, value, isFinal, isStatic);

		int index = this->hash(name);
		MapElem * newMapElem = new MapElem(name, newVariable, this->arr[index]);

		this->arr[index] = newMapElem;

		return newVariable;
	}

	Parameter* putParameter(char* name, char* type, void* value, bool* isRef){

		Parameter* newParameter = new Parameter(type, value, isRef);

		int index = this->hash(name);
		MapElem * newMapElem = new MapElem(name, newParameter, this->arr[index]);

		this->arr[index] = newMapElem;

		return newParameter;
	}

	DataMember* putDataMember(char* name, char* type, void* value, bool* isFinal, bool* isStatic, Modifiers* modifier){

		DataMember* newDataMember = new DataMember(type, value, isFinal, isStatic, modifier);

		int index = this->hash(name);
		MapElem * newMapElem = new MapElem(name, newDataMember, this->arr[index]);

		this->arr[index] = newMapElem;

		return newDataMember;
	}
	
	Function* putFunction(char* name, Map* parameter, void* returnValue, Scope* parent, bool* isFinal, bool* isStatic, Modifiers* modifier){

		Function* newFunction = new Function(parent, parameter, returnValue);

		int index = this->hash(name);
		MapElem * newMapElem = new MapElem(name, newFunction, this->arr[index]);

		this->arr[index] = newMapElem;

		return newFunction;
	}

	Class* putClass(char* name, Class *inheritedType, Scope* parent, bool* isFinal, bool* isStatic, Modifiers* modifier){

		Class* newClass = new Class(parent, inheritedType);

		int index = this->hash(name);
		MapElem * newMapElem = new MapElem(name, newClass, this->arr[index]);

		this->arr[index] = newMapElem;

		return newClass;
	}

	void* get(char* name){

		int index = this->hash(name);

		MapElem * temp = this->arr[index];

		while ((temp != 0) && (strcmp(temp->getName(), name) != 0)){
			temp = temp->getNext();
		}
		if (temp == 0)
			return 0;
		else
			return temp->getElem();
	}

	Map()
	{
		for (int i = 0; i<this->mapLength; i++){
			this->arr[i] = 0;
		}
	}
	virtual ~Map(){
	}
};

