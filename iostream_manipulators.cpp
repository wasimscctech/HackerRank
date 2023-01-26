#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// ios manipulators (https://www.geeksforgeeks.org/manipulators-in-c-with-examples/)
/* setiosflag, resetiosflags, internal, hex, showbase, right, fixed, scientific, noshowpos & showpos.
  these functions are a manipulator, it is designed to be used alone with no arguments in conjunction with the insertion (<<) and extraction (>>) operations on streams, Stream object whose format flag is affected.
  */
int main()
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    // cout << setiosflags(ios::lowercase);
    cout << setw(0xf) << internal;
    while (T--)
    {
        double A, B, C;
        cin >> A >> B >> C;

        cout << std::resetiosflags(std::ios::uppercase) << setw(0) << internal; // reset the iosflags
        
        // : Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the 0x  prefix) in lower case letters.
        cout << std::hex << std::showbase << lround(A) << endl;

        // Print it to a scale of 2 decimal places, preceded by a + or - sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly  characters wide.
        cout <<showpos<< setw(15) << setfill('_') << right << fixed << setprecision(2) << B << endl;

        // Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.
        cout << scientific << setprecision(9) << C;

        // cout << lround(A) << endl;
        // cout.precision(15);
        // cout << setw(0xf) << internal;
        // double b = ceil(B * 100.0) / 100.0; //using ceil and floor is used to set 2 decimal places
        // double b = floor(B * 100.0) / 100.0;
        // cout<<b;
        //  printf("%15.2f\n", B); // for setw(15) with 2 decimal place accuracy
        /*
        std::ios_base::fmtflags f( cout.flags() );
        //Your code here...
        cout.flags( f );
        */
    }
    return 0;
}