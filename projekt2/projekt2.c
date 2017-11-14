  #include <stdlib.h>
  #include <stdio.h>
  #include <math.h>
  #include <string.h>


double taylor_tan(double x, unsigned int n)
{
  switch (n)
  {
    case 1:return x;
    case 2:return taylor_tan(x,1)+(x*x*x)/3;
    case 3:return taylor_tan(x,2)+2*(x*x*x*x*x)/15;
    case 4:return taylor_tan(x,3)+17*(x*x*x*x*x*x*x)/315;
    case 5:return taylor_tan(x,4)+62*(x*x*x*x*x*x*x*x*x)/2835;
    case 6:return taylor_tan(x,5)+1382*(x*x*x*x*x*x*x*x*x*x*x)/155925;
    case 7:return taylor_tan(x,6)+21844*(x*x*x*x*x*x*x*x*x*x*x*x*x)/6081075;
    case 8:return taylor_tan(x,7)+929569*(x*x*x*x*x*x*x*x*x*x*x*x*x*x*x)/638512875;
    case 9:return taylor_tan(x,8)+6404582*(x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x)/10854718875;
    case 10:return taylor_tan(x,9)+443861162*(x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x)/1856156927625;
    case 11:return taylor_tan(x,10)+18888466084*(x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x)/194896477400625;
    case 12:return taylor_tan(x,11)+113927491862*(x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x)/49308808782358125;
    case 13:return taylor_tan(x,12)+58870668456604*(x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x)/3698160658676859375;

  }


}

double cfrac_tan(double x, unsigned int n)
  {
    double cf = 0;
  	double b = 1;
  	double a = 1;

  	for(int k = n; k > 0; k--)
      {
  		cf = b / ( (a/x) - cf);
  		a = a + 2;

      }

  }



  int main(int argc, char **argv)
  {
    if (argc < 2) {return 1;}

  	if (strcmp("--help", argv[1]) == 0 ) {


  return 0;
}
if (strcmp("--tan", argv[1]) == 0 ) {
  if (argc != 5) {return 1;}
  int n = atoi(argv[3]); //N
  int m = atoi(argv[4]); //M
  double result1, result2, result3;

  for(int it = n; n < (m+1); it++) {
    result1 = tan(atoi(argv[2]));
    result2 = taylor_tan(atoi(argv[2]), it);
    result2 = cfrac_tan(atoi(argv[2])), it);
    abs1 = abs(result1 - result2);
    abs2 = abs(result1 - result3);
    printf ("%d %e %e %e %e %e\n", &it, &result1, &result2, &abs1, &result3, &abs2);
    }
  return 0;
  }

if ((strcmp("-c", argv[1]) == 0 ) || (strcmp("-m", argv[1]) == 0 )) {
  double height = 1.5;
  double alpha = 0; //vypocet vzdialenosti
  int is_beta = 0;

  if (strcmp("-c", argv[1]) == 0 ) {
    height = atof(argv[2]);  //pozor na pocet desatinnych - DOPISAT + skontrolovat ostatne atoi
    alpha = atof(argv[4]);
    if (argc == 6) {
      double beta = atof(argv[5]); //pre vypocet vysky
      is_beta = 1;
      }
    }

  if (strcmp("-m", argv[1]) == 0 ) {
    alpha = atof(argv[2]);
    if (argc == 4) {
      double beta = atof(argv[3]); //pre vypocet vysky
      is_beta = 1;
      }
    }


  }


return 1;

}
