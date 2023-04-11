#include <string>
#include <list>
#include "subject.h"

class Observer;

// Classe pour implémenter un sujet
class SubjectImpl : public Subject {
public:

    // Constructeur de SubjectImpl
    SubjectImpl();

    // Destructeur de SubjectImpl
    virtual ~SubjectImpl();

    // Obtenir la valeur actuelle du sujet
    std::string getValue() const override; //override indique que les fonctions héritées sont réécrites;

    // Définit la valeur du sujet
    void setValue(std::string value) override;

    // Indique si un observateur est enregistré
    bool isRegistered(const Observer* o) const override;

    // Enregistrer un observateur
    void registerObserver(Observer* o) override;

    // Supprimer l'enregistrement d'un observateur
    void unregisterObserver(Observer* o) override;


private:
    std::string value;              // Valeur actuelle du sujet
    std::list<Observer*> observers; // Liste des observateurs enregistrés
};
