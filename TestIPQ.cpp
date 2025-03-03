#include <vector>
#include <iostream>
#include "IPQ.h"

using namespace std;

int main() {





    IPQ <int, 10> ipq;



    ipq.insert("person1", 4);
    ipq.insert("person2", 9);
    ipq.insert("person3", 100);
    ipq.insert("person4", 10);
    ipq.insert("person5", 7);
    cout << "the size of the ipq is " << ipq.size();
    cout << "after inserting 5 ppl into our ipq with person1 having highest priority " << endl;

    ipq.display();
    cout << endl;
    cout << "lets the element with smallest priority using deletemin " << endl;

    cout << "the minimum element that is deleted is " << ipq.deleteMin();
    cout << endl;
    ipq.display();
    cout << endl;

    cout << "the minimum element that is deleted is " << ipq.deleteMin();
    cout << endl;
    ipq.display();
    cout << endl;
    cout << "the minimum element that is deleted is " << ipq.deleteMin();
    cout << endl;
    ipq.display();
    cout << endl;

    cout << "the minimum element that is deleted is " << ipq.deleteMin();
    cout << endl;
    ipq.display();
    cout << endl;

    cout << "the minimum element that is deleted is " << ipq.deleteMin();
    cout << endl;
    ipq.display();
    cout << endl;

    cout << "the minimum element that is deleted is " << ipq.deleteMin();
    cout << endl;
    ipq.display();
    cout << endl;


    cout << "now lets demonstrate remove the same ipq" << endl;
    ipq.clear();
    ipq.insert("person1", 4);
    ipq.insert("person2", 9);
    ipq.insert("person3", 100);
    ipq.insert("person4", 10);
    ipq.insert("person5", 7);
    ipq.display();
    cout << endl;
    cout << "the minimum element is " << ipq.getMin();
    cout << endl;
    cout << "lets remove person5 " << endl;
    ipq.remove("person5");

    ipq.display();
    cout << endl;

    cout << "lets remove person2 " << endl;
    ipq.remove("person2");
    ipq.display();

    cout << endl;


    cout << "lets remove person1 " << endl;
    ipq.remove("person1");
    ipq.display();
    cout << endl;

    cout << "lets remove person3 " << endl;
    ipq.remove("person3");
    ipq.display();
    cout << endl;



    cout << "lets remove person4 " << endl;
    ipq.remove("person4");
    ipq.display();
    cout << endl;

    cout << "lets try changing the priority of person2 " << endl;
    ipq.clear();

    ipq.insert("person1", 4);
    ipq.insert("person2", 9);
    ipq.insert("person3", 100);
    ipq.insert("person4", 10);
    ipq.insert("person5", 7);
    ipq.display();
    cout << endl;

    cout << "lets change the priority of person 2, to 1 " << endl;
    cout << "this should place it at the top " << endl;
    ipq.update("person2", 1);
    ipq.display();


    cout << "----------------------------------------------------------------" << endl;
    cout << "lets work on an ipq of a larger size now " << endl;

    cout << "lets enter in 15 elements, reserved should be used here " << endl;
    ipq.clear();
    ipq.insert("person1", 1);
    ipq.insert("person2", 3);
    ipq.insert("person3", 0);
    ipq.insert("person4", 4);
    ipq.insert("person5", 8);
    ipq.insert("person6", 5);
    ipq.insert("person7", 6);
    ipq.insert("person8", 1000);
    ipq.insert("person9", 112);
    ipq.insert("person10", 12);
    ipq.insert("person11", 19);
    ipq.insert("person12", 20);
    ipq.insert("person13", 21);
    ipq.insert("person14", 22);
    ipq.insert("person15", 225);
    ipq.display();
    cout << endl;
    cout << "the minimum element is " << ipq.getMin() << endl;
    cout << "the size of the ipq is " << ipq.size() << endl;

    cout << "lets remove the first 5 using delete min" << endl;

    cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << "deleted: " << ipq.deleteMin() <<endl;

    ipq.display();
    cout << endl;
    cout << "size is now " << ipq.size() << endl;
    cout << "the new min is now " << ipq.getMin() << endl;

   cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << "deleted: " << ipq.deleteMin() <<endl;
    ipq.display();
    cout << endl;

    cout << "size is now " << ipq.size() << endl;
    cout << "the new min is now " << ipq.getMin() << endl;


    cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << "deleted: " << ipq.deleteMin() <<endl;
    cout << endl;

    cout << "now I will use remove on it " << endl;
    cout << "clear used here " <<endl;
    ipq.clear();

    ipq.insert("person1", 1);
    ipq.insert("person2", 3);
    ipq.insert("person3", 0);
    ipq.insert("person4", 4);
    ipq.insert("person5", 8);
    ipq.insert("person6", 5);
    ipq.insert("person7", 6);
    ipq.insert("person8", 1000);
    ipq.insert("person9", 112);
    ipq.insert("person10", 12);
    ipq.insert("person11", 19);
    ipq.insert("person12", 20);
    ipq.insert("person13", 21);
    ipq.insert("person14", 22);
    ipq.insert("person15", 225);
    ipq.display();
    cout << endl;


    cout << "lets change the priority of person 15, by giving it priority 7" << endl;

    ipq.update("person15", 7);

    cout << endl;

    cout << "lets remove person1-6" << endl;

    ipq.remove("person1");
    ipq.remove("person2");
    ipq.remove("person3");
    ipq.remove("person4");
    ipq.remove("person5");
    ipq.remove("person6");
    ipq.display();
    cout << "the size is " << ipq.size() << endl;
    cout << "the min is " << ipq.getMin() << endl;
    cout << endl;

    cout << "removing the next 6 " << endl;
    ipq.remove("person7");
    ipq.remove("person8");
    ipq.remove("person9");
    ipq.remove("person10");
    ipq.remove("person11");
    ipq.remove("person12");
    ipq.display();
    cout << "the size is " << ipq.size() << endl;
    cout << "the min is " << ipq.getMin() << endl;
    cout << endl;



    cout << "removing the next 3 " << endl;

    ipq.remove("person13");
    ipq.remove("person14");
    ipq.remove("person15");
    ipq.display();
    cout << "the size is " << ipq.size() << endl;
    cout << endl;

    cout << "----------------------------------------------------------------" << endl;
    cout << "preforming random operations " << endl;
    ipq.clear();
    ipq.insert("A", 1);
    ipq.insert("B", 3);
    ipq.insert("C", 5);
    ipq.insert("D", 2);
    ipq.insert("E", 7);
    ipq.insert("F", 8);
    ipq.insert("G", 100);
    ipq.insert("H", 65);
    ipq.insert("I", 32);
    ipq.insert("J", 10);
    ipq.insert("K", 30);
    ipq.insert("L", 50);
    ipq.display();
    cout << endl;
    cout << "the min element is " << ipq.getMin() << endl;
    cout << "the deleted min element is " << ipq.deleteMin() << endl;
    ipq.display();
    cout << endl;
    cout << "now lets remove F,L, J" << endl;
    ipq.remove("F");
    ipq.remove("L");
    ipq.remove("J");

    cout << "update priority of G to the highest priority, and D to 4 " << endl;
    ipq.update("G", 0);
    ipq.update("D", 4);
    ipq.display();
    cout << endl;


    cout << "now lets do some operations using vectors " << endl;
    cout << "----------------------------------------------------" << endl;


    vector<string> people = { "Person1", "Person2", "Person3", "person4", "person5" };
    vector<int> p = { 3, 2, 5,6,0 };


    IPQ<int, 10> ipqq(people, p);

    ipqq.display();
    cout << endl;

    cout << "Min Element: " << ipqq.getMin() << endl;

    cout << "inserting another person into the Ipq " << endl;
    ipqq.insert("person6", 1);

    ipqq.display();
    cout << endl;

    cout << "Deleted Min Element: " << ipqq.deleteMin() << endl;
    ipqq.display();
    cout << endl;

    cout << "Deleted Min Element: " << ipqq.deleteMin() << endl;
    ipqq.display();
    cout << endl;

    cout << "Deleted Min Element: " << ipqq.deleteMin() << endl;
    ipqq.display();
    cout << endl;

    cout << "Deleted Min Element: " << ipqq.deleteMin() << endl;
    ipqq.display();
    cout << endl;

    cout << "Deleted Min Element: " << ipqq.deleteMin() << endl;
    ipqq.display();
    cout << endl;

    cout << "Deleted Min Element: " << ipqq.deleteMin() << endl;
    ipqq.display();
    cout << endl;

    vector<string> peoplees = { "Person1", "Person2", "Person3", "person4", "person5" };
    vector<int> pps = { 3, 2, 5,6,0 };

    IPQ<int, 10> p1(peoplees, pps);



    p1.display();
    cout << endl;

    cout << "removing person3, person1, person6 " << endl;

    p1.remove("Person1");
    p1.remove("Person3");
    p1.remove("Person6");

    p1.display();
    cout << endl;

    cout << "changing priority of person5 to 0 " << endl;
    p1.update("Person5", 0);
    p1.display();
    cout << endl;
    cout << "the new min is " << p1.getMin() << endl;



    cout << "testing on a bigger vector " << endl;
    cout << "-------------------------------------------" << endl;

    vector<string> peoples = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M" };
    vector<int> pp = { 3, 2, 5,6,0 ,100,103,7,10,11,12,50,13 };

    cout << "testing remove on it " << endl;
    IPQ<int, 10> ip1(peoples, pp);
    ip1.display();
    cout << endl;


    cout << "inserting another person into the Ipq " << endl;
    ip1.insert("N", 1000);
    ip1.insert("O", 1001);
    ip1.display();
    cout << endl;

    cout << "Deleted Min Element: " << ip1.deleteMin() << endl;
    cout << "Deleted Min Element: " << ip1.deleteMin() << endl;
    cout << "Deleted Min Element: " << ip1.deleteMin() << endl;
    cout << "Deleted Min Element: " << ip1.deleteMin() << endl;
    cout << "Deleted Min Element: " << ip1.deleteMin() << endl;
    cout << "Deleted Min Element: " << ip1.deleteMin() << endl;
    ip1.display();

    cout << "lets update priority of F to 21  and remove the rest" << endl;
    ip1.update("F", 21);
    ip1.remove("J");
    ip1.remove("K");
    ip1.remove("L");
    ip1.remove("M");
    ip1.remove("N");
    ip1.remove("G");
    ip1.remove("I");
    ip1.remove("O");
    ip1.display();
    cout << endl;


    vector<string> peopless = { "job1", "job2", "job3", "job4", "job5", "job6", "job7", "job8", "job9", "job10", "job11" };
    vector<int> ppp = { 1, 2, 3,6,40 ,1001,1003,7,10,110,120, };
    IPQ<int, 10> ip2(peopless, ppp);
    cout << "the heap is now " << endl;
    ip2.display();
    cout << endl;

    cout << "now lastly preforming random operations on a vector " << endl;

    cout << "removing job1, job6 , job11 " << endl;
    ip2.remove("job1");
    ip2.remove("job6");
    ip2.remove("job11");
    ip2.display();
    cout << endl;
    cout << "deleting the min root and returning it " << endl;
    cout << ip2.deleteMin() << endl;
    cout << "adding in one last element job12" << endl;
    ip2.insert("job12", 100001);
    ip2.display();
    cout << endl;
    cout << "lets place job12 at the top " << endl;
    ip2.update("job12", 0);
    ip2.display();
    cout << endl;
    cout << "the size is " << ip2.size() << endl;
    cout << "end of testing " << endl;
    return 0;
}