#include <stdio.h>

main()
{
	char broj[13],maska[12]="765432765432";
	int i,kontr=0;
	
	printf("Unesite jmbg: ");
	scanf("%s",&broj);
	
	for(i=0;i<=12;i++)
	if(broj[i]<'0' || broj[i]>'9') {
		printf("jmbg nije pravilno upisan ili svi znakovi nisu brojevi ");
		
		return 1;
	}
	for(i=0;i<=11;i++)
	kontr+=(broj[i]-'0')*(maska[i]-'0');
	kontr=kontr%11;
	
	if(kontr!=0)
	kontr=11-kontr;
	
	if((broj[12]-'0')!=kontr){
		printf("kontrolni broj nije ispravan");
		return 1;
	}
	else
	printf("\nprovera duzine jmbg broja \n");
	
	 for(i = 0; broj[i] != '\0'; ++i);
    
    if(i==13){
	
    printf("\nuneli ste  %d cifara ,duzina unetog JMBG je 13 \n", i);
    }

	
	printf("\n\n***PODACI***\n\n");
	
	if(broj[4]>='8'){
		printf("Datum rodjenja : %c%c.%c%c.1%c%c%c. \n",broj[0],broj[1],broj[2],broj[3],broj[4],broj[5],broj[6]);
	}
	else{
	    printf("Datum rodjenja : %c%c.%c%.2%c%c%c. \n",broj[0],broj[1],broj[2],broj[3],broj[4],broj[5],broj[6]);	
	}
	printf("Mesto / Politicka regija : %c%c\n",broj[7],broj[8]);
	
	if(broj[9]<='4'){
		printf("Pol : Musko\n");
		printf("Redni broj upisa u maticnu knjigu rodjenih : %c%c%c\n",broj[9],broj[10],broj[11]);
		
	}
	else{
	printf("Pol : \n");
		printf("Redni broj upisa u maticnu knjigu rodjenih : %c%c%c\n",broj[9]-'5',broj[10],broj[11]);
	}
	
	printf("Kontrolni broj : %c\n ",broj[12]);
}
	

