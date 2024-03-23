#include <iostream>
#include <vector>
#include <list>
#include <algorithm> // Include for std::find
using namespace std;

class Hashing
{
    vector<list<int>> hashtable;

    int buckets;

public:
    Hashing(int size)
    {
        buckets = size;
        hashtable.resize(size);
    }

    int hashValue(int key)
    {
        return key % buckets; // division method
    }

    void addKey(int key)
    {
        int idx = hashValue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator search(int key)
    {
        int idx = hashValue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);
    }

    void deleted(int key)
    {
        int idx = hashValue(key);
        auto it = search(key);
        if (it != hashtable[idx].end())
        {
            hashtable[idx].erase(it);
        }
    }
    void display()
    {
        for (int i = 0; i < buckets; ++i)
        {
            cout << "Bucket " << i << ": ";
            for (int val : hashtable[i])
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Hashing h(5);
    h.addKey(5);
    h.addKey(7);
    h.addKey(3);
    h.addKey(11);
    h.addKey(11);
    h.display();
    return 0;
}
