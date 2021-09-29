#pragma once
#ifndef VECTOR_H
#define VECTOR_H

class roundCone {

	double x, y, z;
	double r, h;
	static int howMany;

public:
	roundCone() { howMany++; }
	roundCone(double myX, double myY, double myZ, double myR, double myH) :x(myX), y(myY), z(myZ), r(myR), h(myH) { howMany++; }
	roundCone(const roundCone& rC) :x(rC.x), y(rC.y), z(rC.z), r(rC.r), h(rC.h) { howMany++; }
	~roundCone() { howMany--; }
	
	static int getHowMany() { return howMany; };
};
#endif
