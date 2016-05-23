#ifndef CHILD_H
#define CHILD_H

class Child : public Parent {
public:
	virtual const char * getName(){ return "Child"; }

};

#endif