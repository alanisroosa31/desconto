
#include<math.h>
#include<stdio.h>

int main()
{ float desc, vl_unitario, qde, valor_total, vl_exced, vl_unitario_desc ;	
	
	printf ("Digite o valor unitário: ");
	scanf ("%f",&vl_unitario);
	
	printf ("Digite o valor de desconto em %: ");
	scanf ("%f",&desc);
	desc = desc/100;
	
	vl_unitario_desc = vl_unitario - (vl_unitario * desc);
	
	printf ("Digite a qde de botton vendida: ");
	scanf ("%f",&qde);
	
	if (qde < 101)
	 valor_total = 100*vl_unitario;
	else
	{
	 vl_exced = qde - 100;
	 valor_total = 100*vl_unitario + vl_exced * vl_unitario_desc;
}   

printf ("\n %f Valor total: ", vl_total);
return0;
	
}