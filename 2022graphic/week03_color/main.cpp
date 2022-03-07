///把程式全刪除
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(1,1,0);///黃色
    glutSolidTeapot(0.3);

    glutSwapBuffers();
}
int main(int argc,char**argv)
{
    glutInit( &argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03的視窗");

    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
