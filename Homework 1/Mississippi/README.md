#String Dictionary

**Problem:** Create a dictionary using all the words that can be created from the letters of "Mississippi".

**Tips:** Should be in alphabetical order.

**Extra:** Make it user interactive so that create the dictionary based on the input.

There are two algorithms, that I use. First is almost brute force with DFS so it takes a lot of time. Second one is Generation in lexicographic order. Which is O(1). (_There is a huge gap between them, for 11 letters the difference will be 180 times or so._)

Using terminal for finding the city name in the dictionary (or any other words):

        $ g++ Lexicographic.cpp
        $ ./a.out > nameOfTheTextFile.txt
        $ grep 'CITY-NAME' nameOfTheTextFile.txt

Here is the example testcase
![Example](https://github.com/BedirT/MATH-2317_Discrete-Math/blob/master/Homework%201/Mississippi/img.png)
