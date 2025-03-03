# Implementation-of-an-Indexed-Priority-Queue-


ndexed Priority Queue (IPQ) - Implementation and Usage Guide

Overview
This project implements an Indexed Priority Queue (IPQ) using a heap-based data structure. The IPQ supports efficient operations such as insertion, deletion, updating priorities, and retrieving the minimum-priority element. A hash map is used to maintain node indices, ensuring quick lookups and updates. A Makefile is included to simplify compilation, along with a test file to verify the correctness of the implementation.

Features
The IPQ allows insertion of new tasks with a specified priority, deletion of the task with the highest priority, updating priorities of existing tasks, and retrieving the task with the lowest priority value. It also supports removing tasks by their unique identifier, dynamic resizing of the heap when necessary, and efficient lookups using a hash map to maintain the heap index of each task.

Implementation Details
The IPQ is implemented with a heap data structure that manages priority ordering, a hash map that tracks task indices for efficient access, a Pair struct to store task IDs and their corresponding priorities, and a dynamic array that allows heap elements to resize dynamically.

Class Structure
The IPQ class serves as the interface for priority queue operations, internally managing a Heap instance. The Heap class handles the core operations such as percolate up and percolate down for heap order maintenance, insert, deleteMin, remove, and update for heap manipulation, and reserve for dynamic resizing. The hash map ensures efficient updates and removals.

Usage
To create an IPQ instance, initialize it with a specific capacity. Inserting elements involves calling the insert method with a task ID and priority. The minimum priority task can be retrieved using the getMin method. Tasks can have their priority updated, removed by their identifier, or deleted based on priority order. The isEmpty method checks whether the queue is empty.

Compilation and Testing
A Makefile is included to facilitate compilation. Simply run:
make
A test file is also provided to validate the functionality of the IPQ implementation. To execute the test cases, run:
./test_ipq

Testing
The implementation is tested with small IPQ cases to verify correctness, large IPQ cases to ensure efficiency, and random operations to check stability. It is also tested for proper functionality with two-vector initialization.

Conclusion
This implementation ensures an efficient and optimized priority queue with indexed operations. The use of a heap and a hash map maintains element positions and enables fast updates and deletions.

