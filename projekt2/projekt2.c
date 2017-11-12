  #include <stdlib.h>
  #include <stdio.h>
  #include <math.h>
  #include <string.h>


double taylor_tan(double x, unsigned int n)
{
  switch (n) {
    case 1:return x;
    case 2:return taylor_tan(x,1)+(x*x*x)/3;
    case 3:return taylor_tan(x,2)+2*(x*x*x*x*x);
    case 4:return taylor_tan(x,3);//doipsat
    case 5:return taylor_tan(x,4);
    case 6:return taylor_tan(x,5);
    case 7:return taylor_tan(x,6);
    case 8:return taylor_tan(x,7);
    case 9:return taylor_tan(x,8);
    case 10:return taylor_tan(x,9);
    case 11:return taylor_tan(x,10);
    case 12:return taylor_tan(x,11);
    case 13:return taylor_tan(x,12);

  }


}

double cfrac_tan(double x, unsigned int n)
  {






  }





  int main(int argc, char const *argv[])
  {



  return 0;
}
