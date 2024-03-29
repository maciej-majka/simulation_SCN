#ifndef PLOT_ANIM_H
#define PLOT_ANIM_H
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

class animation
{
      public:
             animation(bool);
             ~animation();
             void get_path(); //pobiera lokalizacje gnuplota
             void start(int); //rozpoczyna animację
             void end(); //konczy
             void refresh(); //odswieza wykres
             void waiting(double); //przerwa na wyświetlenie
             bool ifusing();
             string file_path();
      private:
              bool isusing;  //określa czy wykonywac animację
              string gplot_path; //lokalizacja pgnuplot.exe
              string tmp_path; //lokalizacją tmp.dat
              string tmp_for_gplot;
              FILE *pin,*pout; //pipe do gnuplota
              
};

#endif
