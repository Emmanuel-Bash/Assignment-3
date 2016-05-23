#ifndef FOUNTAINPEN_H
#define FOUNTAINPEN_H

class FountainPen : public Pen {
public:
/////////////////////////////////////////////////////////////
// //!TODO: what would happen if you used this version of //
// // Constructor in the comment box below //
// /////////////////////////////////////////////////////// //
// // FountainPen(std::string pen_name = "FountainPen") // //

// // : Pen(pen_name) {} // //
// /////////////////////////////////////////////////////// //
/////////////////////////////////////////////////////////////

	FountainPen(std::string pen_name)
	: Pen(pen_name) {}
	FountainPen() : Pen(std::string("FountainPen")){}
	virtual std::string drawLine();
	virtual std::string drawCircle();

};

	std::string FountainPen::drawLine(){
	return getName().append(" draws a line.");

}

	std::string FountainPen::drawCircle(){
	return getName().append(" draws a circle.");

};

#endif