This is my algorithm for the graph traversal of Prims, Kruskals and Dijkstras
This is done in C++ as it is easy to run lists and graphs via vectors and hashing to check visited nodes via maps data structures from the STL library in C++

We can see that prims algorithm works for this case as we start from the source which branches out into the solution.
In generic cases prims would fail if we use a source that doesn't lead to anywhere, but here we get a case with which 
we can travel to all the vertices even though it is directed.
