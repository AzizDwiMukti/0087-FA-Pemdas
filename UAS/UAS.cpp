#include <iostream>
using namespace std;
/**
 * @mainpage sistem penilaian dua mata kuliah
 *
 * @section intro_sec Pendahuluan sistem ini dibuat untuk mengidentifikasi tentang nilai dari 2 matkul
 *
 * @section
 * sistem ini memiliki beberapa class
 *
 * @file UAS.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-06-24
 *
 * @copyright Copyright (c) 2024
 *
 */

class MataKuliah
{

private:
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;

public:


};
float presensi;

// isi dengan access modifier yang dibutuhkan
float presensi;


// tambahkan dengan variabel lain yang dibutuhkan dibawah ini
public:
    MataKuliah()
    {
        presensi = 0.0;
        // isi dengan inisialisasi variabel yang dibutuhkan dibawah ini
    }
    virtual void namaMataKuliah() { return; }
    // tambahkan virtual fungsi lain yang dibutuhkan dibawah ini
    void setPresensi(float nilai)
    {
        this->presensi = nilai;
    }
    float getPresensi()
    {
        return presensi;
    }
    // tambahkan setter dan getter lain yang dibutuhkan dibawah ini
    void setActivity(float nilai)
    {
        this->setActivity = nilai;
    }
    float getActivity()
    {
        return;
    }
    void setExercise(float nilai)
    {
        this->Excercise = nilai;
    }
    float getExercise()
    {
        return;
    }


};
class Pemrograman : public MataKuliah

    public:
        Pemrograman()
        {
            void namaMataKuliah() override

                cout << "Pemrograman Komputer" << endl;

            // isi disini untuk mengisi kelas pemrograman
        };
        class Jaringan : public MataKuliah
        {
        public:
            Jaringan()

                void namaMataKuliah() override

                cout << "Jaringan Komputer" << endl;

            // isi disini untuk mengisi kelas jaringan
        };
        int main()
        {
            char pilih;
            do {
                cout << "Menu Mata Kuliah:" << endl;
                cout << "1. Pemrograman" << endl;
                cout << "2. Jaringan" << endl;
                cout << "Pilih mata kuliah (1/2, 'q' untuk keluar): ";
                cin >> pilih;

                MataKuliah* mataKuliah = nullptr;

                switch (pilih)
                {
                case '1':
                    mataKuliah = new Pemrograman();
                    break;
                case '2':
                    mataKuliah = new Jaringan();
                    break;
                case 'q':
                case 'Q':
                    continue; // Exit the loop
                default:
                    cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                    continue; // Repeat the loop
                }

                MataKuliah* mataKuliah;
                Pemrograman pemrograman;
                Jaringan jaringan;

