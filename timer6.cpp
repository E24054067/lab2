#include "timer6.h"
Elo::Elo(float Ra,float Rb,int K) {
	set1(Ra);
   set2(Rb);
   set3(K);
}
float Elo::get1(){
return Ra;
}
float Elo::get2(){
return Rb;
}
int Elo::get3(){
return K;
}
void Elo::set1(float x){
Ra=x;}
void Elo::set2(float y){
Rb=y;}
void Elo::set3(int z){
K=z;}


