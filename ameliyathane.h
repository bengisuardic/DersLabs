#ifndef AMELIYATHANE_H
#define AMELIYATHANE_H

class Ameliyathane
{
	private:
		char ad[];
		char grup[];
		int puan;
		int program[6][7];
	public:
		Ameliyathane (char ad[20], char grup[20]);
		Ameliyathane ();
		int getBoslukSayisi();
		Ameliyathane dahaVerimli(Ameliyathane b,Ameliyathane a);
		bool operator != (Ameliyathane b,Ameliyathane a);
		void setOperasyon(int gun, int periyot);
		void programYaz();
		bool periyottaBoslukVarMi(int periyot);
};

#endif
