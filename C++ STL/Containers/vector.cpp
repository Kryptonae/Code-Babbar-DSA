#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> marks(5, -1); // vector of size 5 with all elements initialized to -1
    // vector<int> marks; // vector of size 5 with all elements initialized to -1

    // cout << "Maximum size of vector: " << marks.max_size(); // maximum size of vector

    // marks.reserve(4); // reserve space for 4 elements in the vector

    // marks.push_back(10); // add 10 to the end of the vector
    // marks.push_back(20); // add 20 to the end of the vector
    // marks.push_back(30); // add 30 to the end of the vector
    // marks.push_back(40); // add 40 to the end of the vector

    // marks.erase(marks.begin(), marks.end()); // erase all elements from the vector

    // marks.clear(); // clear the vector

    // cout << "Element inserted: " << *(marks.insert(marks.begin(), 50)) << endl; // insert 50 at the beginning of the vector

    // cout << "Size of vector: " << marks.size() << endl; // size of vector

    // cout << "Address of first element of vector is: " << *(marks.begin()) << endl; // address of first element of vector

    // cout << "Capacity of vector: " << marks.capacity() << endl; // capacity of vector

    // cout << "First element of vector: " << marks.at(0) << endl; // first element of vector
    // cout << "Second element of vector: " << marks.at(1) << endl; // second element of vector
    // cout << "Third element of vector: " << marks.at(2) << endl; // third element of vector
    // cout << "Fourth element of vector: " << marks.at(3) << endl; // fourth element of vector

    // cout << "First element of vector: " << marks[0] << endl; // first element of vector
    // cout << "Second element of vector: " << marks[1] << endl; // second element of vector
    // cout << "Third element of vector: " << marks[2] << endl; // third element of vector
    // cout << "Fourth element of vector: " << marks[3] << endl; // fourth element of vector

    /*
        if (marks.empty() == true)
        {
            cout << "Vector is empty" << endl; // check if vector is empty
        }
        else
        {
            cout << "Vector is not empty" << endl; // check if vector is not empty
        }
    */

    // marks.pop_back(); // remove last element from the vector

    // cout << "Size of vector after pop_back: " << marks.size() << endl; // size of vector after pop_back

    // cout << "Last element of vector: " << marks.back() << endl; // last element of vector

    // marks.push_back(50); // add 50 to the end of the vector

    // cout << "Size of vector after push_back: " << marks.size() << endl; // size of vector after push_back

    // cout << "First element of vector: " << marks.front() << endl; // first element of vector
    // cout << "Last element of vector: " << marks.back() << endl; // last element of vector

    // cout << "Elements of vector 1: " << *(marks.begin()) << endl; // address of first element of vector
    // cout << "Elements of last element of vector: " << *(marks.end()) << endl; // address of last element of vector

    // cout << *(marks.begin()) << endl; // This will cause undefined behavior since the vector is empty and dereferencing the begin iterator is invalid.

    // cout << *(marks.end()) << endl; // This will cause undefined behavior since the vector is empty and dereferencing the begin iterator is invalid.

    // vector<int> miles(10); // vector of size 10

    // vector<int> distances(15,0); // vector of size 15 with all elements initialized to 0

    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);

    vector<int>::iterator it = first.begin(); // iterator to the first element of the vector

    while (it != first.end())
    {
        cout << *it << " "; // print the elements of the vector
        it++;
    }

    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // second.push_back(400);

    // first.swap(second); // swap the contents of first and second vectors

    // cout << first[0] << endl; // 100
    // cout << first[1] << endl; // 200
    // cout << first[2] << endl; // 300
    // cout << first[3] << endl; // 400
    /*
        for (int i : first)
        {
            cout << i << endl; // 100 200 300 400
        }

        for (int i : second)
        {
            cout << i << endl; // 100 200 300 400
        }
     */
    // cout << second[0] << endl; // 10
    // cout << second[1] << endl; // 11
    // cout << second[2] << endl; // 12
    // cout << second[3] << endl; // 13

    return 0;
}