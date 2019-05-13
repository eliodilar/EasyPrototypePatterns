/*
 * PrototypeTest.hpp
 *
 *  Created on: 13 déc. 2018
 *      Author: chapoul
 */

#ifndef PROTOTYPETEST_HPP_
#define PROTOTYPETEST_HPP_


#include <iostream>

using namespace std;

class Prototype;

class Proto {

	public:

		Proto(){ numb = 0;};

		virtual ~Proto(){};

		virtual Prototype * Clone(Prototype  &val) = 0 ;

		virtual void Test () = 0 ;

		virtual void GetID () = 0 ;

		virtual void SetID (int Id) = 0 ;

		int numb;




};



class Prototype : public Proto {

	public:

		Prototype(){ numb=0;};

		Prototype(Prototype  &val){numb=0; };

		~Prototype(){};

		void Test (){cout<<"test"<<endl;};

		Prototype * Clone(Prototype  &val){

			return new Prototype(val);
		}

		void GetID (){

			cout<< "Id: "<< numb<<endl;
		}

		void SetID(int Id){

			numb = Id;

		}


		int numb ;
};


#endif /* PROTOTYPETEST_HPP_ */
