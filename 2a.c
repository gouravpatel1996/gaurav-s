
#include<GL/glut.h>
#include<math.h>
#include<stdio.h>
void Myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,50.0,50.0,0.0);
    glMatrixMode(GL_MODELVIEW);
}
void display()
{
    GLfloat Vertices[3][2]={{0.0,0.0},{25.0,50.0},{50.0,0.0}};
    int j,k;
    int rand();
    GLfloat p[2]={7.5,5.0};
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    for(k=0;k<50;k++)
    {
        j=rand()%3;
        p[0]=(p[0]+Vertices[j][0])/2.0;
        p[1]=(p[1]+Vertices[j][1])/2.0;
        glVertex2fv(p);
    }
    glEnd();
    glFlush();
}
int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("sierpinski gasket");
    glutDisplayFunc(display);
    Myinit();
    glutMainLoop();
    return 0;
}

