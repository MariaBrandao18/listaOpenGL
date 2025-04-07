#include <GL/glut.h>
#include <math.h>

float pi = 3.14159;

void circulo(float raio) {
	float angle;
	int i;
	glBegin(GL_POLYGON);
	for (i = 0; i < 360; i++) {
		angle = i * pi / 180;
		glVertex2f(raio * cos(angle), raio * sin(angle));
	}
	glEnd();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 0, 0.33);
	circulo(56);
	glColor3f(0, 0, 0.99 );
	circulo(42);
	glColor3f(0, 0, 0.33);
	circulo(28);
	glColor3f(1, 1, 1);
	circulo(10);
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(640, 640);
	glutCreateWindow("Transformacoes");
	glutDisplayFunc(display);
	gluOrtho2D(-100, 100, -100, 100);
	glClearColor(1, 1, 1, 0);
	glutMainLoop();
	return 0;
 }
