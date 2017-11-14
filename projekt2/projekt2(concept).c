double taylor_tan(double x, unsigned int n) {
	switch (n) {
		case 1: return x; 
		case 2: return taylor_tan(x, 1) + (x*x*x)/3; 
		case 3: return taylor_tan(x, 2) + 2*(x*x*x*x*x)/315
		}
}

double cfrac_tan(double x, unsigned int n) {
	double cf = 0;
	double b = 1;
	double a = 1; //nemoze byt 1/x lebo 1 sa meni ale  nie - takze "a " bude len citatel v zlomku v menovateli
	
	for(int k = n; k > 0; k--) {
		cf = b / ( (a/x) - cf);
		a = a + 2;		
		} 
}


int main (int argc, char **argv) {
	if (argc < 2) {return 1;}

	if (strcmp("--help", argv[1]) == 0 ) {
		printf("nejaky help.."); 
		return 0;
		}

	if (strcmp("--tan", argv[1]) == 0 ) {
		if (argc != 5) {return 1;}
		int n = atoi(argv[3]); //N
		int m = atoi(argv[4]); //M
		double result1, result2, result3;	
		
		for(int it = n; n < (m+1); it++) {
			result1 = tan(atoi(argv[2])); //volanie tan z math.h
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
		double alpha = 0; //pre vypocet vzdialenosti
		int is_beta = 0;
		//double beta = 0;		
		if (strcmp("-c", argv[1]) == 0 ) {
			height = atof(argv[2]);  //pozor na pocet desatinnych - DOPISAT + skontrolovat ostatne atoi
			alpha = atof(argv[4]); 			
			if (argc == 6) {
				double beta = atof(argv[5]); //pre vypocet vysky
				is_beta = 1; 
				}		
			}		

		if (strcmp("-m", argv[1]) == 0 ) {//nemam c
			alpha = atof(argv[2]); 	
			if (argc == 4) {
				double beta = atof(argv[3]); //pre vypocet vysky
				is_beta = 1; 
				}
			}

		/*******
		teraz vypocitat vysku 
		1. kolko iteracii? 
		2 ako sa to pocita 
		******/

		}


	return 1;

}	
