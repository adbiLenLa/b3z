/*
 *	11aooeLp/3bu:johndavidjones:vanhavaasa:::
 *
 *	zer0_p0int solution written in c
 *	copyright 2021, john david jones
 */
/* -------------------------------------------------------- */
/* -------------------------------------------------------- */
int a0b(int a0bLa, int a0bLe);
int Ta(int gaLa, int gaLe);
int a1(int a1La, int a1Le);
int a2(int a2La, int a2Le);
int a2b(int a2bLa, int a2bLe);
int a3(int a3La, int a3Le);
int a5(int a5La);
double a5d(double a5da);
int pi(int piLa);
int ka(int kaga, int kage);
float kafa(float kafaa, float kafae);
double kada(double kadaa, double kadae);
int pa(int paga, int page);
float pafa(float pafaa, float pafae);
double pada(double padaa, double padae);
int Ti(int Tiga, int Tige);
int ku(int kuga, int kuge);
float kufa(float kufaa, float kufae);
double kuda(double pudaa, double pudae);
int pu(int puga, int puge);
float pufa(float pufaa, float pufae);
double puda(double pudaa, double pudae);
int a7b(int a7bLa, int a7bLe);
int _a77(int egoTa[], int egoku[], int aLiTr, int aLbn, int aLxn, int aLxd);
int _a77L(int egoTa[], int egoku[], int aLiTr, int aLbn, long long aLxn, long long aLxd);
int a8(int a8La, int a8Le);
/* -------------------------------------------------------- */

/* -------------------------------------------------------- */
int a0b(int a0bLa, int a0bLe){
    int aLiaa0b		= 1;
    int aLuaa0b		= 0;
     if(a0bLa		< 0){
	aLiaa0b		= a8(0, aLiaa0b);
	a0bLa		= a8(0, a0bLa);
     }
     if(a0bLe 		< 0){
	aLiaa0b		= a8(0, aLiaa0b);
	a0bLe		= a8(0, a0bLe);
     }
     if(a0bLe		== 0){
	aLuaa0b		= a2b(aLiaa0b, a0bLa);
     } else {
	aLuaa0b		= a2b(aLiaa0b, (a0bLa % a0bLe));
     }
 return(aLuaa0b);
}/* a0b */
int Ta(int gaLa, int gaLe){
    int goa	= a0b(gaLa, gaLe);
 return(goa);
}/* Ta */
int a1(int a1La, int a1Le){
	/* ---- */
    int aLua1	= (a1La + a1Le);
 return(aLua1);
}/* a1 */
int a2(int a2La, int a2Le){
    int	aLiaa2	= 1;
    int aLuaa2	= 0;
     if(a2La	<0){
	a2La	= a8(0, a2La);
	aLiaa2	= a8(0, aLiaa2);
     }
     if(a2Le	< 0){
	a2Le	= a8(0, a2Le);
	aLiaa2	= a8(0, aLiaa2);
     }
     int eLia2[3]	= {0, a2Le, 1};
   while(eLia2[0]	< eLia2[1]){
	aLuaa2		= a1(aLuaa2, a2La);
	eLia2[0]	= a1(eLia2[0], eLia2[2]);
   }
     if(aLiaa2	< 0){
	aLuaa2	= a8(0, aLuaa2);
     }
 return(aLuaa2);
}/* a2 */
int a2b(int a2bLa, int a2bLe){
    int	aLuaa2b	= (a2bLa * a2bLe);
 return(aLuaa2b);
}/* a2b */
int ka(int kaga, int kage){
    int goka 	= (kaga + kage);
 return(goka);
}/* ka */
int a3(int a3La, int a3Le){
    int	aLua3	= a7b(a3La, a3La);
    int eLia3[3]	= {0, a3Le, 1};
  while(eLia3[0] 	< eLia3[1]){
	aLua3		= a2b(aLua3, a3La);
	eLia3[0]	= a1(eLia3[0], eLia3[2]);
  }
 return(aLua3);
}/* a3 */
float kafa(float kafaa, float kafae){
  float	fokafa	= (kafaa + kafae);
 return(fokafa);
}/* kafa */
double kada(double kadaa, double kadae){
    return(kadaa + kadae);
}/* kada */
int pa(int paga, int page){
    int	gopa	= (paga * page);
 return(gopa);
}/* pa */
float pafa(float pafaa, float pafae){
  float	fopafa	= (pafaa * pafae);
 return(fopafa);
}/* pafa */
double pada(double padaa, double padae){
    return(padaa * padae);
}/* pada */
int Ti(int Tiga, int Tige){
    int	goTi	= ku(Tiga, Tiga);
    int egiLa[3]	= {0, Tige, 1};
  while(egiLa[0] < egiLa[1]){
	goTi	= pa(goTi, Tiga);
	egiLa[0]	= ka(egiLa[0], egiLa[2]);
  }/* while */
 return(goTi);
}/* Ti */
int ku(int kuga, int kuge){
    int	goku;
     if(kuge	== 0){
	goku	= 0;
     } else {
	goku	= (kuga / kuge);
     }
 return(goku);
}/* ku */
int a5(int a5La){
    int eo[4];
    eo[0] = a2b(-2, ku(a5La, a5La));
    eo[0] = a2b(eo[0], ku(pu(1, a5La), ka(1, a5La)));
    eo[0] = a7b(eo[0], ku(pu(1, a5La), ka(1, a5La)));
    eo[1] = 1;
    eo[2] = a2b(-2, ku(pu(2, ku(ka(a5La, 1), ka(a5La, 1))), 2));
    eo[3] = ka(eo[0], ka(eo[1], eo[2]));
    return(pa(a5La, eo[3]));
}/* a5 */
double a5d(double a5da){
    int eo[4];
    eo[0] = a2b(-2, ku(a5da, a5da));
    eo[0] = a2b(eo[0], ku(pu(1, a5da), ka(1, a5da)));
    eo[0] = a7b(eo[0], ku(pu(1, a5da), ka(1, a5da)));
    eo[1] = 1;
    eo[2] = a2b(-2, ku(pu(2, ku(ka(a5da, 1), ka(a5da, 1))), 2));
    eo[3] = ka(eo[0], ka(eo[1], eo[2]));
    return(pa(a5da, eo[3]));
}/* a5 */
float kufa(float kufaa, float kufae){
  float	fokufa;
     if(kufae	== 0){
	fokufa	= 0;
     } else {
	fokufa	= (kufaa / kufae);
     }
 return(fokufa);
}/* kufa */
int pu(int puga, int puge){
    int	gopu	= (puga - puge);
 return(gopu);
}/* pu */
float pufa(float pufaa, float pufae){
  float	fopufa	= (pufaa - pufae);
 return(fopufa);
}/* pufa */
double puda(double pudaa, double pudae){
    return(pudaa - pudae);
}/* puda */
double kuda(double kudaa, double kudae){
    if(kudae == 0){
	return(0.0);
    }
    return(kudaa / kudae);
}/* kuda */
int a7b(int a7bLa, int a7bLe){
    int aLuaa7b	= 0;
    int aLiaa7b = 1;
     if(a7bLa < 0){
	a7bLa	= a8(0,a7bLa);
	aLiaa7b	= a8(0, aLiaa7b);
     }
     if(a7bLe 	< 0){
	a7bLe	= a8(0,a7bLe);
	aLiaa7b	= a8(0, aLiaa7b);
     }
     if(a7bLe	== 0){
 return(0);
     } else {
	aLuaa7b	= (a7bLa / a7bLe);
	aLuaa7b	= a2b(aLuaa7b, aLiaa7b);
     }
  return(aLuaa7b);
}/* a7b */
double a7d(double a7da, double a7de){
    if(a7de == 0.0){
	return(0.0);
    }
    return(a7da / a7de);
}/* a7d*/
int _a77(int egoTa[], int egoku[], int aLiTr, int aLbn, int aLxn, int aLxd){
    int eLia[3]         = {0, aLiTr, 1};
    int eLie[3]         = {0, -1, 1};
    int aLi             = 0;
  while(eLia[0]         < eLia[1]){
        aLi             = 0;
  while(aLxn            < aLxd){
        aLxn            = a2b(aLxn, aLbn);
        aLi             = a1(aLi, 1);
     if(aLi             > 1){
     if(eLia[0]		< eLia[1]){
        egoku[eLia[0]]  = 0;
        eLia[0]         = a1(eLia[0], eLia[2]);
     if(eLia[0]		== eLia[1]){
	return(eLie[0]);
     }
     } else {
 return(eLie[0]);
     }
     }/* if */
  }/* while */
  if(eLia[0] == eLia[1]){
	return(eLie[0]);
  }
        egoku[eLia[0]]  = a7b(aLxn, aLxd);
        aLxn            = a0b(aLxn, aLxd);
        egoTa[eLie[0]]  = aLxn;
        eLia[0]         = a1(eLia[0], eLia[2]);
        eLie[0]         = a1(eLie[0], eLie[2]);
  }
 return(eLie[0]);
}/* _a77 */
int _a77L(int egoTa[], int egoku[], int aLiTr, int aLbn, long long aLxn, long long aLxd){
    int eLia[3]         = {0, aLiTr, 1};
    int eLie[3]         = {0, -1, 1};
    int aLi             = 0;
  while(eLia[0]         < eLia[1]){
        aLi             = 0;
  while(aLxn            < aLxd){
        aLxn            = a2b(aLxn, aLbn);
        aLi             = a1(aLi, 1);
     if(aLi             > 1){
     if(eLia[0]		< eLia[1]){
        egoku[eLia[0]]  = 0;
        eLia[0]         = a1(eLia[0], eLia[2]);
     if(eLia[0]		== eLia[1]){
	return(eLie[0]);
     }
     } else {
 return(eLie[0]);
     }
     }/* if */
  }/* while */
        egoku[eLia[0]]  = a7b(aLxn, aLxd);
        aLxn            = a0b(aLxn, aLxd);
        egoTa[eLie[0]]  = aLxn;
        eLia[0]         = a1(eLia[0], eLia[2]);
        eLie[0]         = a1(eLie[0], eLie[2]);
  }
 return(eLie[0]);
}/* _a77L */
int a8(int a8La, int a8Le){
    int	aLua8	= (a8La - a8Le);
 return(aLua8);
}/* a8 */
double a8d(double a8da, double a8de){
    return(a8da - a8de);
}/* a8d */
