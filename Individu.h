/**
 * @file Individu.h
 * @author Philipe Lopistéguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */


/**
 * @brief Cette classe défini un Individu à partir de son nom et son prénom
 * 
 * 
 * @details Au delà de définir un Individu cette classe permet aussi de désigner la Voiture conduite par l'Individu
 * La Voiture conduite par l'Individu est défini par un pointeur vers un objet Voiture
 * 
 * @warning Un Individu conduit au plus une Voiture
 */



class Individu
{
    // ATTRIBUTS
  public:

  /**
   * @brief Attributs publics de la classe Indiviu
   * 
   * 
   */

    string nom;         // Le nom de l'individu
    string prenom;      // Le prénom de l'individu
    Voiture *maVoiture; // Lien avec la voiture de l'individu

    // MÉTHODES
  public:
    
    /**
     * @brief Construit un objet Individu par défaut à partir de son nom et son prénom
     * 
     */
    Individu(string = "", string = "");
    
    /**
     * @brief Destructeur de la classe Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Affiche l'identité de l'individu
     * 
     * @return retourne une chaîne sous la forme nom prénom 
     * 
     * @bug rvbeugzeuihfui
     * 
     * @todo rajouter un parametre pour savoir si on affiche prenom om ou nom prenom
     */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    /**
     * @brief Défini la Voiture liée à un Individu
     * 
     * @param retourne un pointeur Voiture 
     */
    void majMaVoiture(Voiture* voiture);
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H