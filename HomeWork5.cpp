#include <iostream>
#include <stdio.h>


using namespace std;

//=====Exercise 1==============================================================================================

template<typename T>
class Pair1 {
private:
    T a, b;
public:
    Pair1(T a, T b) : a(a),b(b) {}
    
    T first() const { return a; };
    T second() const { return b; };
};

//=====Exercise 2==============================================================================================

template<typename T1, typename T2>
class Pair {
private:
    T1 a; T2 b;
public:
    Pair(T1 a, T2 b) : a(a), b(b) {}

    T1 first() const { return a; };
    T2 second() const { return b; };
};

//=====Exercise 3==============================================================================================

template< typename T2>
class Pair <string, T2> {
private:
    string a; T2 b;
public:
    Pair(string a, T2 b) : a(a), b(b) {}

    string first() const { return a; };
    T2 second() const { return b; };
};

template<typename T2>
class StringValuePair : public Pair<string, T2> {
public:
    StringValuePair(string a, T2 b) : Pair<string, T2>(a, b) {}
};

//=============================================================================================================
int main()
{
    cout << " Ex 1" << endl;
    Pair1<int> p1(6, 9);
    cout << " Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    cout << " Pair: " << p2.first() << ' ' << p2.second() << '\n' << endl;

    //=========================================================================================================

    cout << " Ex 2" << endl;
    Pair<int, double> p3(6, 7.8);
    cout << " Pair: " << p3.first() << ' ' << p3.second() << '\n';

    const Pair<double, int> p4(3.4, 5);
    cout << " Pair: " << p4.first() << ' ' << p4.second() << '\n' << endl;

    //=========================================================================================================

    cout << " Ex 3" << endl;
    StringValuePair<int> svp("Amazing", 7);
    cout << " Pair: " << svp.first() << ' ' << svp.second() << '\n';

    return 0;
}

