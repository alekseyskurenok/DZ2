#include <iostream>
#include <string>
#include "Point.h"
#include "Line.h"
#include "Book.h"
#include "PrettyPrint.h"



int main()
{
	//task 1
	Point pt;
	Point pt1;
	pt1.setx(37);
	pt1.sety(190);
	pt.setx(20);
	pt.sety(30);
	std::cout << pt.getx() << std::endl;
	Line l1(30, 75);
	Line l2(pt, pt1);

	std::cout << l2.checkLiesPoint(pt) << std::endl;
	std::cout << l2.chekHigherOrBelow(pt) << std::endl;
	std::cout << l2.chekLies(8,315) << std::endl;
	Point intersection = pointIntersection(l1, l2);
	std::cout << intersection.getx() << "\t" << intersection.gety() << std::endl;
	std::cout << std::endl << std::endl << std::endl;

	//task2
	Book bk("Dan Brown", "Inferno", "Belorusskiy Dom pechati", 2013, 543);
	bk.conclusion();
	
	//task3
	PrettyPrint str("file", "vaaaaasssssssoooooolfflef");
	std::string s = str.conclusion();
	std::cout << s << std::endl;
	str.substitution(s);
	str.revolString(s);
	return 0;
}