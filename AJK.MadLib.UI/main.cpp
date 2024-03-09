#include <iostream>
#include <string.h>
#include <string>
#include <array>

using namespace std;

void defined(string array[])
{
    cout << "one day my " << array[0] << " friend and I decided to go to the " << array[1] << " game in " << array[2] << "." << endl;
    cout << "We really wanted to see " << array[3] << " play." << endl;
    cout << "So we " << array[4] << " in the " << array[5] << " and headed down to " << array[6] << " and bought some " << array[7] << "." << endl;
    cout << "We watched the game and it was " << array[8] << "." << endl;
    cout << "We ate some " << array[9] << " and drank some " << array[10] << "." << endl;
    cout << "We had a " << array[11] << " time, and can't wait to go again." << endl;
}

int main() {
    string questons[] = { "an adjective (describing word): ", "a sport: ","a city: ","a person: ",
    "an action verb (past tense): ","a vehicle: ","a place: ","a noun (thing, plural): ",
    "an adjective (describing word): ","a food (plural): ","a liquid: ","an adjective (describing word): " };

    int l = sizeof(questns) / sizeof(questons[0]);
    string mad_lib[l];
    for (int i = 0; i < l; i++)
    {
        cout << "Enter " << questons[i];
        getline(cin, mad_lib[i]);
    }
    cout << "\n";
    defined(mad_lib);

    return 0;
}