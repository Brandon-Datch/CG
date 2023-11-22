#include<windows.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the triangle
    glBegin(GL_TRIANGLES);

    // Vertex 1 (red)
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.7, -0.4);

    // Vertex 2 (green)
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.7, -0.4);

    // Vertex 3 (blue)
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.0, 0.4);

    glEnd();

    // Draw the rectangle
    glBegin(GL_QUADS);

    // Vertex 4 (red at the top)
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.7, -0.7);

    // Vertex 5 (green on the sides)
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.7, -0.7);

    // Vertex 6 (blue at the bottom)
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.7, -0.4);

    // Vertex 7 (green on the sides)
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.7, -0.4);

    glEnd();

     //initializing white borders
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINE_LOOP);
    //vertex 4
    glVertex2f(-0.7, -0.7 );
    //vertex 5
    glVertex2f(0.7, -0.7);
    //vertex 6
    glVertex2f(0.7, -0.4);
    //vertex 7
    glVertex2f(-0.7, -0.4);
    glEnd();


    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("A Simple Hut");

    glClearColor(0.0, 0.0, 0.0, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
