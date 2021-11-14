//
//	11av1/3i7:ozazL:vanhavaasa:::
//
//	-lGL -lGLU -lglut
//
#include "ozazL.11auT.cpp.h"
using namespace std;
//-------------------------------------
template <class T>
T kaza(T na, T ne){
	return(na + ne);
}
//-------------------------------------_z
void kaugega(g* ugTaLa, g* ugTaLe, g* ugSaa, g egTaLu[]);
//-------------------------------------
const b MAX = 108;
class op{
    private:
        p ep[MAX];
    public:
	p& operator [] (b biaL)
	{
	    if(biaL < MAX){
	  	return(ep[biaL]);
	    } else {
		biaL = Ta(biaL, MAX);
		return(ep[biaL]);
	    }
	}
}; //op
template<typename T>
class Less_than{
    private:
        const T val;
    public:
	Less_than(const T& v): val(v){}
	bool operator()(const T& x) const { return x < val; }
};
class iLp{
    private: 
        p ep[3];
    public:
	iLp(){}
	p& operator [] (b baa){
	    if(baa < 3){
		return(ep[baa]);
	    } else {
		baa = Ta(baa, 3);
		return(ep[baa]);
	    }
	}
	void iep(p px, p pi, p pz){
	    ep[0] = px;
	    ep[1] = pi;
	    ep[2] = pz;
	}
};//iLp
class oTi{
    public:
        iLp eiLp[3];
    public:
	oTi(){}
	iLp& operator[] (b bia){
	    if(bia < 3){
		return(eiLp[bia]);
	    } else {
		bia = Ta(bia, 3);
		return(eiLp[bia]);
	    }
	}
	void iiLp(b bia, p px, p pi, p pz){
	    if(bia >= 3){
		bia = Ta(bia, 3);
	    }
	    eiLp[bia][0] = px;
	    eiLp[bia][1] = pi;
	    eiLp[bia][2] = pz;
	}
	p oiLPi(b bia, b bie){
	    if(bia >= 3){
		bia = Ta(bia, 3);
	    }
	    if(bie >= 3){
		bie = Ta(bie, 3);
	    }
	    return(eiLp[bia][bie]);
	}
	void doTi(void){
	    glBegin(GL_TRIANGLES);
		glVertex3f(eiLp[0][0], eiLp[0][1], eiLp[0][2]);
		glVertex3f(eiLp[1][0], eiLp[1][1], eiLp[1][2]);
		glVertex3f(eiLp[2][0], eiLp[2][1], eiLp[2][2]);
	    glEnd();
	}
}; //oTi
//--------------------------------------------------------
static const b bmxeg = 108;
class an{
    protected:
        g eg[bmxeg];
	b bo;
    public:
	oTi oTian;
	virtual void oo() = 0;
	virtual ~an(){}
	void ibo(b baaL){
	    bo = baaL;
	}
	b obo(void){
	    return(bo);
	}
	void ieg(g* ug){
	    if(strlen(ug) < bmxeg){
	  	strcpy(eg, ug);
	    }
	}
	g* oeg(void){
	    return(eg);
	}
	void ioTi(p p0, p p1, p p2, p p3, p p4, p p5, p p6, p p7, p p8){
	    oTian.eiLp[0][0] = p0;
	    oTian.eiLp[0][1] = p1;
	    oTian.eiLp[0][2] = p2;
	    oTian.eiLp[1][0] = p3;
	    oTian.eiLp[1][1] = p4;
	    oTian.eiLp[1][2] = p5;
	    oTian.eiLp[2][0] = p6;
	    oTian.eiLp[2][1] = p7;
	    oTian.eiLp[2][2] = p8;
	}
};
class ani : public an{
    public:
	void oo(){}
	~ani(){}
        ani(g* uga){
	    if(strlen(uga) < 108){
		strcpy(eg, uga);
	    }
	}
	g* oeg(void){
	    return(eg);
	}
	void operator + (b baa){
	    bo += baa;
	}
};//ani
class ano : public an{
    public:
        void oo(){}
	~ano(){}
	ano(g* uga){
	    if(strlen(uga) < 108){
		strcpy(eg, uga);
	    }
	}
};//ano
class anz : public an{
    public:
        void oo(){}
	~anz(){}
	anz(g* uga){
	    if(strlen(uga) < 108){
		strcpy(eg, uga);
	    }
	}
	void ds(p px, p pi, p pz, p pr, b bL, b bu){
	    glPushMatrix();
	    glTranslatef(px, pi, pz);
	    glutWireSphere(pr, bL, bu);
	    //glRotatef(-10.0, 1.0, 1.0, 1.0);
	    glPopMatrix();
	}
	anz(anz& ranz){ //copy constructor
	    bo = ranz.bo;
	    b bia = 0;
	    while(bia < 108){
	        eg[bia] = ranz.eg[bia];
	 	bia++;
	    }
	}
	bool operator<(const anz& ranz){
	    return(bo < ranz.bo);
	}
};// anz
//_adaa
//--------------------------------------------------------
const b sTmx = 108;
template <class T>
class sT{
	//sT<b> sTba;
    private:
        T eT[sTmx];
	b bi;
    public:
	sT(){ bi = -1;}
	void puS(T Taa){
	    eT[++bi] = Taa;
	}
	T poP(){
	    return(eT[bi--]);
	}
};//sT this is a stack
//--------------------------------------------------------
struct RGB{
    unsigned char r, g, b;
};
class Pixmap{
public:

 RGB color[16];

 Pixmap()
 {
  color[0].r = 255;
  color[0].g = 0;
  color[0].b = 0;

  color[1].r = 0;
  color[1].g = 255;
  color[1].b = 0;

  color[2].r = 0;
  color[2].g = 0;
  color[2].b = 255;

  color[3].r = 255;
  color[3].g = 255;
  color[3].b = 255;
 
  color[4].r = 255;
  color[4].g = 0;
  color[4].b = 0;

  color[5].r = 0;
  color[5].g = 255;
  color[5].b = 0;

  color[6].r = 0;
  color[6].g = 0;
  color[6].b = 255;

  color[7].r = 255;
  color[7].g = 255;
  color[7].b = 255;
 
  color[8].r = 255;
  color[8].g = 0;
  color[8].b = 0;

  color[9].r = 0;
  color[9].g = 255;
  color[9].b = 0;

  color[10].r = 0;
  color[10].g = 0;
  color[10].b = 255;

  color[11].r = 255;
  color[11].g = 255;
  color[11].b = 255;
 
  color[12].r = 255;
  color[12].g = 0;
  color[12].b = 0;

  color[13].r = 0;
  color[13].g = 255;
  color[13].b = 0;

  color[14].r = 0;
  color[14].g = 0;
  color[14].b = 255;

  color[15].r = 255;
  color[15].g = 255;
  color[15].b = 255;

 }

 void render()
 {
  //glClear(GL_COLOR_BUFFER_BIT);
  glRasterPos3f(0.7, 0.7, 0.0);
  glDrawPixels( 4, 4, GL_RGB, GL_UNSIGNED_BYTE, color );
  //glFlush();
 }
};
class Pixmapa{
public:

 RGB color[256];

 Pixmapa()
 {
	 b bia = 0;
	 while(bia < 254){
	     color[bia].r = 255;
	     color[bia].g = 255;
	     color[bia].b = 255;

	     color[bia + 1].r = 0;
	     color[bia + 1].g = 0;
	     color[bia + 1].b = 0;
	     bia = bia + 2;
	 }
 } 
 void render()
 {
  //glClear(GL_COLOR_BUFFER_BIT);
  //glRasterPos3f(0.7, 0.7, 0.0);
  glDrawPixels( 16, 16, GL_RGB, GL_UNSIGNED_BYTE, color );
  //glFlush();
 }
};


Pixmap myPixmap;
//Pixmapa myPixmapa;
//---------------------------------------------------------
#define checkImageWidth 64
#define checkImageHeight 64
GLubyte checkImage[checkImageHeight][checkImageWidth][3];
static GLdouble zoomFactor = 1.0;
static GLint height;

/*void makeCheckImage(void)
{
int i, j, c;
    for (i = 0; i < checkImageHeight; i++) {
        for (j = 0; j < checkImageWidth; j++) {
            c = ((((i&0x8)==0)^((j&0x8))==0))*255;
            checkImage[i][j][0] = (GLubyte) c;
            checkImage[i][j][1] = (GLubyte) c;
            checkImage[i][j][2] = (GLubyte) c;
        }
    }
}*/
void makeCheckImage(void)
{
int i, j, c;
    for (i = 0; i < checkImageHeight; i++) {
        for (j = 0; j < checkImageWidth; j++) {
            c = ((((i&0x8)==0)^((j&0x8))==0))*255;
            checkImage[i][j][0] = (GLubyte) c;
            checkImage[i][j][1] = (GLubyte) c;
            checkImage[i][j][2] = (GLubyte) c;
        }
    }
}

//---------------------------------------------------------
GLfloat ctrlpoints[4][3] = {
        { -4.0, -4.0, 0.0}, { -2.0, 4.0, 0.0},
        {2.0, -4.0, 0.0}, {4.0, 4.0, 0.0}};



static void _nob(void){
    glClearColor(0.0, 0.0, 0.0, 1.0);
    GLfloat ambientLight[] = {0.78, 0.78, 0.78, 1.0};
    GLfloat diffuseLight[] = {0.7, 0.7, 0.7, 1.0};
    GLfloat specular[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat specref[] = {0.6, 0.6, 0.6, 1.0};
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    //glEnable(GL_CULL_FACE); //do not draw inside
    glEnable(GL_NORMALIZE);
    glFrontFace(GL_CCW);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientLight);
    //--------------------------------------------------
    GLfloat ambientLight1[] = {0.78, 0.78, 0.78, 1.0};
    GLfloat diffuseLight1[] = {0.7, 0.7, 0.7, 1.0};
    GLfloat specular1[] = {1.0, 1.0, 1.0, 1.0};

    glLightfv(GL_LIGHT1, GL_AMBIENT, ambientLight1);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, diffuseLight1);
    glLightfv(GL_LIGHT1, GL_SPECULAR, specular1);
    GLfloat lightPos1[] = {0.8, 0.8, 0.8, 1.0};
    glLightfv(GL_LIGHT1, GL_POSITION, lightPos1);
    glEnable(GL_LIGHT1);

    //--------------------------------------------------
    glLightfv(GL_LIGHT0, GL_AMBIENT, ambientLight);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
    GLfloat lightPos[] = {-0.8, -0.8, -0.8, 1.0};
    glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
    glEnable(GL_LIGHT0);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    //glMaterialfv(GL_FRONT, GL_SPECULAR, specref);
    //glMateriali(GL_FRONT, GL_SHININESS, 0);
    //--------------------------------------------------
    glShadeModel(GL_SMOOTH);
    glMatrixMode(GL_PROJECTION);
    //glMatrixMode(GL_MODELVIEW);
    //--------------------------------------------------

}//_nob

GLuint startList;
oz* euozL[3];
GLfloat ctrlPoints[4][3] = {
	{-0.4, -0.4, 0.0}, {-0.2, -0.4, 0.0}, 
	{0.2, 0.4, 0.0}, {0.4, 0.4, 0.0}};

GLfloat ctrlpoints3_[4][4][3] = {
   {{-1.5, -1.5, 4.0}, {-0.5, -1.5, 2.0},
    {0.5, -1.5, -1.0}, {1.5, -1.5, 2.0}},
   {{-1.5, -0.5, 1.0}, {-0.5, -0.5, 3.0},
    {0.5, -0.5, 0.0}, {1.5, -0.5, -1.0}},
   {{-1.5, 0.5, 4.0}, {-0.5, 0.5, 0.0},
    {0.5, 0.5, 3.0}, {1.5, 0.5, 4.0}},
   {{-1.5, 1.5, -2.0}, {-0.5, 1.5, -2.0},
    {0.5, 1.5, 0.0}, {1.5, 1.5, -1.0}}
};

GLfloat ctrlpoints3[4][4][3] = {
   {{-1.5, -1.5, 4.0}, {-0.5, -1.5, 2.0},
    {0.5, -1.5, -1.0}, {1.5, -1.5, 2.0}},
   {{-1.5, -0.5, 1.0}, {-0.5, -0.5, 3.0},
    {0.5, -0.5, 0.0}, {1.5, -0.5, -1.0}},
   {{-1.5, 0.5, 4.0}, {-0.5, 0.5, 0.0},
    {0.5, 0.5, 3.0}, {1.5, 0.5, 4.0}},
   {{-1.5, 1.5, -2.0}, {-0.5, 1.5, -2.0},
    {0.5, 1.5, 0.0}, {1.5, 1.5, -1.0}}
};
//-------------------------------------_r
g eguS[108] = "mLamaLam";

GLUnurbsObj* theNurb;
void init_surface(void){
    //-------------------------------------
    b ebku[64];
    b ebTa[64];
    b biu = 64;
    b bN = 22;
    b ba = 718;
    b bz = 666;
    _a77(ebku, ebTa, biu, bN, ba, bz);
    ebku[0] = Ta(ebku[0], bN);

    p epLa[48];
    b bii = 0;
    p pM = 1.0;
    while(bii < 48){
        if(ebku[bii] < ebku[bii + 1]){
	    pM = -1.0;
	} else {
	    pM = 1.0;
	}
	epLa[bii] = 0.67 * pM * (float) ebTa[bii] / (float) ebTa[bii + 1];
        bii++;
    }
    //-------------------------------------
    b bia, bie;
    b biiM = 0;
    //g eguS[23] "mLamaLam";;
    sprintf(eguS, "_%f", epLa[3]);
    //rbs3(-0.3, -0.3, 0.0, (void *)font, eguS);

    for(bia = 0; bia < 4; bia++){
        for(bie = 0; bie < 4; bie++){
	    ctrlpoints3[bia][bie][0] = 2.0 *((GLfloat)bia -1.5);	    
	    ctrlpoints3[bia][bie][1] = 2.0 *((GLfloat)bie -1.5);
	    //ctrlpoints3[bia][bie][2] = 0.67*((GLfloat)bie -1.5);
	    if((bia == 1 || bia == 2)&&(bie == 1 || bie == 2)){
	        ctrlpoints3[bia][bie][2] = -3.0;

	    } else {
		ctrlpoints3[bia][bie][2] = 3.0;
	    }
            //ctrlpoints3[bia][bie][0] = 1.67 * epLa[biiM++];
	    //ctrlpoints3[bia][bie][1] = 1.67 * epLa[biiM++];
	    //ctrlpoints3[bia][bie][2] = 1.67 * epLa[biiM++];

	    	    
	   }
    }
}
GLuint startList1;
static void nob(void){
    glClearColor(0.0, 0.0, 0.0, 1.0);
    GLfloat ambientLight[] = {0.78, 0.78, 0.78, 1.0};
    GLfloat diffuseLight[] = {0.7, 0.7, 0.7, 1.0};
    GLfloat specular[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat specref[] = {0.6, 0.6, 0.6, 1.0};
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    //glEnable(GL_CULL_FACE); //do not draw inside
    glEnable(GL_NORMALIZE);
    glFrontFace(GL_CCW);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientLight);
    //--------------------------------------------------
    GLfloat ambientLight1[] = {0.78, 0.78, 0.78, 1.0};
    GLfloat diffuseLight1[] = {0.7, 0.7, 0.7, 1.0};
    GLfloat specular1[] = {1.0, 1.0, 1.0, 1.0};

    glLightfv(GL_LIGHT1, GL_AMBIENT, ambientLight1);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, diffuseLight1);
    glLightfv(GL_LIGHT1, GL_SPECULAR, specular1);
    GLfloat lightPos1[] = {0.8, 0.8, 0.8, 1.0};
    glLightfv(GL_LIGHT1, GL_POSITION, lightPos1);
    glEnable(GL_LIGHT1);

    //--------------------------------------------------
    glLightfv(GL_LIGHT0, GL_AMBIENT, ambientLight);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
    GLfloat lightPos[] = {-0.8, -0.8, -0.8, 1.0};
    glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
    glEnable(GL_LIGHT0);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    glMaterialfv(GL_FRONT, GL_SPECULAR, specref);
    glMateriali(GL_FRONT, GL_SHININESS, 93);
    //--------------------------------------------------
    glShadeModel(GL_SMOOTH);
    glMatrixMode(GL_PROJECTION);
    //glMatrixMode(GL_MODELVIEW);
    //----------------------------------    
    //glEnable(GL_BLEND);
    //glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    //------------------------------
    //glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 4, &ctrlpoints[0][0]);
    // glEnable(GL_MAP1_VERTEX_3);
     //----------------------------
     //makeCheckImage();
     //glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
     //-----------------------------
    GLUquadricObj* qobj;
    startList = glGenLists(4);
    qobj = gluNewQuadric();
    gluQuadricDrawStyle(qobj, GLU_FILL);
    gluQuadricNormals(qobj, GLU_SMOOTH);
    glNewList(startList, GL_COMPILE);
        gluSphere(qobj, 0.23, 15, 10);
    glEndList();
    //-----------------------------
    euozL[0] = new oz(718);
    euozL[1] = new oz(666);
    euozL[2] = new oz(93);
    //-----------------------------
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 4, &ctrlPoints[0][0]);
    glEnable(GL_MAP1_VERTEX_3);
    //------------------------------
    //NURBS
    //init_surface();
    glEnable(GL_MAP2_VERTEX_3);
    glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, 4,
          0 , 1, 12, 4, &ctrlpoints3[0][0][0]);
    glEnable(GL_MAP2_VERTEX_3);
    glMapGrid2f(20, 0.0, 1.0, 20, 0.0, 1.0);
    //-----------------------------
    GLUquadricObj *qobj1;
    startList1 = glGenLists(1);
    qobj1 = gluNewQuadric();

    gluQuadricDrawStyle(qobj, GLU_FILL);
    glNewList(startList1, GL_COMPILE);
        gluSphere(qobj1, 0.5, 15, 10);
    glEndList();
    p _2pi = 2.0 * 3.14159265;
    p _n2pi = -2.0 * 3.1459265;
    //gluOrtho2D(_n2pi, _2pi, _n2pi, _2pi);
    glOrtho(_n2pi, _2pi, _n2pi, _2pi, _n2pi, _2pi);
    //glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

    //------------------------------
}//nob 

g  egod[23]	= "abgdeuzctikLmnsopxqrST";
g  egLob[108];
b  bLegLob = 108;
b  biaL = 0;
p spin = 0.0;
p px = 0.0;
p pxi = 0.1;
p ptaL = (2.0 * 3.14159);
p dptaL = 0.1;
p pxa = 0.0;
p pia = 0.0;
p pza = 0.0;
b baLp = 1;
b bpo = 1;
b  bLegku;
g egbpr[108];
string soLa;
b bsp = 10.0;
b bdsp = 0.1;
p _2pi = 2.0 * 3.14159265;
p _n2pi = -2.0 * 3.1459265;
p pgia = _n2pi;
p pdpia = kufa(_2pi, 1000.0);
p Tipaa(p piL, b bxp){
    p pu = 1.0;
    b bia = 0;
    while(bia < bxp){
   	pu = pu * piL;
        bia++;
    }
    return(pu);
}
g eguaS[108];
p pxs = 1.0;
p pis = 1.0;
p pzs = 1.0;
b bpa = 1;
//---------------------------------
template <typename T>
struct ska{
    T To = 0;

    void operator() (T Tsa){ To += Tsa; }
};
//----------------------------------_o
static void nmgmLogtL(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0, 0.0, 1.0);
    //-------------------
    struct tm* uiLTa;
    time_t iLTa;
    iLTa = time(nullptr);
    uiLTa = localtime(&iLTa);
    b bsc = iLTa;
    bsc = Ta(bsc, 86400);

    obp* uobpaL = new obp(23, bsc, 86400);
    
    char* uga   = new char[uobpaL->oso().length() + 1];
    strcpy(uga, uobpaL->oso().c_str());
    if(spin == 0.0){rbs3(-5.0, -4.0, 0.0, (void *)font, uga);}
    //---------------------
    obpa* uobpaa = new obpa(36, "0123456789abcdefghijkLmnopqrsTuvwxyz");

    char* uge 	= new char[uobpaa->oso().length() + 1];
    uobpaa->iba(bsc);
    uobpaa->ibz(86400);
    uobpaa->ibi(7);
    uobpaa->_kuu();
    uobpaa->_iso();
    strcpy(uge, uobpaa->oso().c_str());
    if(spin == 0.0){rbs3(-5.0, 5.0, 0.0, (void *)font, uge);}

    //--------------------
    b biiM = 23;
    b ebTa[biiM];
    b ebku[biiM];

    struct timeval time_now{};
    gettimeofday(&time_now, nullptr);
    b bTN = (time_now.tv_sec * 1000) + time_now.tv_usec;
    b biaTaa = _a77(ebTa, ebku, biiM, 22, bTN, 86400000);
    biaTaa = _a77(ebTa, ebku, biiM, 22, ebTa[7], ebTa[8]);
    ebku[0] = Ta(ebku[0], 22);
    //-------------------------------
    g egTa[108];
    sprintf(egTa, "%d:%d", ebTa[6], ebTa[7]);
    //rbs3(0.0, -0.8, 0.0, (void *)font, egTa);
    //------------------------------------
    
    g egSaa[] = "abgdeuzctikLmnsopxqrST";
    g egku[biiM + 1];
    b biegku = 0;
    while(biegku < (biiM - 0)){
	egku[biegku] = egSaa[ebku[biegku]];
	biegku++;
    }
    egku[biegku] = '\0';
    //rbs3(-0.7, -0.7, -0.7, (void *)font, egku);
    //--------------------
    g go;
    g eLi[3]; eLi[2] = '\0';
    string soL;
    for(b bi = 0; bi < strlen(egku);bi++){
        go = egku[bi];
        if(egku[bi] == 'n'){
	    soL = egku;
     	    eLi[0] = 'n'; eLi[1] = 'm';
	    if(esoegi(soL, eLi) == 1){
		glClearColor(0.0, 0.0, 0.0, 1.0);
	    } else {
		glClearColor(0.0, 0.0, 0.0, 1.0);
	    }   
	    g egoa[13];
	    b bi = 0;
	    for( bi = 0;bi < 7;bi++){
		egoa[bi] = egku[bi];
	    } 
	    egoa[bi] = '\0';
	    g egoe[13];
	    b bii = 0;
	    for(bi = 7,  bii = 0;bi < 14;bi++, bii++){
    		egoe[bii] = egku[bi];
	    }
	    egoe[bii] = '\0';
	    g eguL[14];
	    g eguLa[14];
	    g egSaa[23] = "abgdeuzctikLmnsopxqrST";
	    g egSae[37] = "0123456789abcdefghijkLmnopqrsTuvwxyz";
	    puugeg(egoa, egoe, egSaa, eguL);
	    kaugeg(egoa, egoe, egSaa, eguLa);
	    //g eguaS[108];
	    sprintf(eguaS, "%s:%s_%s_%s", egoa, egoe, eguL, eguLa);
	    //cout << egoa << ":" << egoe << "_" << eguL << endl;
	    if(spin == 0.0){rbs3(-4.0, -5.0, 0.0, (void *)font, eguaS);}
        }//n
        if(go == 'm'){
	    g egia[12] = "dgnicbr";
            g egie[12] = "atekioz";//dpiTStn
            g eguLa[13];
	    g egSaai[23] = "abgdeuzctikLmnsopxqrST";
	    b bia= 0;
	   
	    //egia[bia] = '\0';
	    puugeg(egia, egie, egSaai, eguLa);
 	    //rbs3(-0.7, -0.3, -0.7, (void *)font, eguLa);
	    //---------------------------------------
	    nm* unmLa = new nm();
	    g egoa[108] = "dgnicbr"; //dgnicbr
	    unmLa->iegoa(egoa);
	    g egoe[108] = "atekioz"; //atekioz
	    unmLa->iegoe(egoe);
	    unmLa->puu();
	    //rbs3(-0.7, -0.3, -0.7, (void *)font, unmLa->oeguL());
	    delete(unmLa);
	    //--------------------------
	    
	    //--------------------------_g
        }//m
	if(go == 'g'){
	   //glCallList(startList1); 
	   //p _2pi = 2.0 * 3.14159265;
	   //p _n2pi = -2.0 * 3.1459265;
	   p pxa, pii, pT, p8;
	   glPushMatrix();
	      p pia = _n2pi;
	       while(pia < _2pi){
		    pii = sin(pia);
		    pxa = cos(pia);
		    p8  = sin(kufa(1.0, pia)); 
		    pT = kufa(pii, pxa);
		    p psq = sqrt(pia);
		    p pcsc = kufa(1.0, cos(pia));
		    p pqa = sqrt(4.0*(1.0 - kufa((pia * pia), 25.0)));
		    if(pT == 0.0){ glPointSize(5.0); } else { glPointSize(1.0); }
		    glBegin(GL_POINTS);
		 	//glVertex3f(pia, pii, 0.0);
			glVertex3f(pia, pT, 0.0);
			glVertex3f(pxa, pii, 0.0);
			//glVertex3f(pxa, (0.6 * pii), 0.0);
			glVertex3f(pia, kufa(pii, pia), 0.0);
			glVertex3f(pia, p8, 0.0);
			glVertex3f(pia, (pia + kufa(1.0, pia)), 0.0);
			glVertex3f(pia, pcsc, 0.0);
			//glVertex3f(pia, pqa, 0.0);
			//glVertex3f(pia, pufa(0.0, pqa), 0.0);
		    glEnd();
		    pia += pdpia;
		    glRotatef(spin, pxs, pis, pzs);
	       }//while
	}//g
	if(go == 'L'){
	    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	    /*glEnable(GL_LINE_STIPPLE);
	    glLineStipple(1, 0x3f07);
	    glBegin(GL_LINES);
		glVertex3f(-1.0, -1.0, 0.0);
		glVertex3f(3.1, 4.0, 0.0);
	    glEnd();
	    glEnable(GL_POLYGON_STIPPLE);
	    glutSolidCube(3.14);
	    glBegin(GL_TRIANGLES);
		glVertex3f(-2.7, -2.7, 0.0);
		glVertex3f(2.7, -2.7, 0.0);
		glVertex3f(0.0, 2.7, 0.0);
	    glEnd();*/
	    //---------
	    glEnableClientState(GL_NORMAL_ARRAY);
	    glEnableClientState(GL_VERTEX_ARRAY);
	    //-----------------------------
	    vector<b> Lua {1, 2, 13, 23, 17, 11};
	    ska<b> skab;
	    skab = std::for_each(Lua.begin(), Lua.end(), skab);
	    g ego[108];
	    b big = 0;
	    for_each(Lua.begin(), Lua.end(), [&big] (b bLs) {big += bLs;} );
	    sprintf(ego, "%d:%d", big, skab.To);
	    //rbs3(-0.7, -0.3, -0.7, (void *)font, ego);
	    //[]()->void { rbs3(-3.7, 3.3, 0.0, (void *)font, "31415");}();

	    //--------------------------
	    //glLoadIdentity();
	    glMatrixMode(GL_MODELVIEW);
	    glPushMatrix();
	    glTranslatef(cos(pgia), sin(pgia), 0.0);
	    //glutSolidSphere(0.3, 21, 21);
	    glPopMatrix();
	    glMatrixMode(GL_PROJECTION);
	    glLoadIdentity();
	    //gluLookAt(0.0, 0.0, 0.0, 0.0, 0.0, -3.0, 0.0, 1.0, -1.0); 
	    if(bpa == 1){
	    gluLookAt(0.0, 0.0, 0.3, 
		      cos(pgia), sin(pgia), -3.0, 
		      cos(pgia), sin(pgia), -1.0); 
	    }
	    glOrtho(_n2pi, _2pi, _n2pi, _2pi, _n2pi, _2pi);
	    //--------------------------

	}//L
	if(go == 'o'){
	    a aL;
	    aL.iego(egku);
	    aL.iboLn(93);
	    aL.iboLd(78);
	    aL.iego(egku);
	}//o
    }//switch for_x
    //------------------------------
    if(pgia > _2pi){
	pgia = _n2pi;
    }
    p ps = sin(pgia);
    p pc = cos(pgia);
    p pT = kufa(ps, pc);
    p pdpii = pdpia * 10.0;
    glPointSize(5.0);
    glBegin(GL_POINTS);
	glVertex3f(pgia, ps, 0.0);
	glVertex3f(pgia, pT, 0.0);
	glVertex3f(pgia, sin(kufa(1.0, pgia)), 0.0);
    glEnd();
    glPointSize(1.0);
    pgia += pdpii;

    //-----------------------------
    //glutWireSphere(0.27, 23, 23);
    //---------------------
    delete uobpaL;
    delete uobpaa;
    delete uge;
    delete uga;
    glutSwapBuffers();
}//nmgmLogtL
//--------------------------------------------
//void kaugega(g* ugTaLa, g* ugTaLe, g* ugSaa, g egTaLu[]);
void kaugegb(g* ugTaLa, g* ugTaLe, g* ugSaa, g egTaLu[]){
    b bio = 0;
    b bLa = sL(ugTaLa);
    b bLe = sL(ugTaLe);
    if(bLa > bLe){
	bio = sL(ugTaLa) + 2;
    } else {
	bio = sL(ugTaLe) + 2;
    }
    //-----------
    b ebgTaLa[bio];
    b ebgTaLe[bio];
    mugebg(ugTaLa, ebgTaLa);
    mugebg(ugTaLe, ebgTaLe);
    rebgL(ebgTaLa);
    rebgL(ebgTaLe);
    b bug;
    if(strlen(ugTaLa) > strlen(ugTaLe)){
	bug = strlen(ugTaLe);
	for(b bia = 0; bia < (strlen(ugTaLa) - strlen(ugTaLe)); bia++){
	    ebgTaLe[bug] = ugSaa[0];
	    bug++;
	}
	ebgTaLe[bug] = '\0';
    } else if(strlen(ugTaLe) > strlen(ugTaLa)){
	bug = strlen(ugTaLe);
	for(b bia = 0; (bia < (strlen(ugTaLe) - strlen(ugTaLe)));bia++){
	    ebgTaLa[bug] = ugSaa[0];
	    bug++;
	}
	ebgTaLa[bug] = '\0';
    }
    //------------------- 
    b boeL 		= gLeb(ebgTaLa);
    ebgTaLa[boeL]	 = ugSaa[0];
    ebgTaLa[boeL + 1] 	= '\0';
    boeL 		= gLeb(ebgTaLe);
    ebgTaLe[boeL]	= ugSaa[0];
    ebgTaLe[boeL + 1]   = '\0';

    b biz = 0;
    b boe = gLeb(ebgTaLa);
    b bgoa = ugSaa[0];
    b bua;
    b bcf = 0;
    while(biz < boe){
	bua = ka(igug(ebgTaLa[biz], ugSaa), igug(ebgTaLe[biz], ugSaa));
	bua = Ta((bua + bcf), strlen(ugSaa));
	egTaLu[biz] = ugSaa[bua];
	if(ka((ka(igug(ebgTaLa[biz], ugSaa), igug(ebgTaLe[biz], ugSaa))), bcf) >= strlen(ugSaa)){
	    bcf = 1;
	} else {
	    bcf = 0;
	}

	biz++;
    }
    egTaLu[biz] = '\0';
    regL(egTaLu);
}//kaugegb

//-------------------------------------------- 

//-----------------------------------
static void LicT(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0, 0.0, 1.0);
        //-------------------
    struct tm* uiLTa;
    time_t iLTa;
    iLTa = time(nullptr);
    uiLTa = localtime(&iLTa);
    b bsc = iLTa;
    bsc = Ta(bsc, 86400);

    obp* uobpaL = new obp(23, bsc, 86400);
    
    char* uga   = new char[uobpaL->oso().length() + 1];
    strcpy(uga, uobpaL->oso().c_str());
    rbs3(-0.9, -0.9, -0.9, (void *)font, uga);
    //------------------------------------------------
    b ebkuu[108];
    b ebTaa[108];
    b biis = 108;
    b biN  = 22;
    b biiTa =  _a77(ebTaa, ebkuu, biis, 22, bsc, 86400);

    //------------------------------------------------
    obpa* uobpaa = new obpa(36, "0123456789abcdefghijkLmnopqrsTuvwxyz");

    char* uge 	= new char[uobpaa->oso().length() + 1];
    uobpaa->iba(bsc);
    uobpaa->ibz(86400);
    uobpaa->ibi(37);
    uobpaa->_kuu();
    uobpaa->_iso();
    strcpy(uge, uobpaa->oso().c_str());
    rbs3(-0.9, 0.9, -0.9, (void *)font, uge);
    //--------------------------------
    //glutSolidSphere(0.377, 23, 23);
    //--------------------------------
    GLfloat gray[] = {0.75, 0.75, 0.75, 1.0};
    GLfloat specref[] = {1.0, 1.0, 1.0, 1.0};
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, gray);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    glMaterialfv(GL_FRONT, GL_SPECULAR, specref);
    glMateriali(GL_FRONT, GL_SHININESS, 7);
    glMaterialfv(GL_BACK, GL_AMBIENT_AND_DIFFUSE, gray);
    glColor3f(0.0, 0.0, 0.67);
    //glutSolidSphere(0.37, 22, 22);
    glColor3f(1.0, 1.0, 0.0);
    //glutWireSphere(0.6, 36, 36);
    //---------------------------------
    map<string, p, less<string> > moab;
    map<string, p, less<string> >::iterator iter;
    string sSM;
    p pio;
    string eso[6] = {"vpfucnbpty", "a2155t8qn8", "szfy7ipLka",
	             "adaLao", "ozazL", "bobotub"};
    p epo[6] = {0.1967, 0.1976, 0.2121, 0.718, 0.666, 0.93};
    for(b bia = 0; bia < 6;bia++){
	sSM = eso[bia];
	pio = epo[bia];
	moab[sSM] = pio;
    }
    g ego[23];
    sprintf(ego, "%f", moab["adaLao"]);
    //rbs3(-0.9, 0.7, -0.9, (void *)font, ego);
    //--------------------------------_p
    
    vector<anz*>muanz(3);
    g eegLa[3][108] = { "ozazL", "adbiLenLa", "nQnQ"};
    muanz[0]  = new anz(eegLa[0]);
    muanz[1]  = new anz(eegLa[1]);
    muanz[2]  = new anz(eegLa[2]);

    muanz[0]->ioTi(-0.76, -0.16, 0.0, -0.56, -0.16, 0.0, -0.40, 0.36, 0.0);
    glColor3f(0.6, 0.6, 0.6);
    //muanz[0]->oTian.doTi();
    b bias = 0;
    while(bias < 3){
	delete muanz[bias];
	bias++;
    }
    //-----------------------------------------------
    g eegLe[3][108] = { "ozazL", "adaLao", "bobotub"};
    anz* uanzLa = new anz(eegLe[0]);
    uanzLa->ioTi(-0.6, -0.6, 0.0, 0.6, -0.6, 0.0, 0.0, 0.6, 0.0);
    //glEnable(GL_COLOR_MATERIAL);
    glColor3f(0.0, 1.0, 0.0);
    /*glBegin(GL_TRIANGLES);
	glVertex3f(-0.23, 0.0, 0.0);
	glVertex3f(-0.6, 0.0, 0.0);
	glVertex3f(-0.5, 0.3, 0.0);
    glEnd();*/
    glColor3f(0.0, 0.0, 1.0);
    //uanzLa->oTian.doTi();
    delete(uanzLa);
    //-------------------------------
    string esuM[3] = {"nQnQ", "VPFUCNBPTY", "SZFY7IPlKA"};
    map<string,b>mpLa = {{esuM[0], 144},
	                 {esuM[1], 1967},
		         {esuM[2], 1976}}; 
    sprintf(uge, "%d", mpLa[esuM[0]]);
    //rbs3(-0.9, 0.5, 0.0, (void *)font, uge);
    //--------------------------------
    anz anzaL(eegLe[0]);
    anz anzaM(eegLe[1]);
    anzaL.ibo(93);
    anzaM.ibo(718);
    if(anzaL < anzaM){
	//anzaL.ds(-0.6, -0.6, -0.6, 0.27, 21, 21);
    }
    //--------------------------------
    anz* euanz[1];
    euanz[0] = new anz(eegLa[1]);
    vector<p> mpa = {0.23, 0.0, 0.0};
    euanz[0]->ioTi(mpa[0], mpa[1], mpa[2], 0.6, 0.0, 0.0, 0.4, 0.4, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    //euanz[0]->oTian.doTi();
    //---------------------------------
    glRasterPos3f(-0.9, -0.5, 0.0);
    //glDrawPixels(checkImageWidth, checkImageHeight, GL_RGB,
		    //GL_UNSIGNED_BYTE, checkImage);

    //myPixmap.render();
    px += pxi;
    if(px > 1.0){ pxi = (pxi * -1.0);}
    if(px < -1.0){ pxi = (pxi * -1.0);}
    Pixmapa myPixmapa;
    glRasterPos3f(px, 0.6, 0.0);
    myPixmapa.render();
    //--------------------------------
    b bpxa, bpia;
	//glTranslatef(0.4, 0.4, 0.4);
        //euanz[0]->ds(0.4, 0.4, 0.4, 0.23, 22, 22);
	//glRotatef(-10.0, 1.0, 1.0, 1.0);
	pxa = (0.6 * cos(ptaL)); bpxa = (10000 * pxa);
	pia = (0.6 * sin(ptaL)); bpia = (10000 * pia);
	pza = 0.0;
	ptaL -= dptaL;
	if(ptaL <= 0.0){
	    ptaL = (2 * 3.14159);
	}
	glPushMatrix();
	    glTranslatef(pxa, pia, pza);
	    glutWireSphere(0.23, 23, 23);
	glPopMatrix();

    b biiM = 13;
    b ebTa[biiM];
    b ebku[biiM];
    //-------------------------------
    struct timeval time_now{};
    gettimeofday(&time_now, nullptr);
    b bTN = (time_now.tv_sec * 1000) + time_now.tv_usec;
    b biaTaa = _a77(ebTa, ebku, biiM, 22, bTN, 86400000);
    biaTaa = _a77(ebTa, ebku, biiM, 22, ebTa[6], ebTa[7]);
    ebku[0] = Ta(ebku[0], 22);
    //b biaTaa = _a77(ebTa, ebku, biiM, 22, a5(bpxa), a5(bpia));
    //-------------------------------
    ebku[0]  = Ta(ebku[0], 22);
    p eppa[biaTaa - 1];
    b boa = 0;
    p pia = 1.0;
    g egTa[108];
    sprintf(egTa, "%d:%d", ebTa[6], ebTa[7]);
    //rbs3(0.0, -0.8, 0.0, (void *)font, egTa);
 
    g egSaa[] = "abgdeuzctikLmnsopxqrST";
    g egku[biiM + 1];
    b biegku = 0;
    while(biegku < (biiM - 0)){
	egku[biegku] = egSaa[ebku[biegku]];
	biegku++;
    }
    egku[biegku] = '\0';
     rbs3(-0.7, -0.7, -0.7, (void *)font, egku);

     //------------------------------------

    while(boa < (biaTaa - 2)){
	eppa[boa] = (1.0 * (0.1 * (1.0 * (float) ebTa[boa] / (float) ebTa[boa + 1])));
       	if(ebku[boa] < ebku[boa + 1]){pia = -1.0; } else { pia = 1.0; }
	//if(pia < 0.0){glRotatef(-0.1, 1.0, 1.0, 1.0);}
	eppa[boa] *= pia;
	boa++;
    } 
    glBegin(GL_TRIANGLE_STRIP);
	b boaa = 0;
	while(boaa < (biaTaa - 3)){
	    glColor3f(eppa[boaa], eppa[boaa + 1], eppa[boaa + 2]);
	    glVertex3f(eppa[boaa], eppa[boaa + 1], eppa[boaa + 2]);
	    glNormal3f(eppa[boaa], eppa[boaa + 1], eppa[boaa + 2]);
	    boaa++;
	}
    glEnd();
    //-------------------------------------_q
    biegku = 0;
    g go;
    g egiL[108];
    while(biegku < biiM){
	go = egku[biegku];
	if(go == 'o'){
	    o oL(egku, 93);
	    oz ozLa(718); 
	    b baa = ozLa.obo();
	    fstream psioLa("o_av5", ios::in | ios::out | ios::app | ios::binary);
	    psioLa.close();
	    fstream psioLe("o_av5", ios::in | ios::out | ios::binary);
                psioLe.seekg(ozLa.obo());
		psioLe.read((char*) &egiL, 108);
		egiL[psioLe.gcount() - 1] = '\0';
		ozLa.ieg(egiL);
		//rbs3(-0.9, -0.5, -0.7, (void *)font, egiL);
	    psioLe.close();
	    ozLa.ieeg();
	    ////rbs3(-0.7, 0.3, -0.7, (void *)font, ozLa.oeegi(0));
	}//o
	if(go == 'z'){
	    glCallList(startList); //gluSphere
	   //--------------------------_s 
	    g egiLa[109];
	    fstream psioLe("o_av5", ios::in | ios::out | ios::binary);
                psioLe.seekg(euozL[0]->obo());
		psioLe.read((char*) &egiLa, 109);
		egiLa[psioLe.gcount() - 1] = '\0';
		euozL[0]->ieg(egiLa);

		//rbs3(-0.9, -0.5, -0.7, (void *)font, egiL);
	    psioLe.close();
	    euozL[0]->ieeg();
	    g eguS[108];
	    //sprintf(eguS, "%d", strlen(euozL[0]->oeg()));
            rbs3(-0.7, 0.3, -0.7, (void *)font, euozL[0]->oeegi(11));
	}//z
	if(go == 'a'){
	    b biz = 0;
	    glBegin(GL_LINE_STRIP);
	        for(biz = 0;biz <= 30; biz++){
		    glEvalCoord1f((GLfloat) biz/30.0);
		}
	    glEnd(); 
	    glPointSize(5.0);
	    glBegin(GL_POINTS);
		for(biz = 0; biz < 4; biz++){
		    glVertex3fv(&ctrlPoints[biz][0]);
		}
	    glEnd();
	    glPointSize(1.0);
	}//a
	if(go == 'L'){
            LTi LTia(-0.78, -0.78, 0.0); 
	    LTi LTie(0.78, -0.78, 0.0);
            LTi LTiu(0.0, 0.5, 0.0);  
	    eLTi eLTia(LTia, LTie, LTiu);
	    //eLTia.deLTi();
	}//L
	if(go == 'm'){
	    bLegku = strlen(egku);
            b bii = 0;

	    /*while(bii < bLegku - 2){
		if((egku[bii] == 'a')){
			if(egku[bii + 1] == 'L'){ bpo = bpo * -1; glClearColor(1.0, 0.0, 0.0, 1.0);}
		}
	        bii++;
	    }*/
	    //g egiL[3] = "aL";
	    egiL[0] = 'a'; egiL[1] = 'L'; egiL[2] = '\0';
	    string soL = egku;
	    if(esoegi(soL, egiL) == 1){bpo *= -1;}
	    if(bpo == 1){
		//glClearColor(1.0, 1.0, 1.0, 1.0);
	    } else {
		glClearColor(0.0, 0.0, 0.0, 1.0);
	    }
	    //rbs3(0.7, 0.0, 0.0, (void *)font, egku);
	    bLegku = strlen(egku);
	    //spin = 10.0;
	    

	    for(b bii = 0; bii < (bLegku - 2); bii++){
		  //rbs3(0.7, 0.0, 0.0, (void *)font, egku);

		   if((egku[bii] == 's') && (egku[bii + 1] == 't') ) {
		       spin = (spin == 0.0) ? -10.0 : 0.0;
		       spin = spin * (float) bpo;
		       //glClearColor(1.0, 0.0, 0.0, 1.0);
		       if(0 == 1){
		           sprintf(egbpr, "%f", spin);
		           rbs3(-0.3, -0.3, -0.3, (void *)font, egbpr);
		       }
		   }
	    }
	    egiL[0] = 's'; egiL[1] = 't';
	    soL = egku;
	    //if(esoegi(soL, egiL) == 1){ glClearColor(1.0, 0.0, 0.0, 0.0);}
	   	 /*if(egoegi(egku, egiL) == 1){
		spin = (spin == 0.0) ? -10.0 : 0.0;
		spin = spin * (float) bpo;
		if(spin == -10.0){
		    sprintf(egbpr, "%f", spin);
		    rbs3(-0.3, -0.3, -0.3, (void *)font, egbpr);
		}
	    }*/
		//sprintf(egbpr, "%f", spin);
		    //rbs3(-0.3, -0.3, -0.3, (void *)font, egbpr);

            glRotatef(spin, 1.0, 1.0, 1.0);
	}//m
	if(go == 'n'){
		//rbs3(-0.7, 0.3, -0.7, (void *)font, euozL[0]->oeegi(11));
	//soLa = euozL[0]->oeegi(11);
	/*soLa = egku;
        egiL[0] = 'n'; egiL[1] = 'm';
        if(esoegi(soLa, egiL) == 1){
	    //glClearColor(1.0, 0.0, 0.0, 1.0);
	}*/	

	}//n
        biegku++;
     }//while
     
     //------------------------------
     //NURBS
     b i, j;
     glPushMatrix ();
     glRotatef(85.0, 1.0, 1.0, 1.0);
     //glTranslatef(-0.7, 0.7, 0.3);
     //glScalef(0.3, 0.3, 0.3);
     for (j = 0; j <= 8; j++) {
         glBegin(GL_LINE_STRIP);
         for (i = 0; i <= 30; i++)
             glEvalCoord2f((GLfloat)i/30.0, (GLfloat)j/8.0);
         glEnd();
      glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 30; i++)
          glEvalCoord2f((GLfloat)j/8.0, (GLfloat)i/30.0);
      glEnd();
    }
    glPopMatrix ();
    //rbs3(-0.3, -0.3, 0.0, (void *)font, eguS);

    //--------------------------------
    b bii = 0;
    b* ubTa = uobpaL->oubTa();
    b biaTa = uobpaL->obiaTa();
    //------------------------
    opp* uoppLa = new opp(biaTa - 1);
    float po = 1.0;
    b biez = 0;
    while(biez < (biaTa - 2)){
        if(ubTa[biez] < ubTa[biez + 1]){ po = -1.0; } else { po = 1.0; }
        uoppLa->ac(biez) = (0.3 * (1.0 - (po *((float)ubTa[biez] / (float)ubTa[biez + 1]))));
        biez++;
    }
    b bia;
    /*
    glBegin(GL_TRIANGLE_STRIP);
        for(bia = 0; bia < (biaTa - 3);bia++){
	    glColor3f(uoppLa->ac(bia), uoppLa->ac(bia + 1), uoppLa->ac(bia + 2));
	    glNormal3f(uoppLa->ac(bia), uoppLa->ac(bia + 1), uoppLa->ac(bia + 2));
	    glVertex3f(uoppLa->ac(bia), uoppLa->ac(bia + 1), uoppLa->ac(bia + 2));
	}
    glEnd();*/
    //glRotatef(spin, 1.0, 1.0, 1.0);
    //------------------------------ 
    while(bii < strlen(uga)){
	if(uga[bii] == 'a'){
	   // spin = spin * -1.0;
	}
        bii++;
    }
    /*b* ubTa = uobpaL->oubTa();
    b biaTa = uobpaL->obiaTa();*/

    //-------------------------------- 
    delete(uoppLa);
    delete(euanz[0]);
    delete(uge);
    delete(uobpaa);
    delete(uobpaL);
    delete(uga);
    //---------------------------------
    glutSwapBuffers();
}//LicT

static void TciL(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    //-------------------
    opp* uoppL = new opp(23);
    (*uoppL)[0] = 0.12;   
    uoppL->ac(1) = 0.666;
    delete(uoppL);
    //-------------------
    struct tm* uiLTa;
    time_t iLTa;
    iLTa = time(nullptr);
    uiLTa = localtime(&iLTa);
    b bsc = iLTa;
    bsc = Ta(bsc, 86400);

    obp* uobpaL = new obp(23, bsc, 86400);
    char* uga 	= new char[uobpaL->oso().length() + 1];
    strcpy(uga, uobpaL->oso().c_str());
    rbs3(-0.9, -0.9, -0.9, (void *)font, uga);

        //-------------------------------
        b bis   = 0;
        bLegLob = strlen(uga);
        while(bis < bLegLob){
	    egLob[bis] = uga[bis];
	    bis++;
        }	  
        egLob[bis] = '\0';	
    //-------------------------------
    obpa* uobpaa = new obpa(36, "0123456789abcdefghijkLmnopqrsTuvwxyz");

    char* uge 	= new char[uobpaa->oso().length() + 1];
        uobpaa->iba(bsc);
	uobpaa->ibz(86400);
	uobpaa->ibi(37);
	uobpaa->_kuu();
	uobpaa->_iso();
        strcpy(uge, uobpaa->oso().c_str());
	char eg[108];
	//sprintf(eg, "%ud", uobpaa->oso().length());
	 rbs3(-0.9, 0.9, -0.9, (void *)font, uge);
    delete(uge);
    delete(uobpaa);
    //------------------------------------------
    b* ubTa = uobpaL->oubTa();
    b biaTa = uobpaL->obiaTa();
    b biez = 0;

    opp* uoppLa = new opp(biaTa - 1);
    float po = 1.0;
    while(biez < (biaTa - 2)){
        if(ubTa[biez] < ubTa[biez + 1]){ po = -1.0; } else { po = 1.0; }
        uoppLa->ac(biez) = (0.3 * (1.0 - (po *((float)ubTa[biez] / (float)ubTa[biez + 1]))));
        biez++;
    }
    b bia;
    glBegin(GL_TRIANGLE_STRIP);
        for(bia = 0; bia < (biaTa - 3);bia++){
	    glColor3f(uoppLa->ac(bia), uoppLa->ac(bia + 1), uoppLa->ac(bia + 2));
	    glNormal3f(uoppLa->ac(bia), uoppLa->ac(bia + 1), uoppLa->ac(bia + 2));
	    glVertex3f(uoppLa->ac(bia), uoppLa->ac(bia + 1), uoppLa->ac(bia + 2));
	}
    glEnd();
    glRotatef(spin, 1.0, 1.0, 1.0);
    //-------------------
    g egiLe[108];
    //rbs3(-0.9, 0.9, -0.9, (void*)font, "31415");
    //------------------
    p pae = 0.27;
    Less_than<p>pau{0.36};
    bool b1 = pau(0.11); 
    if(b1){
        glutWireSphere(0.63, 23, 23);
    }
    iLp eiLp[3];  
    eiLp[0].iep(-0.78, 0.78, 0.0);
    eiLp[1].iep(-0.5, 0.78, 0.0);
    eiLp[2].iep(-0.6, 0.93, 0.0);
    const GLfloat epLa[] = {0.6, 0.93, 0.0};
    const GLfloat* uepLa = epLa;
    glBegin(GL_TRIANGLES);
        glVertex3f(eiLp[0][0], eiLp[0][1], eiLp[0][2]);
	glVertex3f(eiLp[1][0], eiLp[1][1], eiLp[1][2]);
	glVertex3f(eiLp[2][0], eiLp[2][1], eiLp[2][2]);
    glEnd();
    //------------------
    oTi oTiL; 
    oTiL[0][0]	= 0.78;
    oTiL.iiLp(0, 0.78, 0.78, 0.0);
    oTiL.iiLp(1, 0.58, 0.78, 0.0);
    oTiL.iiLp(2, 0.68, 0.38, 0.0);
    oTiL.doTi();
    iLp iLpo = oTiL[0];
    //------------------
    g* ugLa;
    ugLa = new g[23];
    strcpy(ugLa, egod);
    delete [] ugLa;
    //------------------
    glColor3f(1.0, 1.0, 1.0); //NURBS
    glBegin(GL_LINE_STRIP);
      for (b i = 0; i <= 30; i++) 
         glEvalCoord1f((GLfloat) i/30.0);
    glEnd();
   /* The following code displays the control points as dots. */
    glPointSize(5.0);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POINTS);
      for (b i = 0; i < 4; i++) 
         glVertex3fv(&ctrlpoints[i][0]);
    glEnd();
    //------------------
//_oza:
    g eganiLa[23] = "adaLao";
    ani aniLa(eganiLa);
    aniLa.ibo(718);
    aniLa.ioTi(-0.63, -0.63, 0.0, 0.63, -0.63, 0.0, 0.0, 0.63, 0.0); 
    aniLa.oTian.doTi();
    g eganoLa[23] = "bobotub";
    ano anoLa(eganoLa);
    anoLa.ibo(93);
    g eganzLa[23] = "ozazL";
    anz anzLa(eganzLa);
    g egadaL[23] = "adbiLenLa";
    anzLa.ieg(egadaL);
    anzLa.ibo(666);
    g egu[108];
    aniLa + 23;
    sprintf(egu, "%s:%d %s:%d %s:%d", eganiLa, aniLa.obo(), anzLa.oeg(), 
		    anzLa.obo(), eganoLa, anoLa.obo());
    rbs3(-0.9, -0.7, -0.9, (void *)font, egu);
    anzLa.ds(-0.6, -0.6, -0.6, 0.34, 23, 23);
    anzLa.ds(0.6, 0.6, 0.6, 0.34, 23, 23);
    //-------------------
    b biaa = 0;
    while(biaa < strlen(uga)){
	switch(uga[biaa]){
	    case 'a':
		anzLa.ds(uoppLa->ac(0),  uoppLa->ac(1), uoppLa->ac(2), 
			 0.17, 23, 23);
		break;
	    case 'b':
		ifstream ips("ozmsg");
		g egna[108] = "31415";
		ips >> egna;
		ips.close();
		rbs3(-0.75, 0.5, -0.5, (void*)font,  egna);
		break;
	} //switch
	if(uga[biaa] == 'g'){
	    g egra[4] {'2', '3', '0', '\0'};
	    egra[2] = kaza(egra[0], egra[1]);
            rbs3(0.6, 0.6, 0.6, (void *)font, egra);
	} else if(uga[biaa] == 'd'){
	    spin = (spin == 0.0) ? -10.0 : 0.0;
	    p pt, px, pi, pz;
	    pt = 0.0;
	    glEnable(GL_TEXTURE_1D);
	    glBegin(GL_QUAD_STRIP);
	    while(pt <= 3.14159){
	        px = cos(pt);
		pi = sin(pt);
	        pz = 0.0;
		glTexCoord1f(0.0);
		glVertex3f(px, pi, pz);

		px = cos(pt) * 0.67;
		pi = sin(pt) * 0.67;
		pz = 0.0;
		glTexCoord1f(1.0);
		glVertex3f(px, pi, pz);

		pt += (0.03125 * 3.14159);
	    }
	    glEnd();
	}
	//------------------------
	    biaa = kaza(biaa, 1);
   	    //biaa++;
	}/// while

    //-------------------
    delete(uoppLa);
    delete(uobpaL);
    delete(uga);
    glutSwapBuffers();
} //TciL
//------------------------------------------------ 
//------------------------------------------------
static void ixe(void){
	//g  egLob[108];
        //b  bLegLob = 108;
        //b  biaL = 0;
    if(biaL == bLegLob){ biaL = 0; }
    switch(egLob[biaL]){
        case 'a':
	    break;

    }
    biaL++;
    //------------------------------------
    glutPostRedisplay();
}

static void keyboard(unsigned char key, int x, int y){
    /*fstream outfile("oz.txt", ios::out | ios::app);
	if(key == '\n'){
	    outfile << endl;
	}
	outfile << key;
    outfile.close();*/
    /*FILE* up;
    up = fopen("oz.txt", "a+");
    fprintf(up, "%c", key);
    fclose(up);*/
    switch(key){
         case 'a':
             glutIdleFunc(ixe);
             break;
         case 'n':
             glutIdleFunc(NULL);
             break;
	 case 's':
	     spin = (spin == 0.0) ? -10.0 : 0.0;
	     break;
	 case 'x':
	     pxs = (pxs == 0.0) ? 1.0 : 0.0;
	     break;
	 case 'i':
	     pis = (pis == 0.0) ? 1.0 : 0.0;
	     break;
	 case 'z':
	     pzs = (pzs == 0.0) ? 1.0 : 0.0;
	     break;
	 case 'b':
	     pzs = 1.0;
	     pxs = 1.0;
	     pis = 1.0;
	     break;
	 case 'p':
	     bpa = (bpa == 1) ? 0 : 1;
	     break;
    }
}

b main(b argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow(argv[0]);
    nob();
    glutIdleFunc(ixe);
    glutDisplayFunc(nmgmLogtL);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return(0);


}
