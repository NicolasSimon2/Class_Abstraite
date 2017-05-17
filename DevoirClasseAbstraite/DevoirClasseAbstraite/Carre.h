#pragma once
#include "Rectangle.h"
class CCarre : private CRectangle
{
public:
	CCarre();
	~CCarre();

	// Getter et Setter
	int GetBord();
	void SetBord(int B);

	// Procedure et Fonction
	void Dessiner();
	int aire();
	int perimetre();
};

