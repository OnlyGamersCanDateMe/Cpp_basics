#include<iostream>
#include<string>
#include<map>   // Include the header
using namespace std;

int main()
{
    //declaration
    multimap <int, string> mmap1;

    //init.
    multimap <int, string> mmap2 = { {101, "Vedinesh"}, {201, "Tim"}, {201, "Faran"} };


    multimap <int, string>::iterator i = mmap2.begin();
    //check
    for (i; i != mmap2.end(); i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
    cout << endl;


    //alter
    // mmap2[201] = "Tim";            // can't be done
    


    //insert:- insert key,value.
    //2 approach
    mmap2.insert(pair<int, string>(106, "Amit"));

    mmap2.insert(make_pair(208, "Hina"));

    //check
    for (multimap<int, string>::iterator i = mmap2.begin(); i != mmap2.end(); i++)
    {
        cout << i->first << " ";   // for printing the map KEY

        cout << i->second << endl;   // for printing Value - for string value
                                     //don't forget to include STRING header.
    }
    cout << endl;

    //erase(): remove entry in map pointed by iterator
    multimap<int, string>::iterator del = mmap2.begin();
    mmap2.erase(del);

    //check
    for (map<int, string>::iterator i = mmap2.begin(); i != mmap2.end(); i++)
    {
        cout << i->first << " ";   // for printing the map KEY

        cout << i->second << endl;   // for printing Value - for string value
                                     //don't forget to include STRING header.
    }
    cout << endl;

    // swap
    // mmap1.swap(mmap2);

    //clear : Delete all the elements in multimap.

    //count : Return number of elements matching with given key.
    cout << "Count No of 201 : " << mmap2.count(201) << endl;

    // size : Returns the number of elements in the multimap.
    cout << "No of Elements : " << mmap2.size() << endl;
    return 0;
}
