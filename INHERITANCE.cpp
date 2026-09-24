
//1. SIMPLE INHERITANCE

/*
#include<iostream>
using namespace std;
class hello{    // parent class
	public:
		int a=10;
};

class hello2:public hello{
	public:          //child class
		int b=20;
		void hi(){
			cout<<a+b<<endl;
		}		
};

int main()
{
	hello2 s2;
	s2.hi();
	
}
*/

//2. MULTILEVEL INHERITENCE

/*
#include<iostream>
using namespace std;
class hello{
	public:          // parent class
		int a=10;
};
class hello2: public hello{
	public:        	//child class
		int b=20;
};
class hello3: public hello2{
	public:			//sub-child class
		int c=30;
		void hi(){
			cout<<a+b+c<<endl;
		}
};
int main()
{
	hello3 s3;
	s3.hi();
}
*/

//3. MULTIPLE INHERITENCE

/*
#include<iostream>
using namespace std;
class hello{
	public:    //1st parent class
		int a=10;
};
class hello2{
	public:		//2nd parent class
		int b=20;
};
class hello3: public hello, public hello2 {
	public:		//child class consisting 2 parent classes
		int c=30;
		void hi(){
			cout<<a+b+c<<endl;
		}
};
int main()
{
	hello3 s3;
	s3.hi();
}
*/

//4. HEIRARCHEAL INHERITENCE

/*
#include<iostream>
using namespace std;

class hello{
	public:			//parent class
		int a=10;
};
class hello2: public hello{
	public:			//child class 1
		int b=20;
		void hi()
		{
			cout<<a+b<<endl;
		}
};
class hello3: public hello{
	public:			//child class 2
		int c=30;
		void hi()
		{
			cout<<a+c<<endl;
		}
};
int main()
{
	hello2 s2;
	hello3 s3;
	s2.hi();
	s3.hi();
}
*/

//5. HYBRID INHERITENCE(Diamond Problem)

/*
#include<iostream>
using namespace std;
class A{
	public:			//1st parent class
		int a=10;
};
class B{
	public: 		//2nd parent class
		int b=20;
};
class C: public A{
	public:			//1st child class
		int c=30;
};
class D: public A,public B{
	public: 		//2nd class directly attached to a(but also with B and C)
		int d=40;
};
int main()
{
	D s1;
	cout<<s1.a<<endl;
}
*/

//## VIRTUAL BASE CLASS (apnee base claass ki copy bana dena jo directly acces ho jaye)
// to solve the Diamond Problem

/*
#include<iostream>
using namespace std;
class Base{
	public:
		int a=10;
};
class A:public virtual Base{
	public:
};
class B: public virtual Base{  //inherit base class in form of virtual class
	public:
};
class C:public A,public B{	// now inherit a nd b vrna direct m to 
							//error show kar wha tha ki memory nhi h to the function
	public:
		int c=40;
		void hi()
		{
			cout<<a+c<<endl;
		}		
};
int main()
{
	C s4;
	s4.hi();
}
*/

//## FUNCTION OVERRIDING
//inheritance is mandatory over here

//->same function name and with same parameters

/*
#include<iostream>
using namespace std;
 class hello{
 	public:
 		virtual void hi()	//virtal base class create karo
 		{
 			cout<<"this is a first para of function overriding"<<endl;
		 }
 };
 class hello2:public hello{
 	public:
 		void hi()
 		{
 			cout<<"hello this is the derived class of dynamic"<<endl;
		 }
 };
 int main()
 {
 	hello*s1;		//pointer banao
 	hello2 s2;
 	s1=&s2;
 	s1->hi(); //jo p[riority p h use point krke outut dikhana h
 				// isiliye to virtual  base class banai h
 }
 */
 
// #ABSTRACT CLASS
//-> is an virtual class which works as an blueprint for some other class
//-> at least ek pure virtual function hona mandatory h
 /*
#include<iostream>
using namespace std;
 class hello{
 	public:
 		virtual void hi() = 0; 	//Pure Virtal function(kuch kaam nhi hota h iska but u have to make it)
 };
 class hello2 : public hello{
 	public:
 		void hi()  //function override
 		{
 			cout << "This is abstract class " << endl;
		 }
 };
 int main()
 {
 	hello* s1 = new hello2();
 	s1 -> hi();
 }
*/



