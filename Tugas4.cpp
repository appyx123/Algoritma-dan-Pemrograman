#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

class stack {
private:
    node* top;
public:
    stack() { top = nullptr; }

    void tambah(int nilai) {
        node* nodeBaru = new node();
        nodeBaru->data = nilai;
        nodeBaru->next = top;
        top = nodeBaru;
        cout << nilai << " ditambahkan ke stack\n";
    }

    void hapus() {
        if (kosong()) {
            cout << "stack kosong\n";
            return;
        }
        node* temp = top;
        cout << top->data << " dihapus dari stack\n";
        top = top->next;
        delete temp;
    }

    int lihat() {
        if (kosong()) {
            cout << "stack kosong\n";
            return -1;
        }
        return top->data;
    }

    bool kosong() {
        return top == nullptr;
    }

    void tampilkan() {
        node* temp = top;
        cout << "stack: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~stack() {
        while (!kosong()) {
            hapus();
        }
    }
};

int main() {
    stack t;
    t.tambah(10);
    t.tambah(20);
    t.tambah(30);
    t.tampilkan();
    t.hapus();
    t.tampilkan();
    cout << "Elemen teratas: " << t.lihat() << endl;
    return 0;
}
