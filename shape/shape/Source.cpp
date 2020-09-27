#include "shape.h"

int main()
{
	Rectangle r(4.0, 6.0);
	r.display();

	Square s(1.0);
	s.display();

	Triangle t;
	t.display();
}