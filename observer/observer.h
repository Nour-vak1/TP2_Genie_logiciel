#pragma once
#include<string>

class Subject;

class Observer {
public :
 
	virtual ~Observer() {}; //destructeur
	virtual void update(Subject* s) = 0; 
	virtual std::string getObsValue() = 0; //Obtenir la valeur de l'observer
};

