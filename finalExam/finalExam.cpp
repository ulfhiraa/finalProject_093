#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y; // variabel untuk menyimpan input dari lingkaran dan persegi panjang
public:
	bidangDatar() { // constructor 
		x = 0;
		y = 0;
	}
	virtual void input() { 
	
	}
	virtual float Luas(int a) { // menghitung luas
		return 0;
	}
	virtual float Keliling(int a) { // menghitung keliling
		return 0; 
	}
	virtual void cekUkuran() { // memeriksa ukuran

	}
	void setX(int a) { // memberi atau mengisi nilai X
		this->x = a;
	}
	int getX() { // membaca 
		return x;
	}
	void setY(int b) { // mengisi
		this->y = b;
	}
	int getY() { // membaca
		return y;
	}
};

class Lingkaran :public bidangDatar { // inheritance 
public:
	void input() {
		cout << "Lingkaran dibuat " << endl;
		cout << "Masukkan Jejari:";
		int a;
		cin >> a;
		setX(a);
	}

	float luas(int a) {
		return 3.14 * a * a; // rumus luas lingkaran : 3,14 x r^
	}

	float keliling(int a) {
		return 2 * 3.14 * a; // rumus keliling lingkaran : 2 x 3,14 x jejari
	}

	void cekUkuran() { // untuk memeriksa ukuran Lingkaran
		int a = getX();
		float keliling = Keliling(a);
		cout << "Luas Lingkaran= " << Luas(a) << endl;
		cout << "Keliling Lingkaran" << keliling << endl;
		cout << "Ukuran Lingkaran adalah" << endl;

		if (keliling > 40)
			cout << "Besar" << endl;
		else if (keliling < 20)
			cout << "Sedang " << endl;
		else if (keliling < 10)
			cout << "Kecil" << endl;
	}
};

class persegiPanjang :public bidangDatar { // inheritance
	void input() {
		cout << "Persegi Panjang dibuat" << endl;
		cout << "Masukkan panjang: ";
		int p;
		cin >> p;
		setX(p);

		cout << "Masukkan Lebar: ";
		int l;
		cin >> l;
		setY(l);
	}

	float luas(int p) {
		int l = getY();
		return p * l; // rumus luas persegi panjang : panjang x lebar
	}

	float keliling(int p) {
		int l = getY();
		return 2 * p + l; // rumus keliling persegi panjang : 2x(panjang + lebar)
	}

	void cekUkuran() { // untuk memeriksa ukuran Persegi Panjang
		int p = getX();
		float keliling = Keliling(p);
		cout << "Luas PersegiPanjang = " << Luas(p) << endl;
		cout << "Keliling PersegiPanjang =" << keliling << endl; 
		cout << "Ukuran PersegiPanjang adalah" << endl;

		if (keliling > 40)
			cout << "Besar" << endl;
		else if (keliling < 20)
			cout << "Sedang" << endl;
		else if (keliling < 10)
			cout << "Kecil" << endl;
	}
};

int main() {
	Lingkaran l;
	persegiPanjang p;

	char ch;
	do {
		l.input();
		l.cekUkuran();

		p.input();
		p.cekUkuran();

		cout << "Apakah anda ingin mengulang program? (Y/N): ";
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');

	return 0;
};