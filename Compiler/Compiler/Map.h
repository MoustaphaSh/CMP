#pragma once
#include <iostream>
#include "MapElem.h"
#include "Variable.h"
#include "FunctionScope.h"
#include "ClassScope.h"


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

	void putVariable(char* name, void* elem)
	{
		int index = this->hash(name);
		MapElem * newMapElem = new MapElem(name, elem, this->arr[index]);

		this->arr[index] = newMapElem;
	}

	Variable* putParameter(char* name, bool* isRef, char* type, void* value){

		Variable* newParameter = new Variable(isRef,type, value);

		int index = this->hash(name);
		MapElem * newMapElem = new MapElem(name, newParameter, this->arr[index]);

		this->arr[index] = newMapElem;

		return newParameter;
	}

	Variable* putDataMember(char* name, char* type, void* value, bool* isFinal, bool* isStatic, Modifiers* modifier){

		Variable* newDataMember = new Variable(modifier, isFinal, isStatic, type, value);

		int index = this->hash(name);
		MapElem * newMapElem = new MapElem(name, newDataMember, this->arr[index]);

		this->arr[index] = newMapElem;

		return newDataMember;
	}
	
	FunctionScope* putFunction(void* parent, char* name, Modifiers* modifier, bool* isFinal, bool* isStatic, Map* parameter, void* returnValue){

		FunctionScope* newFunction = new FunctionScope(parent);

		int index = this->hash(name);
		MapElem * newMapElem = new MapElem(name, newFunction, this->arr[index]);

		this->arr[index] = newMapElem;

		return newFunction;
	}

	ClassScope* putClass(void* parent, char* name, Modifiers* modifier, bool* isFinal, bool* isStatic, char* inheritedType){

		ClassScope* newClass = new ClassScope(parent, inheritedType);

		int index = this->hash(name);
		MapElem * newMapElem = new MapElem(name, newClass, this->arr[index]);

		this->arr[index] = newMapElem;

		return newClass;
	}

	void* get(char* name){

		int index = this->hash(name);

		MapElem * temp = this->arr[index];

		while ((temp != 0) && (strcmp(temp->name, name) != 0)){
			temp = temp->next;
		}
		if (temp == 0)
			return 0;
		else
			return temp->elem;
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

