/**
 * @file Individu.h
 * @author Lopis
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 1
 * @date 2023-10-10
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
 * @brief Cette classe défini un Individu par un nom, un prénom et une Voiture qu'il conduit
 * 
 * @details tu peux copier un livre
 * 
 * si tu veux. le mieux c'est que soit logique. mais là j'ai la flemme
 * 
 * @warning un Individu ne peut pas avoir + d'1 Voiture
 * 
 */

class Individu
{
    // ATTRIBUTS
  public:

    /**
     * @brief Le nom de l'individu
     * 
     */

    string nom;          

    /**
     * @brief Le prénom de l'individu
     * 
     */

    string prenom;       

    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */

    Voiture *maVoiture; 

    // MÉTHODES
  public:
    
    /**
     * @brief Construct a new Individu object with 2 strings (first nom, second prenom)
     * 
     */

    Individu(string = "", string = "");
    
    /**
     * @brief Destroy the Individu object
     * 
     */

    ~Individu();

    /**
     * @brief Affiche l'identité de l'individu
     * 
     * @return string (nom+prenom)
     * 
     * @bug ça peux bugger
     */

    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    /**
     * @brief 
     * 
     * @param voiture 
     */

    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Set the Ma Voiture object
     * 
     * @param voiture pointeur vers objet voiture
     */
    
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H