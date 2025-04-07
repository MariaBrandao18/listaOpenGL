#include <GL/glut.h>
#include <math.h>

float pii = 3.14159;
float r = 0;
float g = 0;
float b = 0;

static void circulo2(float raio) {
	float angle;
	int i;	
	glBegin(GL_TRIANGLE_FAN);
	for (i = 0; i < 360; i++) {
		angle = i * pii / 180;
		glColor3f(fabs(sin(angle)), fabs(cos(angle)), cos(sin(angle)) );
		glVertex2f(raio * cos(angle), raio * sin(angle));
	}
	glEnd();
}
void static display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glRotatef(0.1f, 0, 0, 1);
	glColor3f(0, 0, 0);
	circulo2(40);
	glFlush();
}

void animar(int timer) {
	glutPostRedisplay();
	glutTimerFunc(timer, animar, 0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(640, 640);
	glutCreateWindow("Transformacoes");
	glutDisplayFunc(display);
	glutTimerFunc(200, animar, 0);
	gluOrtho2D(-100, 100, -100, 100);
	glClearColor(1, 1, 1, 0);
	glutMainLoop();
	return 0;
}
