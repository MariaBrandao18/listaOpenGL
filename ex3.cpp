#include <GL/glut.h>

float y_position;
bool subir = false;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);

	glRotatef(0, 0.1f, 0, 1);

	glBegin(GL_QUADS);
	glVertex2f(10 , 10 + y_position);
	glVertex2f(10 , -10 + y_position);
	glVertex2f(-10 , -10 + y_position);
	glVertex2f(-10 , 10 + y_position);
	glEnd();

	glFlush();
}

void animar(int timer) {
	if (subir) {
		y_position += 0.00001f;
	}
	glutPostRedisplay();
	glutTimerFunc(timer, animar, 0);
}

void teclado(unsigned char key, int x, int y)
{
	if (key == 32) { //letra Space ASCII
		subir = true;
		y_position += 1.0f;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(640, 640);
	glutCreateWindow("Keyboard");
	glutDisplayFunc(display);
	glutKeyboardFunc(teclado);
	glutTimerFunc(1000, animar, 0);
	gluOrtho2D(-100, 100, -100, 100);
	glClearColor(1, 1, 1, 0);
	glutMainLoop();
	return 0;
}
