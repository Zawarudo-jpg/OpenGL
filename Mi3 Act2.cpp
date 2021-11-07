#include <GL/glut.h>

void display();
void reshape(int, int);


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200, 200);
    glutInitWindowSize(640, 640);
    glutCreateWindow("Checkerboard");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glClearColor(0.05, 0.25, 0.25, 1.0);
    glutMainLoop();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // OUTLINE
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(2);

    glBegin(GL_LINES);
    glVertex2f(7.5, 7.5);
    glVertex2f(-5, 7.5);

    glBegin(GL_LINES);
    glVertex2f(-5, 7.5);
    glVertex2f(-5, -5);

    glBegin(GL_LINES);
    glVertex2f(-5, -5);
    glVertex2f(7.5, -5);

    glBegin(GL_LINES);
    glVertex2f(7.5, -5);
    glVertex2f(7.5, 7.5);

    glEnd();
    glFlush();

    // LEFT TO RIGHT
    // ROW - 1
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(0, 7.5);
    glVertex2f(-2.5, 7.5);
    glVertex2f(-2.5, 5);
    glVertex2f(0, 5);

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(5, 7.5);
    glVertex2f(2.5, 7.5);
    glVertex2f(2.5, 5);
    glVertex2f(5, 5);
    
    // ROW - 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(-2.5, 5);
    glVertex2f(-5, 5);
    glVertex2f(-5, 2.5);
    glVertex2f(-2.5, 2.5);

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(2.5, 5);
    glVertex2f(0, 5);
    glVertex2f(0, 2.5);
    glVertex2f(2.5, 2.5);

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(7.5, 5);
    glVertex2f(5, 5);
    glVertex2f(5, 2.5);
    glVertex2f(7.5, 2.5);

    // ROW - 3
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(0, 2.5);
    glVertex2f(-2.5, 2.5);
    glVertex2f(-2.5, 0);
    glVertex2f(0, 0);

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(5, 2.5);
    glVertex2f(2.5, 2.5);
    glVertex2f(2.5, 0);
    glVertex2f(5, 0);

    // ROW - 4
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(-2.5, 0);
    glVertex2f(-5, 0);
    glVertex2f(-5, -2.5);
    glVertex2f(-2.5, -2.5);

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(2.5, 0);
    glVertex2f(0, 0);
    glVertex2f(0, -2.5);
    glVertex2f(2.5, -2.5);

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(7.5, 0);
    glVertex2f(5, 0);
    glVertex2f(5, -2.5);
    glVertex2f(7.5, -2.5);

    // ROW - 5
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(0, -2.5);
    glVertex2f(-2.5, -2.5);
    glVertex2f(-2.5, -5);
    glVertex2f(0, -5);

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(5, -2.5);
    glVertex2f(2.5, -2.5);
    glVertex2f(2.5, -5);
    glVertex2f(5, -5);

    glEnd();
    glFlush();
}


void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10, 10, -10, 10);
    glMatrixMode(GL_MODELVIEW);
}

