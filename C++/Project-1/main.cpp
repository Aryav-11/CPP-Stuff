# include <iostream>
# include <string>
# include <conio.h>

using namespace std;

int main() {
    string op;
    string password;
    cout << "Enter Your Name: ";
    getline(cin, op);
    cout << endl << "Your Name Is " << op <<endl;
    cout << endl << "Enter Your Password: ";
    getline(cin, password);
    cout << endl << "Your Password Is " << password << endl;

/**< char buf[128];
void *s = malloc (size);
sprintf(buf, "%p\n",s); */

    return 0;
}
