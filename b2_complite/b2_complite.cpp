#include <iostream>
using namespace std;

class Triangle{
public:
	float Equilateral_s;
	float Isoscales_s;
    string trangle_type;
    /*Triangle(float a, float b, float c) {
        z = a;
        y = b;
        z = c;
    }*/
    void type(float a,float b,float c,string trangle_type) {
		if (a > b && a > c) {
			if ((a * a) == ((b * b) + (c * c))) {
				trangle_type = "ПРЯМОЙ";
				cout << trangle_type << endl;
			}
			else if ((a * a) > ((b * b) + (c * c))) {
				trangle_type = "ТУПОЙ";
				cout << trangle_type << endl;
			}
			else if ((a * a) < ((b * b) + (c * c))) {
				trangle_type = "ОСТРЫЙ";
				cout << trangle_type << endl;
			}
		}
		if (b > a && b > c) {
			if ((b * b) == ((a * a) + (c * c))) {
				trangle_type = "ПРЯМОЙ";
				cout << trangle_type << endl;
			}
			else if ((b * b) > ((a * a) + (c * c))) {
				trangle_type = "ТУПОЙ";
				cout << trangle_type << endl;
			}
			else if ((b * b) < ((a * a) + (c * c))) {
				trangle_type = "ОСТРЫЙ";
				cout << trangle_type << endl;
			}
		}
		if (c > b && c > a) {
			if ((c * c) == ((b * b) + (a * a))) {
				trangle_type = "ПРЯМОЙ";
				cout << trangle_type << endl;
			}
			else if ((c * c) > ((b * b) + (a * a))) {
				trangle_type = "ТУПОЙ";
				cout << trangle_type << endl;
			}
			else if ((c * c) < ((b * b) + (a * a))) {
				trangle_type = "ОСТРЫЙ";
				cout << trangle_type << endl;
			}
		}
    }
	void count_S_triangle(float a, float b, float c) {
		if (a == b == c) {
			float side = a;
			Isoscales_s = ((a * a) * 1, 73) / 4;
		}
		if (a == b) {
			float ravnie_sides = a;
			float another_side = c;
			Equilateral_s = (another_side / 4) * (sqrt(4 * ((a * a) - (b * b))));
		}
		else if (a == c) {
			float ravnie_sides = a;
			float another_side = b;
			Equilateral_s = (another_side / 4) * (sqrt(4 * ((a * a) - (b * b))));
		}
		else if (b == c) {
			float ravnie_sides = c;
			float another_side = a;
			Equilateral_s = (another_side / 4) * (sqrt(4 * ((a * a) - (b * b))));
		}
		else {
			float p = (a + b + c) / 2;
			float Triangle_s = sqrt(p * ((p - a) * (p - b) * (p - c)));
		}
		if (Equilateral_s > Isoscales_s) {
			cout << "равнобедреный треугольник с сторонами " << a + b + c << " набольший" << endl;
		}
		else cout << "равностороний треугольник с сторонами " << a + b + c << " наибольший" << endl;
	}

private:
    //int x, y, z;
};

class Isoscales : public Triangle {
public:
	float sides;
	void cout_sides(float a, float b, float c) {
		if (a == b || a == c) {
			cout << a<<endl;
		}
		else if (b == c) {
			cout << b << endl;
		}
	}
};

class Equilateral : public Triangle {
	void cout_sides_for_Equilateral(float a, float b, float c) {
		if (a == b || a == c || b == c) {
			cout << a << endl;
		}
	}
};

int main()
{
	Triangle first;
	float z, x, c;
	cin >> z;
	cin >> x;
	cin >> c;
	first.type(z,x,c,"");
	first.count_S_triangle(z, x, c);
}
