#ifndef HELICOP_H
#define HELICOP_H

#include <string>

class Helicop
{
private:
	int altitude;
	int distance;


public:
	helicop(); // constructor

	void ascend();
	void descend();
	void forward();
	void land();
