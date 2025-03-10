/*
Nama    : Hanif Herofa
NIM     : 24060122120015
File    : Tugas1-2.cpp
*/

#include <gl/glut.h> 

void SegiEmpat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.51f, 1.0f, 1.0f); //cyan
    glRectf(-0.1, 0.1, 0.1, -0.1);
    glRectf(-0.1, 0.7, 0.1, 0.5);

    glColor3f(0.0f, 2.0f, 0.0f); //hijau
    glRectf(0.05, 0.4, 0.25, 0.2);
    glRectf(-0.05, 0.2, -0.25, 0.4);

    glColor3f(1.0f, 0.0f, 0.0f); //merah
    glRectf(-0.4, 0.1, -0.2, -0.1);
    glRectf(0.2, 0.1, 0.4, -0.1);

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Rectangle");
    glutDisplayFunc(SegiEmpat);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutMainLoop();
    return 0;
}