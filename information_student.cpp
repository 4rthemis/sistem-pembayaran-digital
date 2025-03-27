#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int id;
    int grade;

public:
  
    Student(const string& name, int id, int grade) 
        : name(name), id(id), grade(grade) {}

    string getName() const { return name; }
    int getId() const { return id; }
    int getGrade() const { return grade; }
};

int main() {
    string name;
    int id, grade;

    
    cout << "Masukan nama siswa : ";
    getline(cin, name);

    cout << "Masukan ID siswa : ";
    cin >> id;

    cout << "Masukan nilai siswa : ";
    cin >> grade;

    Student student(name, id, grade);

    // Menampilkan informasi mahasiswa
    cout << "Informais Siswa :" << endl;
    cout << "Nama : " << student.getName() << endl;
    cout << "ID: " << student.getId() << endl;
    cout << "Nilai : " << student.getGrade() << endl;

    return 0;
}
