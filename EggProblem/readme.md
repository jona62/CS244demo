#Two Eggs, 100 Floors Problem.

###You are given two eggs, both exactly the same, that will break if dropped from
###the window of a certain floor of a building that has 100 floors. Let's say we
###want to know which floors are safe to drop the eggs from. This means that we
###need to find the lowest floor in which dropping the eggs will break them.

##Some things you can assume:

* If an egg survives the fall, it can be used again.

* You cannot use an egg again if it has broken.

* The effect of a fall is the same for all eggs (that is to say if the first egg
breaks from floor 15, then the second egg will also break from floor 15, etc)

* If an egg breaks when dropped, then it will break if dropped from a higher
floor.

* This is not a trick question, the eggs do have some floor(s) whose drops will
break them.

* **What matters is if your approach finds the floor, if your approach requires
that both eggs must be broken, that's totally fine.**

I encourage you to figure out a solution that minimizes the amount of egg drop
trials, however _solving the problem comes first_, optimization afterward.
