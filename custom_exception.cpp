// #include <iostream>
// using namespace std;

// class MyCustomException : public std::exception {
//     public:
// char * what () {
//         return "Custom C++ Exception";
//     }
// };

// int main() {
//     try {
//         throw MyCustomException();
//     } catch (MyCustomException mce) {
//         cout << "Caught MyCustomException" << endl;
//         cout << mce.what();
//     }
// }

/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class MyCustomException : public std::exception {
    private:
    char * message;

    public:
    MyCustomException(char * msg) : message(msg) {}
    char * what () {
        return message;
    }
};

int main() {
    try {
        throw MyCustomException("Custom C++ Exception");
    } catch (MyCustomException mce) {
        cout << "Caught MyCustomException" << endl;
        cout << mce.what();
    }
}