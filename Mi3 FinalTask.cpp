#include <GL/glut.h>

void display();
void reshape(int, int);


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200, 200);
    glutInitWindowSize(720, 640);
    glutCreateWindow("Flag");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glClearColor(0.01, 0.1, 0.2, 1.0);
    glutMainLoop();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();


    //Rectangle
    //Blue
    glColor3f(0.1, 0.2, 0.8);
    glBegin(GL_QUADS);
    glVertex2f(9.8, 5);
    glVertex2f(-9.8, 5);
    glVertex2f(-9.8, 0);
    glVertex2f(9.8, 0);
    
    //Red
    glColor3f(0.8, 0.1, 0.2);
    glBegin(GL_QUADS);
    glVertex2f(9.8, 0);
    glVertex2f(-9.8, 0);
    glVertex2f(-9.8, -5);
    glVertex2f(9.8, -5);

    glEnd();
    glFlush();

    //Triangle
    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2, 0);
    glVertex2f(-9.8, 5);
    glVertex2f(-9.8, -5);

    glEnd();
    glFlush();

    //Square
    // Center
    glColor3f(0.85, 0.7, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-6.2, 0.8);
    glVertex2f(-7.8, 0.8);
    glVertex2f(-7.8, -0.8);
    glVertex2f(-6.2, -0.8);

    //Side
    glColor3f(0.85, 0.7, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-3.4, 0.4);
    glVertex2f(-4.2, 0.4);
    glVertex2f(-4.2, -0.4);
    glVertex2f(-3.4, -0.4);
    
    //Top
    glColor3f(0.85, 0.7, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-8.7, 3.8);
    glVertex2f(-9.5, 3.8);
    glVertex2f(-9.5, 3.0);
    glVertex2f(-8.7, 3.0);
    
    
    //Bot
    glColor3f(0.85, 0.75, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-8.7, -3.8);
    glVertex2f(-9.5, -3.8);
    glVertex2f(-9.5, -3.0);
    glVertex2f(-8.7, -3.0);

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

