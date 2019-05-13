//============================================================================
// Name        : prototype.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "PrototypeTest.hpp"

using namespace std;

int main() {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Prototype newPrototype;

	Prototype * newe = 0;

	Prototype * newe2 = 0;

	newPrototype.Test();

	newe=newPrototype.Clone(newPrototype);

	newe->Test();

	newe2=newe->Clone(*newe);

	newe2->Test();

	newPrototype.SetID(1);

	newe->SetID(2);

	newe2->SetID(3);

	for (int cpt = 0 ; cpt < 100 ;cpt++){

		Prototype * newe3 = new Prototype;
		newe3=newe2->Clone(newPrototype);

		newe3->SetID(cpt);

		newe3->GetID();
;

	}
	cout<<"end prog"<<endl;

	return 0;
}
