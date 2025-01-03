#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std; // namespace std ���

class Book {
public:
    string title;
    string author;

    Book(const string& title, const string& author)
        : title(title), author(author) {
    }
};

class BookManager {
protected: 
    vector<Book> books; // å ��� ����

private:
    Book* getBookByTitle(string title) {
       

        return;
    }

    Book* getBookByAuthor(string author) {


    }

public:
    // å �߰� �޼���
    void addBook(const string& title, const string& author) {
        books.push_back(Book(title, author)); // push_back ���
        cout << "å�� �߰��Ǿ����ϴ�: " << title << " by " << author << endl;
    }

    // ��� å ��� �޼���
    void displayAllBooks() const {
        if (books.empty()) {
            cout << "���� ��ϵ� å�� �����ϴ�." << endl;
            return;
        }

        cout << "���� ���� ���:" << endl;
        for (size_t i = 0; i < books.size(); i++) { // �Ϲ����� for�� ���
            cout << "- " << books[i].title << " by " << books[i].author << endl;
        }
    }
       

    

    void findBookByTitle(string title) {
        int bookNumber = 0;
        bool isFound = false;
        for (int i = 0; i < books.size(); i++) {
            if (books[i].title == title) {
                isFound = true;
                bookNumber = i;
                cout << "��ġ�ϴ� ����: " << "\n -> " << books[i].title << " by " << books[i].author << endl;
                break;
            }
            else {}
        }
        if (isFound = true) {
            cout << "1. �뿩�ϱ� 2. �����޴�" << endl;
            int choiceBorrow;
            cin >> choiceBorrow;
            if (choiceBorrow == 1) {
                getBookByTitle(title);
            }
        }
        else {findBookByAuthor(title); 
        }
    }

    void findBookByAuthor(string author) {
        bool isFound = false;
        for (int i = 0; i < books.size(); i++) {
            if (books[i].author == author) {
                isFound = true;
            }
        }
        if (isFound = true) {
            cout << "1. �뿩�ϱ� 2. �����޴�" << endl;
            int choiceBorrow;
            cin >> choiceBorrow;
            if (choiceBorrow == 1) {
                getBookByAuthor(author);           
            }
        }
        else { cout << "��ġ�ϴ� ����� �����ϴ�." << endl; }
    }

    //Book* getBookByAuthor(string author) {}


    /*void searchByTitle(string title) {
        bool isFound = false;
        for (int l = 0; l < books.size(); l++) {
            if (books[l].title == title) {
                isFound = true;
                cout << "��ġ�ϴ� ����: " << "\n -> " << books[l].title << " by " << books[l].author << endl;
            }
            else {}
        }
        if (isFound == false) { searchByAuthor(title); }
    }

    void searchByAuthor(string author) {
        vector<int>searchResult;
        for (int w = 0; w < books.size(); w++) {
            if (books[w].author == author) {
                searchResult.push_back(w);
            }
            else {}
        }
        if (searchResult.empty()) { cout << "��ġ�ϴ� ����� �����ϴ�." << endl; }
        else {
            cout << "��ġ�ϴ� �۰�: " << endl;
            for (int y = 0; y < searchResult.size(); y++) {
                cout << " -> " << books[searchResult[y]].title << " by " << books[searchResult[y]].author << endl;
            }
        }
    }*/
};

class borrowManager {
private:
    unordered_map<string, int>stock = {

    };


public:
    void initializeStock(Book book, int quantity = 3) {
       
    }

    void borrowBook(string title){}

    void retrunBook(string title){}

    void displayStock(){}

};

int main() {
    BookManager manager;

    // ������ ���� ���α׷��� �⺻ �޴��� �ݺ������� ����Ͽ� ����� �Է��� ó���մϴ�.
    // ���α׷� ���Ḧ �����ϱ� ������ ��� �����մϴ�.
    while (true) {
        cout << "\n������ ���� ���α׷�" << endl;
        cout << "1. å �߰�" << endl; // å ������ �Է¹޾� å ��Ͽ� �߰�
        cout << "2. ��� å ���" << endl; // ���� å ��Ͽ� �ִ� ��� å ���
        cout << "3. �˻�" << endl; // �˻�
        cout << "4. �뿩" << endl; // �뿩
        cout << "5. �ݳ�" << endl; // �ݳ�
        cout << "6. ����" << endl; // ���α׷� ����
        cout << "����: ";

        int choice; // ������� �޴� ������ ����
        cin >> choice;


        if (choice == 1) {
            // 1�� ����: å �߰�
            // ����ڷκ��� å ����� ���ڸ��� �Է¹޾� BookManager�� �߰��մϴ�.
            string title, author;
            cout << "å ����: ";
            cin.ignore(); // ���� �Է��� �ܿ� ���۸� ����
            getline(cin, title); // ���� �Է� (���� ����)
            cout << "å ����: ";
            getline(cin, author); // ���ڸ� �Է� (���� ����)
            manager.addBook(title, author); // �Է¹��� å ������ �߰�
        }
        else if (choice == 2) {
            // 2�� ����: ��� å ���
            // ���� BookManager�� ����� å ����� ����մϴ�.
            manager.displayAllBooks();
        }
        else if (choice == 3) {
            // 3�� ����: �˻�
            // �˻� �ɼ����� �̵��մϴ�.
            string searchTerm; // �˻���            
            cout << "�˻�� �Է����ּ���.: ";
            cin.ignore();
            getline(cin, searchTerm);
            cout << "- �˻���� ";
            manager.findBookByTitle(searchTerm);
        }
        else if (choice == 4) {
            // 4�� ����: �뿩
            // ������ �뿩�մϴ�.

        }
        else if (choice == 5) {
            // 5�� ����: �ݳ�
            // ������ �ݳ��մϴ�.

        }
        
        else if (choice == 6) {
            // 6�� ����: ����
            // ���α׷��� �����ϰ� ����ڿ��� �޽����� ����մϴ�.
            cout << "���α׷��� �����մϴ�." << endl;
            break; // while ���� ����
        }
        else {
            // �߸��� �Է� ó��
            // �޴��� ���� ��ȣ�� �Է����� ��� ��� �޽����� ����մϴ�.
            cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl;
        }
    }

    return 0; // ���α׷� ���� ����
}







/*Book* findBookByTitle(string title) {
    int bookNumber = 0;
    bool isFound = false;
    for (int i = 0; i < books.size(); i++) {
        if (books[i].title == title) {
            isFound = true;
            bookNumber = i;
            cout << "��ġ�ϴ� ����: " << "\n -> " << books[i].title << " by " << books[i].author << endl;
            break;
        }
        else {}
    }
    if (isFound = true) {
        cout << "1. �뿩�ϱ� 2. �����޴�" << endl;
        int choiceBorrow;
        cin >> choiceBorrow;
        if (choiceBorrow == 1) {
            return books[bookNumber].title;
        }
    }
    else {// findBookByAuthor(title); 
    }
}

Book* findBookByAuthor(string author) {
    bool isFound = false;
    for (int i = 0; i < books.size(); i++) {
        if (books[i].author == author) {
            isFound = true;
        }
    }
    if (isFound = true) {
        cout << "1. �뿩�ϱ� 2. �����޴�" << endl;
        int choiceBorrow;
        cin >> choiceBorrow;
        if (choiceBorrow == 1) {
            //getBookByAuthor(author);                
        }
    }
    else { cout << "��ġ�ϴ� ����� �����ϴ�." << endl; }
}*/