#include <iostream>
#include<cmath>
#include <unistd.h>
#include<fstream>
#include "timer6.h"
using namespace std;
int main() {

float Ra,Rb;
int K;
float Sa;
double Ea,Eb;

 ifstream inFile("infile", ios::in); 
 ofstream outFile("outfile", ios::out); 
   
   inFile>>K>>Ra>>Rb;
	Elo Elo1(Ra,Rb,K);
   outFile<<Ra<<"\t"<<Rb<<endl;
	
while(inFile>>Sa){

Ra=Elo1.get1();
Rb=Elo1.get2();
K=Elo1.get3();

Ea=1/(1+pow(10,(Rb-Ra)/400));
Eb=1/(1+pow(10,(Ra-Rb)/400));

Ra=Ra+K*(Sa-Ea);
Rb=Rb+K*((1-Sa)-Eb);

int x=Ra,y=Rb; //Ra,Rb integer
if((Ra-x)>=0.5) Ra=x+1;
else Ra=x;
if((Rb-y)>=0.5) Rb=y+1;
else Rb=y;
outFile<<Ra<<"\t"<<Rb<<endl;

Elo1.set1(Ra);
Elo1.set2(Rb);
Elo1.set3(K);

}
return 0;
}
