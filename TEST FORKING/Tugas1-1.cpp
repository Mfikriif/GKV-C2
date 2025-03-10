/* Nama : Hanif Herofa */
/* NIM  : 24060122120015 */
/* File : Tugas1-1.cpp*/

#include <gl/glut.h>

void Task(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // Fungsi Line Strip
    glLineWidth(5.0f);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.51f, 1.0f, 1.0f); //cyan
    glVertex2f(-0.9, 0.9);
    glColor3f(1.0f, 0.0f, 0.0f); //merah
    glVertex2f(-0.7, 0.6);

    glColor3f(1.0f, 0.0f, 0.0f); //merah
    glVertex2f(-0.7, 0.6);
    glColor3f(0.51f, 1.0f, 1.0f); //cyan
    glVertex2f(-0.5, 0.9);

    glEnd();

    // Fungsi Line Loop
    glLineWidth(5.0f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 2.0f, 0.0f); //hijau
    glVertex2f(-0.3, 0.9);
    glColor3f(0.51f, 1.0f, 1.0f); //cyan
    glColor3f(0.51f, 1.0f, 1.0f); //cyan
    glVertex2f(0.0, 0.9);

    glVertex2f(0.0, 0.9);
    glColor3f(1.0f, 0.0f, 0.0f); //merah
    glVertex2f(0.0, 0.6);

    glVertex2f(0.0, 0.6);
    glColor3f(0.51f, 1.0f, 1.0f); //cyan
    glVertex2f(-0.3, 0.6);

    glEnd();

    // Fungsi Triangle Fan
    glLineWidth(5.0f);
    glBegin(GL_TRIANGLE_FAN);

    glColor3f(0.51f, 1.0f, 1.0f); //cyan
    glVertex2f(0.1, 0.6);
    glVertex2f(0.4, 0.6);
    glColor3f(1.0f, 0.0f, 0.0f); //merah
    glVertex2f(0.25, 0.8);

    glColor3f(1.0f, 0.0f, 0.0f); //merah
    glVertex2f(0.25, 0.8);
    glVertex2f(0.4, 0.6);
    glVertex2f(0.6, 0.8);

    glEnd();

    // Fungsi Triangle Strip
    glLineWidth(5.0f);
    glBegin(GL_TRIANGLE_STRIP);

    glColor3f(0.51f, 1.0f, 1.0f); //cyan
    glVertex2f(-0.9, 0.4);
    glVertex2f(-0.9, 0.2);
    glVertex2f(-0.7, 0.4);

    glColor3f(1.0f, 0.0f, 0.0f); //merah
    glVertex2f(-0.7, 0.2);
    glColor3f(0.0f, 2.0f, 0.0f); //hijau
    glVertex2f(-0.9, 0.4);
    glVertex2f(-0.9, 0.2);

    glEnd();

    // Fungsi Quads
    glLineWidth(5.0f);
    glBegin(GL_QUADS);

    glColor3f(0.51f, 1.0f, 1.0f); //cyan
    glVertex2f(0.1, 0.4);
    glVertex2f(-0.5, 0.4);
    glVertex2f(-0.5, 0.0);
    glVertex2f(0.1, 0.0);

    glColor3f(0.0f, 2.0f, 0.0f); //hijau
    glVertex2f(-0.1, 0.4);
    glVertex2f(-0.3, 0.4);
    glVertex2f(-0.3, 0.2);
    glVertex2f(-0.1, 0.2);

    glEnd();

    // Fungsi Quads Strip
    glLineWidth(5.0f);
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f); //merah
    glVertex2f(0.1, -0.1);
    glVertex2f(0.4, -0.1);

    glColor3f(0.0f, 2.0f, 0.0f); //hijau
    glVertex2f(0.4, -0.4);
    glVertex2f(0.1, -0.4);
    glVertex2f(0.1, -0.1);
    glVertex2f(0.4, -0.1);

    glEnd();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(720, 720);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Titik");
    glutDisplayFunc(Task);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutMainLoop();
    return 0;
}