# include "observer.h"
#include "subject.h"
#include <iostream>

ObserverImpl::ObserverImpl() {
    // Constructeur par défaut de l'observateur
}

ObserverImpl::~ObserverImpl() {
    // Destructeur de l'observateur
}

// Fonction appelée par le sujet observé pour notifier tous les observateurs de la mise à jour de la valeur
void ObserverImpl::update(Subject* s) {
    // Afficher et stocke la nouvelle valeur du sujet observé
    this->obsValue = s->getValue();
    std::cout << "Value changed to: " << this->obsValue << std::endl;
}

// Retourne la valeur de l'observer
std::string ObserverImpl::getObsValue() {
    return this->obsValue;
}
#include "observer.h"
#include "subject.h"
#include <iostream>

ObserverImpl::ObserverImpl() {
    // Constructeur par défaut de l'observateur
}

ObserverImpl::~ObserverImpl() {
    // Destructeur de l'observateur
}

// Fonction appelée par le sujet observé pour informer tous les observateurs de la mise à jour de la valeur
void ObserverImpl::update(Subject* s) {
    this->obsValue = s->getValue();
    std::cout << "Nouvelle valeur : " << this->obsValue << std::endl;
}

// Retourne la valeur de l'observer
std::string ObserverImpl::getObsValue() {
    return this->obsValue;
}
