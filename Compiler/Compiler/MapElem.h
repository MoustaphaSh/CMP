#pragma once
class MapElem
{
private:
	char* name;
	void* elem;
	MapElem * next;
public:
	void setName(char* name){
		this->name = name;
	}
	char* getName(){
		return this->name;
	}

	void setElem(void* elem){
		this->elem = elem;
	}
	void* getElem(){
		return this->elem;
	}

	MapElem* getNext(){
		return this->next;
	}
	void setNext(MapElem * newMapElem){
		this->next = newMapElem;
	}

	MapElem(char* name, void* elem, MapElem* next){
		this->name= name;
		this->elem = elem;
		this->next = next;
	}
	virtual ~MapElem(){
	}
};