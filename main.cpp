#include <iostream>
#include <fstream>
using namespace std;

class Road {
    private:
        int length;
        int width;
    public:
        Road() {
            length = 0;
            width = 0;
        }
        void setLength(int l) {
            length = l;
        }
        void setWidth(int w) {
            width = w;
        }
        void print() {
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
        }
        
        void readFromFile(string fileName) {
            ifstream file(fileName);
            if (file.is_open()) {
                file >> length >> width;
                file.close();
            } else {
                cout << "Unable to open file." << endl;
            }
        }
};


int main() {
    Road r1;
    r1.print();
   
    r1.readFromFile("data.txt");
    r1.print();
    
    return 0;
}
