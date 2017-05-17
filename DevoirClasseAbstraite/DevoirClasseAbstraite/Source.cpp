#include <iostream>
#include <string>
#include "Cercle.h"
#include "Carre.h"
using namespace std;

int main() {
	cout << "RECTANGLE" << endl << endl;
	//Test du rectangle
	CRectangle rectangle;
	//Affichage de toutes les variables de rectangle et de sa class parent "CFigure"
	cout << "X = " << rectangle.Getm_X() << " Y = " << rectangle.Getm_Y() << " Largeur = " << rectangle.Getm_Largeur() << " Longueur = " << rectangle.Getm_Longueur() << endl;
	//Set des valeurs
	rectangle.Setm_X(6);
	rectangle.Setm_y(7);
	rectangle.Setm_Largeur(8);
	rectangle.Setm_Longueur(9);
	//Affichage de toutes les variables de rectangle et de sa class parent "CFigure"
	cout << "X = " << rectangle.Getm_X() << " Y = " << rectangle.Getm_Y() << " Largeur = " << rectangle.Getm_Largeur() << " Longueur = " << rectangle.Getm_Longueur() << endl;
	//Test des methodes
	cout << "Perimetre = " << rectangle.perimetre() << " Aire = " << rectangle.aire() << endl;
	rectangle.Dessiner();


	cout << endl << endl << "CERCLE" << endl << endl;
	//Test du Cercle
	CCercle cercle;
	//Affichage de toutes les variables de Cercle et de sa class parent "CFigure"
	cout << "X = " << cercle.Getm_X() << " Y = " << cercle.Getm_Y() << " Radius = " << cercle.Getm_Radius() << endl;
	//Set des valeurs
	cercle.Setm_X(6);
	cercle.Setm_y(7);
	cercle.Setm_Radius(8);
	//Affichage de toutes les variables de Cercle et de sa class parent "CFigure"
	cout << "X = " << cercle.Getm_X() << " Y = " << cercle.Getm_Y() << " Radius = " << cercle.Getm_Radius() << endl;
	//Test des methodes
	cout << "Perimetre = " << cercle.perimetre() << " Aire = " << cercle.aire() << endl;
	cercle.Dessiner();


	cout << endl << endl << "CARRE" << endl << endl;
	//Test du Carre
	CCarre carre;
	//Affichage de toutes les variables de Carre et de sa class parent "CFigure"
	cout << "Bord = " << carre.GetBord() << endl;
	//Set des valeurs
	carre.SetBord(8);
	//Affichage de toutes les variables de Carre et de sa class parent "CFigure"
	cout << "Bord = " << carre.GetBord() << endl;
	//Test des methodes
	cout << "Perimetre = " << carre.perimetre() << " Aire = " << carre.aire() << endl;
	carre.Dessiner();

	system("pause");
	return 0;
}