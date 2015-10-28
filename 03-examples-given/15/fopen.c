#include <stdio.h> 
#include <stdlib.h>
main(int argc, char **argv)
{ 						
	FILE *fpin, *fpout; 
	int c; 
	if ( argc != 3) { 
		fprintf(stderr, "usage: %s in out\n", argv[0]); 
		exit(1); 
	}
	fpin = fopen(argv[1], "r"); 
	if (fpin == NULL) { 
		fprintf(stderr, "can't open: %s\n",argv[1]); 
		exit(2); 
	}
	fpout = fopen(argv[2], "w");
	 if (fpout == NULL) { 
		fprintf(stderr, "can't open %s\n", argv[2]); 
		exit(3); 
	 } 
    while(( c = getc(fpin)) != EOF) 
        putc(c, fpout);
    fclose(fpin);
    fclose(fpout);
	printf("File %s was copied to file %s\n", argv[1], argv[2]);  
    exit(0);
}
