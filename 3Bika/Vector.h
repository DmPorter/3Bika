#pragma once
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <sstream>

class Vector {
public:
	Vector(int i = 0);
	void SetVector(int E);
	void GetVector();
	void AddVector(Vector A);
	void GetVectorI(int l, int i);
	void Sort();
	int GetMax();

private:

	static const int SZ = 20;
	int i;
	int Elem[SZ];
};