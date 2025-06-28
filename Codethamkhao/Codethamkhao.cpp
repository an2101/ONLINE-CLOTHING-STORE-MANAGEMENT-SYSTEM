#include <iostream>
#include <ctime>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include <fstream>
using namespace std;

void taothoigian() {
   time_t now = time(0);
   cout << "Number of sec since 1/1/1970:" << now << endl;
   tm *ltm = localtime(&now);
   cout << "Year: " << 1900 + ltm->tm_year << endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Time: "<< 1 + ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;
}
void printLine(int n) {
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "_";
    }
    cout << endl;
}
void pressAnyKey() {
    cout << "nnBam phim bat ky de tiep tuc...";
    getch();
    system("cls");
}
void docghifile() {
	char data[100];
	ofstream outfile; 
    outfile.open("qtm.dat"); 
    cout << "Ghi du lieu toi file!" << endl; 
    cout << "Nhap ten cua ban: "; 
    cin.getline(data, 100); 
    // ghi du lieu da nhap vao trong file. 
    outfile << data << endl; 
    cout << "Nhap tuoi cua ban: "; 
    cin >> data; 
    cin.ignore(); 
    // ghi du lieu da nhap vao trong file. 
    outfile << data << endl; 
    // dong file da mo. 
    outfile.close(); 
    //mo mot file trong che do read. 
    ifstream infile; 
    infile.open("qtm.dat"); 
    cout << "\n===========================\n" ; 
    cout << "Doc du lieu co trong file!" << endl; infile >> data; 
    // ghi du lieu tren man hinh. 
    cout << data << endl; 
    // tiep tuc doc va hien thi du lieu. 
    infile >> data; cout << data << endl; 
    // dong file da mo. 
    infile.close();
}
void menuquanlisinhvien() {
	cout << "CHUONG TRINH QUAN LY SINH VIEN C/C++n";
    cout << "*************************MENU**************************n";
    cout << "**  1. Them sinh vien.                               **n";
    cout << "**  2. Cap nhat thong tin sinh vien boi ID.          **n";
    cout << "**  3. Xoa sinh vien boi ID.                         **n";
    cout << "**  4. Tim kiem sinh vien theo ten.                  **n";
    cout << "**  5. Sap xep sinh vien theo diem trung binh (GPA). **n";
    cout << "**  6. Sap xep sinh vien theo ten.                   **n";
    cout << "**  7. Hien thi danh sach sinh vien.                 **n";
    cout << "**  8. Ghi danh sach sinh vien vao file.             **n";
    cout << "**  0. Thoat                                         **n";
    cout << "*******************************************************n";
    cout << "Nhap tuy chon: ";
}
void sapxep() {
	int n;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // If arr[i] > arr[j], swap the value of arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
void dinhdangbang() {
	int x = 50;
    //set the width
    int w = 10;
    //output the column headings
    //use setw() with a arg for the width
    cout<<setw(w)<<"number"<<setw(w)<<"square"<<setw(w)<<"cube"<<endl;
    cout<<"========================"<<endl;
    //loop through
    for(int i = 3; i<=x; i+=9)
    {
    //output the number, square and cube in fields of width x
    cout<<setw(w)<<i<<setw(w);
    }
}
int main() {
	return 0;
}
