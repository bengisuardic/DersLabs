#include <iostream>
using namespace std;

// Düðüm yapýsý tanýmý
template <typename T>
struct node {
    T data;
    node* next;
    
    // Yapýcý fonksiyon
    node(const T& value) {
        data = value; // Üye deðiþkeni atamasý
        next = nullptr; 
    }
};
// Prototipler
template <typename T>
void outputReverse(node<T>* p);

template <typename T>
void eraseAll(node<T>* & front, const T& target);

template <typename T>
node<T>* copy(node<T>* front);

template <typename T>
void printList(node<T>* head);

// 18. soru outputReverse fonksiyonunun uygulamasý
template <typename T>
void outputReverse(node<T>* p) {
    if (p == nullptr) {
        return;
    }
    outputReverse(p->next);
    cout << p->data << " ";
}

// 19. soru eraseAll fonksiyonunun uygulamasý
template <typename T>
void eraseAll(node<T>* & front, const T& target) {
    if (front == nullptr) {
        return;
    }
    
    while (front != nullptr && front->data == target) {
        node<T>* temp = front;
        front = front->next;
        delete temp;
    }
    
    if (front == nullptr) {
        return;
    }
    
    node<T>* current = front;
    while (current->next != nullptr) {
        if (current->next->data == target) {
            node<T>* temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            current = current->next;
        }
    }
}

// 20. soru copy fonksiyonunun uygulamasý
template <typename T>
node<T>* copy(node<T>* front) {
    if (front == nullptr) {
        return nullptr;
    }
    
    node<T>* newFront = new node<T>(front->data);
    node<T>* current = newFront;
    node<T>* orig = front->next;
    
    while (orig != nullptr) {
        current->next = new node<T>(orig->data);
        current = current->next;
        orig = orig->next;
    }
    
    return newFront;
}

// Listeyi yazdýran fonksiyon
template <typename T>
void printList(node<T>* head) {
    node<T>* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Main Fonksiyonu
int main() {
    node<int>* head = new node<int>(1);
    head->next = new node<int>(2);
    head->next->next = new node<int>(3);
    head->next->next->next = new node<int>(2);
    head->next->next->next->next = new node<int>(4);
    head->next->next->next->next->next = new node<int>(2);
    head->next->next->next->next->next->next = new node<int>(5);

    // Test outputReverse
    cout << "Original list: ";
    printList(head);
    cout << "Reverse output: ";
    outputReverse(head);
    cout << endl;

    // Test copy
    cout << "\nTesting copy function:" << endl;
    node<int>* copiedList = copy(head);
    cout << "Original list: ";
    printList(head);
    cout << "Copied list: ";
    printList(copiedList);

    // Test eraseAll
    cout << "\nTesting eraseAll function:" << endl;
    cout << "Before erasing 2: ";
    printList(head);
    eraseAll(head, 2);
    cout << "After erasing 2: ";
    printList(head);

    // Bellek temizleme
    while (head != nullptr) {
        node<int>* temp = head;
        head = head->next;
        delete temp;
    }

    while (copiedList != nullptr) {
        node<int>* temp = copiedList;
        copiedList = copiedList->next;
        delete temp;
    }

    cout << "Program finished. Press Enter to exit.";
    cin.ignore();
    return 0;
}

