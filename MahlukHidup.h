#ifndef MAHLUKHIDUP_H
#define MAHLUKHIDUP_H

class MahlukHidup {
protected:
	//Waktu Ikan bergerak bebas setelah makan
	const int fullTimer;
	//Waktu Ikan mencari makanan
	const int starveTimer;
	// Timer mahluk hidup menuju lapar
	int timer;
	//Status mahluk hidup sedag mencari makan atau tidak
	bool isLapar;

public:
	//GETTER&SETTER
	void setTimer(int t);
	void setIsLapar(bool b);

	int getTimer() const;
	bool getIsLapar() const;

	





};
