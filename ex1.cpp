#include <GL/glut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(237.0f/255, 28.0f / 255, 36.0f / 255);
	glVertex2f(4, 0);
	glVertex2f(2, -2);
	glVertex2f(0, - 2);
	glVertex2f(-4, -2);
	glVertex2f(-6, 0);
	glVertex2f(-6, 0);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(128.0f / 255, 64.0f / 255, 0.0f / 255);
	glVertex2f(-2, 6);
	glVertex2f(-2, 0);
	glVertex2f(-2.5, 0);
	glVertex2f(-2.5, 6);
	glColor3f(63.0f / 255, 72.0f / 255, 204.0f / 255);
	glVertex2f(-1.3, 6);
	glVertex2f(-1.3, 6.4);
	glVertex2f(-2.5, 6.4);
	glVertex2f(-2.5, 6);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(195.0f / 255, 195.0f / 255, 195.0f / 255);
	glVertex2f(-2.5, 6);
	glVertex2f(-2.5, 2);
	glVertex2f(-4, 2);
	glVertex2f(-2, 6);
	glVertex2f(1.5, 2);
	glVertex2f(-2, 2);

	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv); //o primeiro comando para inicializar o programa
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(640, 640);
	glutInitWindowPosition(200, 300);
	glutCreateWindow("Primitivas");
	glutDisplayFunc(display);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(255.0f / 255, 244.0f / 255, 208.0f / 255, 0.0f / 255);
	glutMainLoop();
	return 0;
}
