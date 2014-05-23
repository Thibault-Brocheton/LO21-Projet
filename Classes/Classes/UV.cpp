#include "includes.h"

void UV::editUV(string c, string t, Saison s1, Saison s2, Categorie* tab_cat, int* cre_cat, int nb_cat, Cursus* tab_curs, int nb_curs, bool d)
{
    int i;
    Code=c;
    Titre=t;
    saison[0]=s1;
    saison[1]=s2;
    Tab_Categorie=tab_cat;
    Credits_Categorie=cre_cat;
    Nb_Categorie=nb_cat;
    Tab_Cursus=tab_curs;
    Nb_Cursus=nb_curs;
    DemiUV=d;

}
