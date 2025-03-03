
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

template <typename T, int Capacity>
class IPQ {
public:
    IPQ(int initialC = 10) : h(initialC + 1) 
    {

        capacity = initialC;

    }

    IPQ(const std::vector<std::string>& tasks, const std::vector<int>& priorities) : h(tasks, priorities) {
        capacity = tasks.size();


    }


    void display() {
        h.display();
    }

    const std::string& getMin() 
    {
        return h.getMin();
    }

    void update(const std::string& tid, int p) 
    {
        h.update(tid, p);
    }


    void insert(const std::string& tid, int p) 
    {
        h.insert(tid, p);
    }

    const std::string& deleteMin() 
    {
        return h.deleteMin();
    }


    void remove(const std::string& tid) 
    {
        h.remove(tid);
    }

    bool isEmpty() 
    {
        return h.isEmpty();
    }


    void clear() 
    {
        h.clear();
    }

    int size() 
    {
        return h.getSize();
    }


    void reserve(int i) 
    {
        h.reserve(i);
    }



private:
    struct Pair 
    {
        string I;
        int ps;
        Pair() : I(""), ps(0) 
        {

        }
        Pair(const std::string& ids, int priority) : I(ids), ps(priority) 
        {

        }

    };

    class Heap {
    private:
        Pair* pairedArray;
        unordered_map<string, int> M;
        int capacity;
        int size;

        int getParent(int node) 
        {
            return node / 2;
        }

        int left(int i) 
        {
            return 2 * i;
        }

        int right(int i) 
        {
            return 2 * i + 1;
        }

        void percolateUp(int node) 
        {
            if (node == 1) {
                return;
            }
            int parent = getParent(node);
            if (pairedArray[node].ps < pairedArray[parent].ps) {
            
                swap(node, parent);
                percolateUp(parent);
            }
            return;
        }

        void percolateDown(int node) 
        {
            int l = left(node);
            int r = right(node);
            int min = node;
            if (node >= size)
            {
                return;
            }

            if (l <= size && pairedArray[l].ps < pairedArray[min].ps) {
                min = l;
            }
            if (r <= size && pairedArray[r].ps < pairedArray[min].ps) {
                min = r;
            }

            if (min != node) {
                swap(node, min);
                percolateDown(min);
            }
        }


        void swap(int swap, int swap2) 
        {
            Pair temps = pairedArray[swap];
            pairedArray[swap] = pairedArray[swap2];
            pairedArray[swap2] = temps;
            M[pairedArray[swap].I] = swap;
            M[pairedArray[swap2].I] = swap2;
        }

    public:
        Heap(int iCapacity) 
        {
            size = 0;
            capacity = iCapacity;
            pairedArray = new Pair[capacity + 1];
        }

        Heap(const std::vector<std::string>& tasks, const std::vector<int>& priorities) {
            capacity = tasks.size();
            size = tasks.size();
            pairedArray = new Pair[capacity + 1];

           size_t k = 0;

            while (k < tasks.size())
            {
                pairedArray[k + 1].I = tasks[k];
                pairedArray[k + 1].ps = priorities[k];
                M[tasks[k]] = k + 1;
                k++;
            }
            makeHeap(size);
        }
        ~Heap() 
        {
            delete[] pairedArray;
        }

        void insert(const std::string& tid, int p) 
        {
            if (p < 0)
            {
                return;
            }
            auto beg = M.begin();
            while (beg != M.end())
            {
                if (beg->first == tid)
                {

                    return;
                }

                beg++;
            }
            if (size == capacity || size > capacity) {
                reserve(2 * capacity);
            }

            size++;
            pairedArray[size].I = tid;
            pairedArray[size].ps = p;
            M[tid] = size;
            percolateUp(size);
        }


        const std::string& deleteMin() {

            int top = 1;
            if (size == 0) {


            }

            swap(top, size);
            const std::string& temp = pairedArray[size].I;
            size--;
            M.erase(temp);
            percolateDown(top);
            return temp;
        }

        const std::string& getMin() {
            if (size == 0) {

            }
            return pairedArray[1].I;
        }

        void update(const std::string& tid, int newp) {
            auto beg = M.begin();
            while (beg != M.end())
            {
                if (beg->first == tid)
                {
                    int node = beg->second;
                    int other = pairedArray[node].ps;
                    pairedArray[node].ps = newp;
                    if (newp < other) {
                        percolateUp(node);
                    }
                    else if (newp > other) {
                        percolateDown(node);
                    }
                    break;
                }
                beg++;
            }
            return;
        }
    


        void remove(const std::string& tid) 
        {

            if (find(tid))
            {
                auto runs = M.find(tid);

                    int finder = runs->second;

                    M.erase(runs);

                    pairedArray[finder] = pairedArray[size];


                    M[pairedArray[finder].I] = finder;

                    size--;

                    percolateDown(finder);


            }

        }



        bool find(const std::string& tid)
        {
            auto finder = M.find(tid);
            if (finder != M.end()) 
            {
           
                return true;
            }
            else
            {
                return false;
            }


        }


        bool isEmpty() 
        {

            return size == 0;
        }

        int getSize() 
        {

            return size;
        }

        void clear() 
        {
            M.clear();
            delete[] pairedArray;
            pairedArray = new Pair[capacity + 1];
            size = 0;
        }

        void reserve(int newcap) 
        {
            if (newcap < 10)
            {
                return;
            }
            capacity = newcap;
            Pair* newArray = new Pair[newcap + 1];
            for (int i = 1; i <= size; ++i) 
            {

                newArray[i] = pairedArray[i];
            }
            delete[] pairedArray;
            pairedArray = newArray;
        }

        void display() 
        {
            for (int i = 1; i <= size; ++i) 
            {
                cout << pairedArray[i].I << " : " << pairedArray[i].ps << endl;
            }
        }

        void makeHeap(int node) 
        {
            for (int i = getParent(node); i >= 1; i--) 
            {
                percolateDown(i);
            }
        }
    };

private:
    Heap h;
    int capacity;
};