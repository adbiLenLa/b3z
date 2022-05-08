# 11b05/3nb:ozazL:vanhavaasa:::

exec(open('azq_zdd.py').read())

def qbLa22(si0):
    #si0 = 'aLe'
    #Lsi0 = list(si0
    bT = 0
    for ga in si0:
        bu = soL.index(ga)
        bT += bu
    return(bT)

def qbLa27(si0):
    #si0 = 'aLe'
    #Lsi0 = list(si0
    bT = 0
    for ga in si0:
        if ga == 'K': ga = 'k'
        if ga == 'M': ga = 'm'
        if ga == 'N': ga = 'n'
        if ga == 'P': ga = 'p'
        if ga == 'X': ga = 'x'
        bu = soL.index(ga)
        bT += bu
    return(bT)

def lex():
    fi0 = open('aSa_b03.dat')
    sfi0 = fi0.read()
    fi0.close()
    fo0 = open('_aSa_b03.dat', 'w')
    Lsfi0 = re.split('\n', sfi0)
    bi = 0
    bz = len(Lsfi0)
    LLu = []
    LinLu = []
    for oi in Lsfi0:
        Lu = re.split(':', oi)
        Lu[1] = qbLa22(Lu[0])
        if Lu[0] in LinLu:
            bi += 1
            continue
        LinLu.append(Lu[0])
        su = f'{Lu[0]}:{Lu[1]}:{Lu[2]}\n'
        if bi == bz - 1:
            su = f'{Lu[0]}:{Lu[1]}:{Lu[2]}'
        fo0.write(su)
        LLu.append(su)
        bi += 1
        #print(f'{Lu[0]}:{Lu[1]}:{Lu[2]}')
    fo0.close()
    return LLu
#lex()  

def lex27():
    fi0 = open('mLiM_aiub.dat')
    sfi0 = fi0.read()
    fi0.close()
    fo0 = open('_mLiM_aiub.dat', 'w')
    Lsfi0 = re.split('\n', sfi0)
    bi = 0
    bz = len(Lsfi0)
    LLu = []
    LinLu = []
    for oi in Lsfi0:
        Lu = re.split(':', oi)
        Lu[1] = qbLa27(Lu[0])
        if Lu[0] in LinLu:
            bi += 1
            continue
        LinLu.append(Lu[0])
        su = f'{Lu[0]}:{Lu[1]}:{Lu[2]}\n'
        if bi == bz - 1:
            su = f'{Lu[0]}:{Lu[1]}:{Lu[2]}'
        fo0.write(su)
        LLu.append(su)
        bi += 1
        #print(f'{Lu[0]}:{Lu[1]}:{Lu[2]}')
    fo0.close()
    return LLu

def _lex27():
    fi0 = open('mLiM_aiub.dat')
    sfi0 = fi0.read()
    fi0.close()
    fo0 = open('_mLiM_aiub.dat', 'w')
    Lsfi0 = re.split('\n', sfi0)
    bi = 0
    bz = len(Lsfi0)
    LLu = []
    LinLu = []
    for oi in Lsfi0:
        Lu = re.split(':', oi)
        Lu[1] = qbLa27(Lu[0])
        #if Lu[0] in LinLu:
            #bi += 1
            #continue
        LinLu.append(Lu[0])
        su = f'{Lu[0]}:{Lu[1]}:{Lu[2]}\n'
        if bi == bz - 1:
            su = f'{Lu[0]}:{Lu[1]}:{Lu[2]}'
        fo0.write(su)
        LLu.append(su)
        bi += 1
        #print(f'{Lu[0]}:{Lu[1]}:{Lu[2]}')
    fo0.close()
    return LLu

import nltk
bbL=nltk.corpus.gutenberg.words('bible-kjv.txt')

def ubbLc():
    global bbL
    global bbLc
    global sbbLc
    global LsbbLc
    global LsbbLcsV
    bbL=nltk.corpus.gutenberg.words('bible-kjv.txt')
    bbLc = []
    for si in bbL:
        su = si.lower()
        bbLc.append(su)
    
    sbbLc = set(bbLc)
    LsbbLc = list(sbbLc)
    
    LsbbLcsV = []
    for si in LsbbLc:
        su = sV(si)
        LsbbLcsV.append(f'{su}:{si}')
        
def uLsbbLcsV3(): 
    global LsbbLcsV3
    LsbbLcsV3 = []
    for oo in LsbbLcsV:
        Lu = oo.split(':')
        if len(Lu[0]) == 3:
            LsbbLcsV3.append(oo)
        
def uL0rd(bi):
    global LL263
    global L0rd
    global LsbbLcsV3
    so26 = "abcdefghijklmnopqrstuvwxyz"
    LurL = _urL(bi, 26)
    su26 = _u77T(LurL, so26)
    LL263 = []
    bi = 0 
    bz = len(su26) - 3
    while bi < bz:
        su = su26[bi:bi + 3]
        LL263.append(su)
        bi += 1
    LLu = []
    for si in LsbbLcsV3:
        Lu = re.split(':', si)
        LLu.append(Lu[0])
 
    Lpg = []
    for si in LL263:
        if si in LLu:
            #print(f'{si}')
            Lpg.append(si)

    L0rd = []
    for si in Lpg:
        for sia in LsbbLcsV3:
            Lu = re.split(':', sia)
            if si == Lu[0]:
                L0rd.append(sia)
                #print(f'{sia}')
    return(L0rd)

def qbLa26():
    global L0rd
    global LLsa
    so26 = "abcdefghijklmnopqrstuvwxyz"
    LLsa = []
    for sa in L0rd:
        Lsa = re.split(':', sa)
        LL = list(Lsa[0])
        bLL = 0
        for ga in LL:
            biS = so26.index(ga)
            bLL += biS
        #print(f'{sa}:{bLL}')
        LLsa.append(f'{sa}:{bLL}')
    return(LLsa)

def qbLa26sa(sa):
    so26 = "abcdefghijklmnopqrstuvwxyz"
    bLL = 0
    for ga in sa:
        biS = so26.index(ga)
        bLL += biS
    return(bLL)