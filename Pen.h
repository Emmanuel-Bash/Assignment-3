#ifndef PEN_H
#define PEN_H

//!TODO: remove the ’virtual’ keyword from the methods, compile,
//run and take note of the results.

class Pen {
	std::string pen_name;
public:
	Pen(std::string pen_name = "Pen"){

//!TODO: remove the ’this->’ part, compile and
// observe the results!

	this->pen_name = pen_name;

}

// No need to make this ’virtual’ since it is not ’overriden’
// by derived/child/sub classes.

	std::string getName(){
	return pen_name;

}

	virtual std::string drawLine();
	virtual std::string drawCircle();

};

	std::string Pen::drawLine(){
	return getName().append(" draws a line.");

}

	std::string Pen::drawCircle(){
	return getName().append(" draws a circle.");

};

#endif