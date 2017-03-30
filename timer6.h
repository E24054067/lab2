#include <ctime>
using namespace std;
class Elo {
public:
	Elo(float Ra,float Rb,int K);
	float get1();
   float get2();
   int get3();
	void set1(float x);
	void set2(float y);
	void set3(int z);
private:
	int Ra;
   int Rb;
   int K;
};
