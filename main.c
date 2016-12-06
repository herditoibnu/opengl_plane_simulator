#include <gl/Gl.h>
#include <gl/Glu.h>
#include <gl/glut.h>
#include <math.h>
#include "glm.h"

GLMmodel* pmodel = NULL;
void  displaySolid(void);
void drawmodel(void);

float phi = 3.14 / 180;
float marsx,marsy;
int smars=0;

float q=0,w=0,e=1,r=0,t=0,y=0,u=0.0,i=1.0,o=0.0;

void myKeyboard(unsigned char key, int x, int y)
{
    if (key==8) // WUT?? Spasi kayak.e. Jadi dobel malah? Embuh sih
    {
        q=0,w=0,e=1,r=0,t=0,y=0,u=0.0,i=1.0,o=0.0;
    }
    if (key==32)
    {
        smars=smars+9;
        float haha3=smars*phi;
        marsx=cos(haha3)*2;
        marsy=sin(haha3)*2;
    }
    if (key==113)// q
    {
        q=q+0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==119)// w
    {
        w=w+0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==101)// e
    {
        e=e+0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==97)// a
    {
        q=q-0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==115)// s
    {
        w=w-0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==100)// d
    {
        e=e-0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    //==========================
    if (key==114)// r
    {
        r=r+0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==116)// t
    {
        t=t+0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==121)// y
    {
        y=y+0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==102)// f
    {
        r=r-0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==103)// g
    {
        t=t-0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==104)// h
    {
        y=y-0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    //========================
    if (key==117)// u
    {
        u=u+0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==105)// i
    {
        i=i+0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==111)// o
    {
        o=o+0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==106)// j
    {
        u=u-0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==107)// k

    {
        i=i-0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }
    if (key==108)// l
    {
        o=o-0.1;
        printf("q = %f \tw = %f \te = %f \nr = %f \tt = %f \ty = %f \nu = %f \ti = %f \to = %f \n\n",q,w,e,r,t,y,u,i,o);
    }

    glutPostRedisplay ();
}

int main(int argc, char **argv)
{
    glutInit(&argc,  argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Plane Simulator");
    glutDisplayFunc(displaySolid);
    glutKeyboardFunc(myKeyboard);
    glEnable(GL_LIGHTING); // enable the light source
    glEnable(GL_LIGHT0);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_DEPTH_TEST); // for hidden surface removal
    glEnable(GL_NORMALIZE); // normalize vectors for proper shading
    glClearColor(0.1f, 0.1f, 0.1f,0.0f); // background is light gray
    glViewport(0, 0, 640, 480);
    glutMainLoop();
    return 0;
}

void  displaySolid(void)
{
    // set properties of the surface material
    GLfloat mat_ambient[]={0.7f, 0.7f, 0.7f, 1.0f}; // gray
    GLfloat mat_diffuse[]={0.6f, 0.6f, 0.6f, 1.0f};
    GLfloat mat_specular[]={1.0f, 1.0f, 1.0f, 1.0f};
    GLfloat mat_shininess[]={70.0f};
    glMaterialfv(GL_FRONT, GL_AMBIENT,  mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,  mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS,  mat_shininess);

    // set the light source properties
    GLfloat lightIntensity[]={0.7f, 0.7f, 0.7f, 1.0f};
    GLfloat light_position[]={0.4f, 0.3f, 0.2f, 0.0f};
    glLightfv(GL_LIGHT0, GL_POSITION,  light_position);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  lightIntensity);

    // set the camera
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    double winHt=2; // half-height of the window
    glOrtho(-winHt*64/48.0,  winHt*64/48.0, -winHt,  winHt, -0.5, 100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(q, w, e, r, t, y, u, i, o);
    //gluLookAt(0, 1, 1, 0, 0, 0, 1.0, 1.0, 1.0);

    // start drawing
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // clear the screen

    GLfloat mars[]={1,0.2,0.2};

    glPushMatrix();
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE,  mars);
    glTranslated(marsx, marsy, 0);
    drawmodel();
    glPopMatrix();

    glPopMatrix();
    glPushMatrix();
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE,  mars);
    glTranslated(-marsx, -marsy, 0);
    drawmodel();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0, 0, -0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 0, 0.5);
    glPopMatrix();
    glFlush();
}

void drawmodel(void)
{
    if (!pmodel)
    {
        pmodel = glmReadOBJ("F-35_Lightning_II/F-35_Lightning_II.obj");
        if (!pmodel) exit(0);
        glmUnitize(pmodel);
        glmFacetNormals(pmodel);
        glmVertexNormals(pmodel, 90.0);
    }
    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);
}
