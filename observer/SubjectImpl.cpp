#include "observer.h"

// Constructeur par d�faut
SubjectImpl::SubjectImpl() {
    this->value = "null";
}

// Destructeur
SubjectImpl::~SubjectImpl() {}

// Renvoie la valeur
std::string SubjectImpl::getValue() const {
    return this->value;
}

// D�finit la valeur
void SubjectImpl::setValue(std::string value) {
    if (!value.empty()) {
        this->value = value;
    }
}

//V�rifie si un Observateur est enregistr�
bool SubjectImpl::isRegistered(const Observer* o) const {
    for (const auto& obs : observers) {
        if (obs == o) {
            return true;
        }
    }
    return false;
}

// Enregistre un nouvel observateur du sujet
void registerObserver(Observer* o) {
    if (!isRegistered(o)) {
        observers.push_back(o);
        o->update(this);
    }
}

// Supprimer l'enregistrement d'un observateur 
void SubjectImpl::unregisterObserver(Observer* o) {
    if (isRegistered(o)) {
        observers.remove(o);
    }
}

