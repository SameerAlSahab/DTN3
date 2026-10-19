#include <iostream>
#include <string>

using namespace std;

class Bundle {
    public: 
    string destination;
    float payload_size;
    
    void print_info() {
        cout << "Sending " << payload_size << "KB to " << destination;
    }
};

int main() {
    string scheme = "dtn://";
    string node = "EWU-PC-517";
    
    Bundle b1;
    
    string full_eid = scheme + node;
    
    cout << "Full EID is " << full_eid << endl;
    cout << "EID length is " << full_eid.length() << endl;
    
    b1.destination = "dtn://mars";
    b1.payload_size = 5000.12; // KB
    b1.print_info();
    
}
