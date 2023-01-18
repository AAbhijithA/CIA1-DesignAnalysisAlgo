This is my algorithm for the graph traversal of Prims, Kruskals and Dijkstras
This is done in C++ as it is easy to run lists and graphs via vectors or arrays and hashing to check visited nodes via maps data structures from the STL library in C++

We can see that prims algorithm works for this case as we start from the source which branches out into the solution.
In generic cases prims would fail if we use a source that doesn't lead to anywhere(i.e. loops falsely) but here we get a case with which 
we can travel to all the vertices even though it is directed with a conclusive answer.

For Dijkstras we will continuously forever in case of stacking the negative values of the distance which hyence leads to the wrong answer
or leading the time c omplexity to be infinite and not giving the final answer to the code. In this case since there is a negative value and not many which doesn't lead to too many loops and the negative value terminates towards a singular vertex.

For Kruskals we make no loops in the scenario of adding edges so it may work in the scenario but will give false MST structure as we only add negative weights which
may be mkeant for penalising the graph and hence leading to the false answer of the shortest distance needed.
