#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Bundle {
    public: 
    string source;
    string target;
    string payload;
    float payload_size;
    
    void print_info() {
        cout << "Sending text " << payload << endl;
        cout << " Size: " << payload_size << endl;
        cout << " Source: " << source << endl;
        cout << " To: " << target << endl;
    }
};

int main() {
    string scheme = "dtn://";
    
    Bundle b1;
    
    b1.source = "EWU-PC-517";
    b1.target = "dtn://mars";
    b1.payload = "Hello aliens!!! This message is sent from EWU to mars!";
    b1.payload_size = 5000.12; // KB
    
    vector<Bundle> queue;
    
    queue.push_back(b1);
    
    cout << "Bundles left to send: " << queue.size() << endl;
    
    string full_eid = scheme + b1.source;
    
    cout << "Full EID is " << full_eid << endl;
    cout << "EID length is " << full_eid.length() << endl;
    
    for (int i = 0; i < queue.size(); i++) {
        cout << "Bundle No. #" << i + 1 << endl;
        queue[i].print_info();
    }
    
    return 0;
}
