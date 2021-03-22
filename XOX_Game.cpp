#include <stdio.h>
#include <conio.h>

/*
X  O  X
O  X  O
O  O  X
*/

int iBoyut=3;
int oyun[3][3];

void OyunAlaniBosalt()
{
	int iSatir=0,iSutun=0;
	for(iSatir=0;iSatir<iBoyut;iSatir++)
	{
		for(iSutun=0;iSutun<iBoyut;iSutun++)
		{
			oyun[iSatir][iSutun]=-1;
		}
	}
} 



int BosMu(int iSatir,int iSutun)
{
	return oyun[iSatir][isutun]==-1 ? 1 : 0;
}

if(iBosAlanSayisi==0)
  return 0


int OyunBittiMi()
{
	int iXsayisi=0,iOsayisi=0,iBosAlanSayisi=0;
	for(iSatir=0;iSatir<iBoyut;iSatir++)
	{
		for(iSutun=0;iSutun<iBoyut;iSutun++)
		{
			if(BosMu(iSatir,iSutun)==1)
			{
				iBosAlanSayisi++;
			}
		}
	}
	
}




int main(void)
{
	int isatir=0,iSutun=0,iOyuncuID=1;
	OyunAlaniBosalt();
	while(1)
	{
    	printf("Hangi satir ve sutuna isareti koymak istiyorsunuz:");
	    scanf("%d %d",&iSatir,&iSutun);
	    if(BosMu(iSatir,iSutun)==1)
	    {
		    oyun[iSatir][iSutun]=iOyuncuID;
		    iOyuncuID= iOyuncuID 
	}
	
}
