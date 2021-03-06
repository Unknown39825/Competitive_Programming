Candy
=====

Farmer John knows that Bessie loves to eat candy. FJ has N (1 <= N
<= 40,000) candies that he wants to give Bessie over some number
of days. Each day, Farmer John gives Bessie a choice of how many
candies she chooses to eat that day by choosing the number from a
master list FJ supplies that has Nopt (1 <= Nopt <= 50) different options,
C_i (1 <= C_i <= N). She must take exactly C_i candies, no more,
no less.

Farmer John has also disclosed F (1 <= F <= 50) of his favorite
numbers, FN_i (1 <= FN_i <= N). Whenever the number of candies
remaining at the end of the day precisely matches one of these
favorite numbers, Bessie has the option to have him add exactly M
(1 <= M <= 100) more candies to the candy supply. Bessie might get
another option to add M candies several times if adding candies
creates another favorite number. In the best circumstances, Bessie
can obtain an infinite amount of candy!

When Bessie cannot choose some amount of candy to take (because
there is not enough), and the number of candies remaining is not
any of FJ's favorite numbers, she cannot have any more candy.
Unfortunately, Bessie cannot think ahead as far as she'd like to,
so she needs your help in order to eat as many candies as possible.

By way of example, consider this scenario:
    * Farmer John's basket initially contains 10 candies
    * Bessie can chose to eat either 3 or 5 candies each day
    * Farmer John will add 1 candy any time the remaining number
      of candies is 2 or 4

Bessie could use this set of choices to maximize the amount of candy
she can eat:
                  Initial      # Candies   Remaining     Bonus     Final
        Day      # Candies       Eaten      Candies     Candies   Candies
         1          10             3          7            0        7
         2           7             3          4            1        5
         3           5             3          2            1        3
         4           3             3          0            0        0

Total candies eaten = 3 + 3 + 3 + 3 = 12.

PROBLEM NAME: candy

INPUT FORMAT:

* Line 1: Four space-separated integers: N, Nopt, F, and M

* Lines 2..Nopt+1: Line i+1 contains a single integer: C_i

* Lines Nopt+2..Nopt+F+1: Line i+Nopt+1 contains a single integer:
        FN_i

SAMPLE INPUT:

10 2 2 1
3
5
4
2

OUTPUT FORMAT:

* Line 1: A single integer, denoting the maximum amount of candies
        Bessie can eat, or -1 if  Bessie can eat an infinite amount of
        candy.

SAMPLE OUTPUT:

12
