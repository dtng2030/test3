#include <iostream>
#include <string.h>
using namespace std;

struct Tinh {
	char tentinh[100];
	char matinh[20];
	long danso;
	double dientich;

};
typedef struct Tinh tinh;

void nhapthongtintinh(tinh& t) {

	cout << "\nNhap ten tinh: ";
	cin >> t.tentinh;
	cin.ignore();
	cout << "\nNhap ma tinh: ";
	cin >> t.matinh;
	cout << "\nNhap dan so cua tinh: ";
	cin >> t.danso;
	cout << "\nNhap dien tich tinh : ";
	cin >> t.dientich;
}

void xuatthongtintinh(tinh& t) {
	cout << "\nTen tinh: " << t.tentinh;
	cout << "\nMa tinh: " << t.matinh;
	cout << "\nDan so tinh: " << t.danso;
	cout << "\nDien tich tinh: " << t.dientich;
}

void NhapDanhSach(tinh a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "\n\n\t\tNhap Thong tin Tinh thu  " << i + 1;
		nhapthongtintinh(a[i]);
	}
}

void XuatDanhSach(tinh a[], int n) {
	for (int i = 0; i < n; i++)
		xuatthongtintinh(a[i]);
}

void tinhhontrieu(tinh a[], int n) {
	for (int i = 0; i < n; i++)
		if (a[i].danso > 1000000)
			cout << "\nTinh " << a[i].tentinh << " co so dan hon 1 trieu";
}

int isDientichtinhlonnhat(tinh a[], int n) {
	double max = a[0].dientich;
	for (int i = 0; i < n; i++)
		if (a[i].dientich > max)
			max = a[i].dientich;
	return max;
}

void dientichtinhlonnhat(tinh a[], int n) {
	double max = isDientichtinhlonnhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i].dientich == max)
			cout << "\nDien tich cua tinh " << a[i].tentinh << " la lon nhat";
}

int main() {
	tinh mot;
	cout << "\n\n\t\t NHAP THONG TIN TINH";
	nhapthongtintinh(mot);
	cout << "\n\n\t\tXUAT THONG TIN TINH";
	xuatthongtintinh(mot);
	tinh a[100];
	int n;
	cout << "\nNhap so tinh: ";
	cin >> n;
	cout << "\n\n\t\tNHAP DANH SACH TINH\n";
	NhapDanhSach(a, n);
	cout << "\n\n\t\tXUAT DANH SACH TINH\n";
	XuatDanhSach(a, n);
	tinhhontrieu(a, n);
	dientichtinhlonnhat(a, n);
	return 0;
}

