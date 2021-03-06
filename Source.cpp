#include <iostream>
//#include <fstream>
//#include <string.h>
//#include <Windows.h>
//#include <cstdlib>
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

#include <math.h>



class Point
{
public:
	Point();
	Point(int x, int y);
	int get_x();
	int get_y();
	void show();
private:
	int _x;
	int _y;
};

Point::Point()
{
	_x = 0;
	_y = 0;
}

Point::Point(int x, int y)
{
	_x = x;
	_y = y;
}

int Point::get_x()
{
	return _x;
}

int Point::get_y()
{
	return _y;
}

void Point::show()
{
	std::cout << _x << " - " << _y << std::endl;
}





const size_t SIZE = 100;


class points
{
public:
	points();
	void set_point(Point pnt);
	void show();
	void find();
private:


	Point _points[SIZE];
	size_t _index;

};

points::points()
{
	_index = 0;
}

void points::set_point(Point pnt)
{
	if (_index < SIZE)
	{
		_points[_index] = pnt;
		_index++;
	}
}

void points::show()
{
	for (size_t i = 0; i < SIZE; i++)
	{
		_points[i].show();

	}
}

void points::find()
{
	int sum{ 0 };
	int perem{ 0 };
	int x1{ 0 };
	int x2{ 0 };
	int y1{ 0 };
	int y2{ 0 };

	int min{ 0 };
	
	Point pntMin;

	for (size_t i = 0; i < SIZE; i++)
	{
		sum = 0;
		perem = 0;
		//вычислить корень из числа
		//sqrt(x)

		//Формула вычисления расстояния между двумя точками A(xa, ya) и B(xb, yb) на плоскости
		//AB = √(xb - xa)2 + (yb - ya)2

		x1 = _points[i].get_x();
		y1 = _points[i].get_y();

		for (size_t j = 1; j < SIZE; j++)
		{
			x2 = _points[j].get_x();
			y2 = _points[j].get_y();

			perem = sqrt((x2-x1)* (x2 - x1) +(y2-y1)* (y2 - y1));
			sum += perem;
		}

		
		if(sum < min || i == 0)
		{
			min = sum;
			pntMin = _points[i];
		}
		
		std::cout << sum << "  +++++   " << std::endl;
	}

	std::cout << min << "  !!!!!!!   " << std::endl;
	pntMin.show();

}








int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	points pnts;

	for (size_t i = 0; i < SIZE; i++)
	{

		Point pnt(rand() % SIZE, rand() % SIZE);
		pnts.set_point(pnt);
	}

	pnts.show();

	pnts.find();

	return 0;
}


