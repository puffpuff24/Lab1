#define _CRT_SECURE_NO_WARNINGS
#include "tasks.h"

#include <math.h>
#include <stdio.h>

#define PI 3.14

namespace Tasks
{
	void FirstTask()
	{
		int iLen = 16;
		int iCubeVolume = pow(iLen, 3);
		int iArea = 4 * pow(iLen, 2);
		printf("Cube volume: %i\nLateral surface area of a cube: %i", iCubeVolume, iArea);
	}

	// ------

	void SecondTask()
	{
		int iR1 = 12;
		int iR2 = 13;
		int iR3 = 14;

		float fTotalResistance = (iR1 * iR2 * iR3) / (iR1 * iR2 + iR1 * iR3 + iR2 * iR3);
		printf("Total resistance: %.2f", fTotalResistance);
	}

	// ------

	void ThirdTask()
	{
		int iHeight = 123;
		float fDropTime = sqrt(2 * iHeight / 9.81);
		printf("Drop time: %.2f", fDropTime);
	}

	// ------

	void FourthTask()
	{
		int iLen = 5; // Длина окружности.
		float fCircleArea = iLen * iLen / (4 * PI);
		printf("Circle area: %.2f", fCircleArea);
	}

	// ------

	void FifthTask()
	{
		int x1 = 0;
		int y1 = 0;
		int x2 = 0;
		int y2 = 0;
		int x3 = 0;
		int y3 = 0;
		int p = 0; 
		int pp = 0;
		int st1 = 0;
		int st2 = 0;
		int st3 = 0;

		printf("Enter coordinates of first top: ");
		scanf("%i", &x1);
		scanf("%i", &y1);

		printf("Enter coordinates of second top: ");
		scanf("%i", &x2);
		scanf("%i", &y2);

		printf("Enter coordinates of third top: ");
		scanf("%i", &x3);
		scanf("%i", &y3);

		st1 = sqrt(((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2)));
		st2 = sqrt(((x2 - x3)*(x2 - x3)) + ((y2 - y3)*(y2 - y3)));
		st3 = sqrt(((x3 - x1)*(x3 - x1)) + ((y3 - y1)*(y3 - y1)));

		p = st1 + st2 + st3;
		pp = p / 2;
		double s = sqrt(pp*(pp - st1)*(pp - st2)*(pp - st3));
		printf("P: %d\nS: %d", p, s);
	}

	// ------

	void SixthTask()
	{
		int iA = 1; // Длина стороны A.
		int iB = 2; // Длина стороны B.
		int iC = 3; // Длина стороны C.

		int iP = iA + iB + iC;
		int iS = sqrt(iP * (iP - iA) * (iP - iB) * (iP - iC));
		int iHeight = 2 * (iS / iA);

		printf("Triangle height: %i", iHeight);
	}

	// ------

	void SeventhTask()
	{
		int iRadius = 22;
		int iHeight = 23;
		float fVolume = PI * pow(iRadius, 2) * iHeight;
		printf("Cylinder volume: %.2f", fVolume);
	}

	// ------

	void EighthTask()
	{
		int iV0 = 12;
		int iT = 6;
		int iA = 13;
		float fDistance = iV0 * iT + (iA * sqrt(iT) / 2);
		printf("Distance: %.2f", fDistance);
	}

	// ------

	void NinthTask()
	{
		int iA = 3; // Сторона треугольника А.
		int iB = 4; // Сторона треугольника B.
		int iC = 5; // Сторона треугольника C.

		int iP = (iA + iB + iC) / 2;
		int iArea = sqrt(iP * (iP - iA) * (iP - iB) * (iP - iC));
		printf("Triangle area: %i", iArea);
	}

	// ------

	void TenthTask()
	{
		int a = 0;
		int b = 0;
		int c = 0;;
		double x0 = 0;
		double y0 = 0;

		x0 = (-1 * b) / (2 * a);
		y0 = (a*x0*x0) + (b*x0) + c;

		printf("x0 - %d\ny0 - %d", x0, y0);
	}

	// ------

	void EleventhTask()
	{
		int a = 0;
		int b = 0;
		int p = 0;
		int s = 0;
		double d;

		p = (a + b) * 2;
		s = a*b;
		d = sqrt(a + b);

		printf("Perimeter: %d, area: %d, diagonal: %d", p, s, d);
	}
}