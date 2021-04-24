#ifndef __MAIN_H__
#define __MAIN_H__

#include <iostream>

#include <iostream>
#include <GL/glut.h>
using namespace std;

class Spider {
	public:
	    Spider(){cout<<"/================*/\nyou use lib spider\n";};
		void SDinitglut(int argc, char **argv);
		void SDCreateWindow(int Width, int Height, const char* pTitle);
		void SDMainLoop();
		~Spider(){};
};

#endif // __MAIN_H__
