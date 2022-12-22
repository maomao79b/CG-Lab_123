#include<gl\gl.h>
#include<gl\glut.h>
#include<math.h>
#include<windows.h>

void myinit(void){
glClearColor(1.0,1.0,1.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,600.0,0.0,600.0);
}
void lab_3(void){
    //red
    int p1[]={200,300};
    int p2[]={250,400};
    int p3[]={300,300};
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2iv(p1);
    glVertex2iv(p2);
    glVertex2iv(p3);
    glEnd();
    glFlush();
    //Green
    int p4[]={200,150};
    int p5[]={200,300};
    int p6[]={300,300};
    int p7[]={300,150};
    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2iv(p4);
    glVertex2iv(p5);
    glVertex2iv(p6);
    glVertex2iv(p7);
    glEnd();
    glFlush();
    //Blue
    int p8[]={250,400};
    int p9[]={300,300};
    int p10[]={500,340};
    int p11[]={430,420};
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2iv(p8);
    glVertex2iv(p9);
    glVertex2iv(p10);
    glVertex2iv(p11);
    glEnd();
    glFlush();
    //sky
    int p12[]={300,300};
    int p13[]={300,150};
    int p14[]={500,210};
    int p15[]={500,340};
    glColor3f(0,0.6,1);
    glBegin(GL_POLYGON);
    glVertex2iv(p12);
    glVertex2iv(p13);
    glVertex2iv(p14);
    glVertex2iv(p15);
    glEnd();
    glFlush();
}

void lab_2(void){
    //body
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glVertex2i(200,250);
    glVertex2i(200,400);
    glVertex2i(250,500);
    glVertex2i(300,400);
    glVertex2i(300,250);
    glEnd();
    glFlush();
    //window
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glVertex2i(250,290);
    glVertex2i(250,350);
    glVertex2i(280,350);
    glVertex2i(280,290);
    glEnd();
    glFlush();
    //door
    glLineWidth(3);
    glBegin(GL_LINE_STRIP);
    glVertex2i(210,250);
    glVertex2i(210,350);
    glVertex2i(240,350);
    glVertex2i(240,250);
    glEnd();
    glFlush();
    //smokestack
    glLineWidth(3);
    glBegin(GL_LINE_STRIP);
    glVertex2i(210,420);
    glVertex2i(210,500);
    glVertex2i(240,500);
    glVertex2i(240,480);
    //glVertex2i(240,350);
    //glVertex2i(240,250);
    glEnd();
    glFlush();
}
void lab_1(void){
    drawLine1();
    drawLineStrip1();
    drawLineLoop1();
}
void drawLineLoop1(void){
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glVertex2i(250,80);
    glVertex2i(235,30);
    glVertex2i(260,20);
    glVertex2i(280,90);
    glVertex2i(260,120);
    glVertex2i(235,100);
    glEnd();
    glFlush();
}
void drawLine1(void){
    //E-F
    glColor3f(0.5,0.2,0.8); // set color for anyone, parameter = R,G,B
    glLineWidth(5);
    glBegin(GL_LINES); // draw line
    glVertex2i(50,80); // position start
    glVertex2i(35, 30); // position stop
    glEnd();
    glFlush();
    //D-C
    glColor3f(0.5,0.2,0.8); // set color for anyone, parameter = R,G,B
    glLineWidth(5);
    glBegin(GL_LINES); // draw line
    glVertex2i(60,20); // position start
    glVertex2i(80, 90); // position stop
    glEnd();
    glFlush();
    //A-B
    glColor3f(0.5,0.2,0.8); // set color for anyone, parameter = R,G,B
    glLineWidth(5);
    glBegin(GL_LINES); // draw line
    glVertex2i(60,120); // position start
    glVertex2i(35, 100); // position stop
    glEnd();
    glFlush();

}
void drawLineStrip1(void){
    glLineWidth(3);
    glBegin(GL_LINE_STRIP);
    glVertex2i(150,80);
    glVertex2i(135,30);
    glVertex2i(160,20);
    glVertex2i(180,90);
    glVertex2i(160,120);
    glVertex2i(135,100);
    glEnd();
    glFlush();
}
int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1500,800);
    glutInitWindowPosition(0,0);
    glutCreateWindow("BasicOpenGL");
    myinit();
    glutDisplayFunc(lab_1);
    glutMainLoop();
    return 0;
}
