/* everything is a ___SCMOBJ! */

struct GAMBIT_TAGS_s {
  // type tags
  char *tFIXNUM;
  char *tSPECIAL;
  char *tMEM1;
  char *tMEM2;
  char *tSUBTYPED;
  char *tPAIR;
  // subtype tags
  char *sVECTOR;
  char *sPAIR;
  char *sRATNUM;
  char *sCPXNUM;
  char *sSTRUCTURE;
  char *sBOXVALUES;
  char *sMEROON;
  char *sJAZZ;
  char *sSYMBOL;
  char *sKEYWORD;
  char *sFRAME;
  char *sCONTINUATION;
  char *sPROMISE;
  char *sWEAK;
  char *sPROCEDURE;
  char *sRETURN;
  char *sFOREIGN;
  char *sSTRING;
  char *sS8VECTOR;
  char *sU8VECTOR;
  char *sS16VECTOR;
  char *sU16VECTOR;
  char *sS32VECTOR;
  char *sU32VECTOR;
  char *sF32VECTOR;
  char *sS64VECTOR;
  char *sU64VECTOR;
  char *sF64VECTOR;
  char *sFLONUM;
  char *sBIGNUM;
  // special tags
  char *FAL;
  char *TRU;
  char *NUL;
  char *EOF;
  char *VOID;
  char *ABSENT;
  char *UNB1;
  char *UNB2;
  char *OPTIONAL;
  char *KEYOBJ;
  char *REST;
  char *UNUSED;
  char *DELETED;
};

struct GAMBIT_TAGS_s GAMBIT_TAGS = {
  // type tags
  .tFIXNUM = "tFIXNUM",
  .tSPECIAL = "tSPECIAL",
  .tMEM1 = "tMEM1",
  .tMEM2 = "tMEM2",
  .tSUBTYPED = "tSUBTYPED",
  .tPAIR = "tPAIR",
  // subtype tags
  .sVECTOR = "sVECTOR",
  .sPAIR = "sPAIR",
  .sRATNUM = "sRATNUM",
  .sCPXNUM = "sCPXNUM",
  .sSTRUCTURE = "sSTRUCTURE",
  .sBOXVALUES = "sBOXVALUES",
  .sMEROON = "sMEROON",
  .sJAZZ = "sJAZZ",
  .sSYMBOL = "sSYMBOL",
  .sKEYWORD = "sKEYWORD",
  .sFRAME = "sFRAME",
  .sCONTINUATION = "sCONTINUATION",
  .sPROMISE = "sPROMISE",
  .sWEAK = "sWEAK",
  .sPROCEDURE = "sPROCEDURE",
  .sRETURN = "sRETURN",
  .sFOREIGN = "sFOREIGN",
  .sSTRING = "sSTRING",
  .sS8VECTOR = "sS8VECTOR",
  .sU8VECTOR = "sU8VECTOR",
  .sS16VECTOR = "sS16VECTOR",
  .sU16VECTOR = "sU16VECTOR",
  .sS32VECTOR = "sS32VECTOR",
  .sU32VECTOR = "sU32VECTOR",
  .sF32VECTOR = "sF32VECTOR",
  .sS64VECTOR = "sS64VECTOR",
  .sU64VECTOR = "sU64VECTOR",
  .sF64VECTOR = "sF64VECTOR",
  .sFLONUM = "sFLONUM",
  .sBIGNUM = "sBIGNUM",
  // special tags
  .FAL = "FAL",
  .TRU = "TRU",
  .NUL = "NUL",
  .EOF = "EOF",
  .VOID = "VOID",
  .ABSENT = "ABSENT",
  .UNB1 = "UNB1",
  .UNB2 = "UNB2",
  .OPTIONAL = "OPTIONAL",
  .KEYOBJ = "KEYOBJ",
  .REST = "REST",
  .UNUSED = "UNUSED",
  .DELETED = "DELETED",
};

#define ERR_RES "err: no result"
#define ERR_TYPE "err: unknown type"
#define ERR_SUBTYPE "err: unknown subtype"
#define ERR_SPECIAL "err: unknown special type"
#define TYPERES(x)(res = GAMBIT_TAGS.x)
#define TYPERES_BREAK(x)(res = GAMBIT_TAGS.x); break
#define TYPE_HTB(x)(x<<___HTB)

char *SCMOBJ_typeof(___SCMOBJ scmobj)
{
  char *err = NULL;
  char *res = ERR_RES;

  if (___TYP(scmobj) == ___tSUBTYPED) {
    switch (___SUBTYPED_HEADER(scmobj) & ___SMASK) {
      case TYPE_HTB(___sVECTOR):
        TYPERES_BREAK(sVECTOR);
      case TYPE_HTB(___sPAIR):
        TYPERES_BREAK(sPAIR);
      case TYPE_HTB(___sRATNUM):
        TYPERES_BREAK(sRATNUM);
      case TYPE_HTB(___sCPXNUM):
        TYPERES_BREAK(sCPXNUM);
      case TYPE_HTB(___sSTRUCTURE):
        TYPERES_BREAK(sSTRUCTURE);
      case TYPE_HTB(___sBOXVALUES):
        TYPERES_BREAK(sBOXVALUES);
      case TYPE_HTB(___sMEROON):
        TYPERES_BREAK(sMEROON);
      case TYPE_HTB(___sJAZZ):
        TYPERES_BREAK(sJAZZ);
      case TYPE_HTB(___sSYMBOL):
        TYPERES_BREAK(sSYMBOL);
      case TYPE_HTB(___sKEYWORD):
        TYPERES_BREAK(sKEYWORD);
      case TYPE_HTB(___sFRAME):
        TYPERES_BREAK(sFRAME);
      case TYPE_HTB(___sCONTINUATION):
        TYPERES_BREAK(sCONTINUATION);
      case TYPE_HTB(___sPROMISE):
        TYPERES_BREAK(sPROMISE);
      case TYPE_HTB(___sWEAK):
        TYPERES_BREAK(sWEAK);
      case TYPE_HTB(___sPROCEDURE):
        TYPERES_BREAK(sPROCEDURE);
      case TYPE_HTB(___sRETURN):
        TYPERES_BREAK(sRETURN);
      case TYPE_HTB(___sFOREIGN):
        TYPERES_BREAK(sFOREIGN);
      case TYPE_HTB(___sSTRING):
        TYPERES_BREAK(sSTRING);
      case TYPE_HTB(___sS8VECTOR):
        TYPERES_BREAK(sS8VECTOR);
      case TYPE_HTB(___sU8VECTOR):
        TYPERES_BREAK(sU8VECTOR);
      case TYPE_HTB(___sS16VECTOR):
        TYPERES_BREAK(sS16VECTOR);
      case TYPE_HTB(___sU16VECTOR):
        TYPERES_BREAK(sU16VECTOR);
      case TYPE_HTB(___sS32VECTOR):
        TYPERES_BREAK(sS32VECTOR);
      case TYPE_HTB(___sU32VECTOR):
        TYPERES_BREAK(sU32VECTOR);
      case TYPE_HTB(___sF32VECTOR):
        TYPERES_BREAK(sF32VECTOR);
      case TYPE_HTB(___sS64VECTOR):
        TYPERES_BREAK(sS64VECTOR);
      case TYPE_HTB(___sU64VECTOR):
        TYPERES_BREAK(sU64VECTOR);
      case TYPE_HTB(___sF64VECTOR):
        TYPERES_BREAK(sF64VECTOR);
      case TYPE_HTB(___sFLONUM):
        TYPERES_BREAK(sFLONUM);
      case TYPE_HTB(___sBIGNUM):
        TYPERES_BREAK(sBIGNUM);
      default:
        err = ERR_SUBTYPE;
    }
  } else if (___TYP(scmobj) == ___tFIXNUM) {
    TYPERES(tFIXNUM);
  } else if (___TYP(scmobj) == ___tPAIR) {
    TYPERES(tPAIR);
  } else if (___TYP(scmobj) == ___tSPECIAL) {
    switch (scmobj) {
      case ___FAL:
        TYPERES_BREAK(FAL);
      case ___TRU:
        TYPERES_BREAK(TRU);
      case ___NUL:
        TYPERES_BREAK(NUL);
      case ___EOF:
        TYPERES_BREAK(EOF);
      case ___VOID:
        TYPERES_BREAK(VOID);
      case ___ABSENT:
        TYPERES_BREAK(ABSENT);
      case ___UNB1:
        TYPERES_BREAK(UNB1);
      case ___UNB2:
        TYPERES_BREAK(UNB2);
      case ___OPTIONAL:
        TYPERES_BREAK(OPTIONAL);
      case ___KEYOBJ:
        TYPERES_BREAK(KEYOBJ);
      case ___REST:
        TYPERES_BREAK(REST);
      case ___UNUSED:
        TYPERES_BREAK(UNUSED);
      case ___DELETED:
        TYPERES_BREAK(DELETED);
      default:
        err = ERR_SPECIAL;
    }
  } else {
    err = ERR_TYPE;
  }

  return (err != NULL) ? err : res;
}
