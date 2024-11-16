// ====== Computer Graphics Experiment #1 ======
// |     Bresenham's Line Drawing Algorithm    |
// |                                           |
// =============================================
//
// Requirement:
// Implement a general Bresenham's Line Drawing Algorithm.
// Only use GL_POINTS drawing mode.
// Do not use OpenGL line drawing capability.


#include <windows.h>
#include <GL/glut.h>
#include <math.h>

#define PI 3.14159265359
int width, height;




void swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}
// Bresenham line algorithm
void MyLine(int xs, int ys, int xe, int ye)
{
	// Write your code here
    int dx=abs(xe-xs),dy=abs(ye-ys);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POINTS);
    if(dx>dy){//x方向变化的快
        if(xs>xe){//起点在终点右侧
            swap(xs,xe);
            swap(ys,ye);//保证向右绘制
        }
        int d = 2*dy-dx;//决策参数
        int x=xs,y=ys;
        while(x<=xe){
            glVertex2i(x,y);
            if(d>0){//
                y += (ye > ys)?1:-1;//斜率大于0，向右上绘制；斜率小于0，向右下绘制
                d = d + 2*dy -2*dx;
                x++;
            }
            else{
                d = d + 2*dy;
                x++;
            }

        }
    }
    else{//y方向变化得快
        if(ys>ye){
            swap(xs,xe);
            swap(ys,ye);
        }
        int d = 2*dx - dy;
        int x = xs,y=ys;
        while(y <= ye){
            glVertex2i(x,y);
            if(d>0){
                x += (xe>xs)?1:-1;
                d += 2*dx-2*dy;
                y++;
            }
            else{
                d += 2*dx;
                y++;
            }
        }
    }
    glEnd();

}

// Initialization function
void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
}

// Display callback function
void display(void)
{
	int i, x0, y0, x, y;
	double a;

	glClear (GL_COLOR_BUFFER_BIT);

	x0=width/2;
	y0=height/2;

	glColor3f(1.0, 1.0, 1.0);

	// Draw lines
	for (i=0; i<360; i+=15)
	{
		a=(double)i/180.0*PI;
		x=0.45*width*cos(a);
		y=0.45*height*sin(a);
		if (i==0 || i==180) y=0;
		if (i==90 || i==270) x=0;
		MyLine(x0, y0, x0+x, y0+y);
	}

	glFlush();
}

// Reshape callback function
void reshape(int w, int h)
{
	// Record width and height of program window
	width=w;
	height=h;

	// Set clipping window and viewport equal to
	// view area of program window
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D (0.0, w, 0.0, h);
}

// Keyboard callback function
void keyboard(unsigned char key, int x, int y)
{
	switch (key) {
		case 27:
			exit(0);

	}
}

// Main program entrance
int main(int argc, char* argv[])
{
	// Create window
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Lines");

	// Initialization
	init();

	// Define callback functions
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutDisplayFunc(display);

	// Main program loop. (Event loop)
	glutMainLoop();

	return 0;
}
