
/*

Name    : Muhamad Akbar Riziq
NIM     : 123230062

*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

void matriksPertambahan() {
  system("cls");
  int matA[10][10], matB[10][10], hasil[10][10], maxKolom, maxBaris;

  cout << "Masukkan jumlah baris Matriks A dan B : ";
  cin >> maxBaris;
  cout << "Masukkan jumlah kolom Matriks A dan B : ";
  cin >> maxKolom;

  cout << "\nMatriks A" << endl;
  for (int i = 0; i < maxBaris; i++) {
    for (int j = 0; j < maxKolom; j++) {
      cout << "[" << i << "][" << j << "] : ";
      cin >> matA[i][j];
    }
  }

  cout << "\nMatriks B" << endl;
  for (int i = 0; i < maxBaris; i++) {
    for (int j = 0; j < maxKolom; j++) {
      cout << "[" << i << "][" << j << "] : ";
      cin >> matB[i][j];
    }
  }

  for (int i = 0; i < maxBaris; i++) {
    for (int j = 0; j < maxKolom; j++) {
      hasil[i][j] = matA[i][j] + matB[i][j];
    }
  }

  cout << "\nHasil : " << endl;
  for (int i = 0; i < maxBaris; i++) {
    for (int j = 0; j < maxKolom; j++) {
      cout << "|" << setw(3) << hasil[i][j] << "" << setw(3);
    }
    cout << " | " << endl;
  }
  system("pause");
}

void matriksPengurangan() {
  system("cls");
  int matA[10][10], matB[10][10], hasil[10][10], maxKolom, maxBaris;

  cout << "Masukkan jumlah baris Matriks A dan B : ";
  cin >> maxBaris;
  cout << "Masukkan jumlah kolom Matriks A dan B : ";
  cin >> maxKolom;

  cout << "\nMatriks A" << endl;
  for (int i = 0; i < maxBaris; i++) {
    for (int j = 0; j < maxKolom; j++) {
      cout << "[" << i << "][" << j << "] : ";
      cin >> matA[i][j];
    }
  }

  cout << "\nMatriks B" << endl;
  for (int i = 0; i < maxBaris; i++) {
    for (int j = 0; j < maxKolom; j++) {
      cout << "[" << i << "][" << j << "] : ";
      cin >> matB[i][j];
    }
  }

  for (int i = 0; i < maxBaris; i++) {
    for (int j = 0; j < maxKolom; j++) {
      hasil[i][j] = matA[i][j] - matB[i][j];
    }
  }

  cout << "\nHasil : " << endl;
  for (int i = 0; i < maxBaris; i++) {
    for (int j = 0; j < maxKolom; j++) {
      cout << "|" << setw(3) << hasil[i][j] << "" << setw(3);
    }
    cout << " | " << endl;
  }
  system("pause");
}

void perkalianMatriks() {
  system("cls");
  int kAbB, barisA, kolomB;
  int a[10][10], b[10][10], c[10][10];

  cout << "Masukkan\n";
  cout << "Jumlah kolom A dan baris B : ";
  cin >> kAbB;
  cout << "Jumlah baris A : ";
  cin >> barisA;
  cout << "Jumlah kolom B : ";
  cin >> kolomB;

  cout << "\nMatrix A\n";

  // matrix a
  for (int i = 0; i < barisA; i++) {
    for (int j = 0; j < kAbB; j++) {
      cout << "[" << i << "][" << j << "] = ";
      cin >> a[i][j];
    }
  }

  cout << "\n";

  // matrix b
  cout << "Matriks B\n";
  for (int i = 0; i < kAbB; i++) {
    for (int j = 0; j < kolomB; j++) {
      cout << "[" << i << "][" << j << "] = ";
      cin >> b[i][j];
    }
  }

  // perkalian
  for (int i = 0; i < barisA; i++) {
    for (int j = 0; j < kolomB; j++) {
      c[i][j] = 0;
      for (int k = 0; k < kAbB; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  // hasil
  cout << "\nHasil\n";
  for (int i = 0; i < barisA; i++) {
    for (int j = 0; j < kolomB; j++) {
      cout << "|" << setw(3) << c[i][j] << "" << setw(3);
    }
    cout << " | " << endl;
  }
  system("pause");
}

void MenuMatriks() {
  int pilih;
  do {
    system("cls");
    cout << "Menu : " << endl;
    cout << "1. Penjumlahan Matriks" << endl;
    cout << "2. Pengurangan Matriks" << endl;
    cout << "3. Perkalian Matriks" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih : ";
    cin >> pilih;

    switch (pilih) {
    case 1:
      matriksPertambahan();
      break;
    case 2:
      matriksPengurangan();
      break;
    case 3:
      perkalianMatriks();
      break;
    case 0:
      break;
    default:
      cout << "Angka yang anda pilih tidak valid!";
      system("pause");
      break;
    }
  } while (pilih != 0);
}

int main() { MenuMatriks(); }