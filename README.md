# C_Fairness-Algorithm
 max-min weighted fair share allocation


***********************

We often run into the problem of dividing a scarce resource among a set of users, each of whom has an equal right to the resource, but some of whom intrinsically demand fewer resources than others. How, then, should we divide the resource? A sharing technique widely used in practice is called max-min fair share. Intuitively, a fair share allocates a user with a "small" demand what it wants, and evenly distributes unused resources to the "big" users. Formally, we define max-min fair share allocation to be as follows:

 - Resources are allocated in order of increasing demand
 - No source gets a resource share larger than its demand
 - Sources with unsatisfied demands get an equal share of the resource

This formal definition corresponds to the following operational definition. Consider a set of sources 1, ..., n that have resource demands x1, x2, ..., xn. Without loss of generality, order the source demands so that x1 <= x2 <= ... <= xn. Let the server have capacity C. Then, we initially give C/n of the resource to the source with the smallest demand, x1. This may be more than what source 1 wants, perhaps, so we can continue the process. The process ends when each source gets no more than what it asks for, and, if its demand was not satisfied, no less than what any other source with a higher index got. We call such an allocation a max-min fair allocation, because it maximizes the minimum share of a source whose demand is not fully satisfied.

But sometimes, we may want to give some sources a bigger share than others. In particular, we may want to associate weights w1, w2, ..., wn with sources 1, 2, ..., n, which reflect their relative resource share. We extend the concept of max-min fair share to include such weights by defining the max-min weighted fair share allocation as follows:

 - Resources are allocated in order of increasing demand, normalized by the weight
 - No source gets a resource share larger than its demand
 - Sources with unsatisfied demands get rerource shares in proportion to their weights

http://www.ece.rutgers.edu/~marsic/Teaching/CCN/minmax-fairsh.html
***********
