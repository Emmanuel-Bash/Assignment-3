#ifndef CITRUSFRUIT_H
#define CITRUSFRUIT_H

class CitrusFruit{
protected:
	float ph;
public:
	CitrusFruit(float ph) : ph(ph){}
	virtual const char * getName(){ return "Citrus Fruit";}
	virtual float getPh(){ return ph; }

};

#endif