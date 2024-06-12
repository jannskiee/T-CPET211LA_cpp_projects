// Six days of Christmas: There is a song entitled "Twelve days of Christmas". For this problem, lets make it six days.
// Using the value of the arrays DAYS [6] and GIFTS[6] as shown below,
// apply the principles of nested loop statement to display the song.
// DAYS[0] = "FIRST                     GIFTS[0] = "A partridge in a pear tree"
// DAYS[1] = "SECOND"                  GIFTS[1] = "Two turtle doves"
// DAYS[2] = "THIRD"                   GIFTS[2] = "Three French hens"
// DAYS[3] = "FOURTH"                  GIFTS[3] = "Four calling birds"
// DAYS[4] = "FIFTH"                   GIFTS[4] = "Five golden rings"
// DAYS[5] = "SIXTH"                   GIFTS[5] = "Six geese a-laying"
// *take note the conjunction (and) in the sentence

#include <iostream>

int main() {
    std::string DAYS[6] = {"FIRST", "SECOND", "THIRD", "FOURTH", "FIFTH", "SIXTH"};
    std::string GIFTS[6] = {"A partridge in a pear tree",
                            "Two turtle doves",
                            "Three French hens",
                            "Four calling birds",
                            "Five golden rings",
                            "Six geese a-laying"};

for (int i = 0; i < 6; i++) {
    std::cout << "On the " << DAYS[i] << " day of Christmas my true love gave to me" << std::endl;

    // Print all the gifts for the current day
    for (int j = i; j > 0; j--) {
        std::cout << GIFTS[j] << std::endl;
    }

    // Print the first gift with "and" prefix if it's not the first day
    if (i != 0) {
        std::cout << "and ";
    }
    std::cout << GIFTS[0] << std::endl;

    // Print a blank line for separation
    std::cout << std::endl;
}

    return 0;
}
