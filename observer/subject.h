#pragma once
#include <string>;
class Observer;
class Subject {
public :
	//R�cup�rer la valeur du sujet
	virtual std::string getValue() const=0; 

	// D�finir la valeur du sujet
	virtual void setValue(std::string value) = 0;

	// Bool�en qui indique si un observateur du sujet est enregistr�
	virtual bool isRegistered(const Observer* o);

	// Enregistre un observateur du sujet
	virtual void registerObserver(Observer* o) = 0;

	// Supprime l'enregistrement d'un observateur du sujet
	virtual void unregisterObserver(Observer* o) = 0;

	// Destructeur du sujet
	virtual ~Subject() {};

};

