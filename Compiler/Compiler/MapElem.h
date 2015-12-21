#pragma once
class MapElem
{
public:
	char* name;
	void* elem;
	MapElem * next;

	MapElem(char* name, void* elem, MapElem* next){
		this->name= name;
		this->elem = elem;
		this->next = next;
	}
	virtual ~MapElem(){
	}
};