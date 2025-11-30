
#include <iostream>
#include <string>
using namespace std;

class Neighbour {
private:
    string name;
    int age;
    string hobby;
    string personality;

public:
    Neighbour(string n, int a, string h, string p) {
        name = n;
        age = a;
        hobby = h;
        personality = p;
    }

    void introduce() {
        cout << "My neighbour's name is " << name << "." << endl;
        cout << "He is " << age << " years old." << endl;
        cout << "His hobby is " << hobby << "." << endl;
        cout << "Personality: " << personality << endl;
    }

    void greet() {
        cout << name << " says: 'Hey! How are you doing today?'" << endl;
    }

    void playHobby() {
        cout << name << " is playing " << hobby << " right now." << endl;
    }

    void visit() {
        cout << name << " just came over to visit." << endl;
    }

    void describePersonality() {
        cout << name << " is known to be " << personality << "." << endl;
    }
};

int main() {
    Neighbour neighbour1("Joshua Kinuthia", 20, "PES", "friendly and funny");

    neighbour1.introduce();
    neighbour1.greet();
    neighbour1.playHobby();
    neighbour1.visit();
    neighbour1.describePersonality();

    return 0;
}
