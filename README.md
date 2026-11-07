# cis165-lab9
Name: Kamryn Davis

Course section: CIS-165-W099
# Step-by-Step Process
  	min_max.cpp 
    (1) Declare all the variables used before (value, smallestValue, largestValue, data) 
  	(2) Ask the user for values 
  	(3) Display message that there is no dat if they only type -99  
    (4) Calculate once the user inputs -99 after the other values
    (5) Make a while loop to make the program look through each value inputted to compare the smallest and largest values 
    (6) Display the largest and smallest values 
 
	
# Test Table 
Restored it back to its original values, even though the test table also records other values. Ran it again after restoring it to its assigned values. 


| Value Used | Expected Results | Actual Output | Match or Fix |
| --- | --- | --- |  --- |
| 8,3,12,-99 | Smallest: 3; Largest: 12 | Smallest: 3; Largest: 12 | Match |
| -8,-3, -12,-99 | Smallest: -12; Largest: -3 | Smallest: -12; Largest: -3 | Match | 
| 5,-99 | Smallest: 5; Largest: 5 | Smallest: 5; Largest: 5 | Match | 
| 0,0,-99 | Smallest: 0; Largest: 0 | Smallest: 0; Largest: 0 | Match | 
| -99 | Clear no-data message | Clear no-data message | Match | 
| 5,9,10,-13,-99 |  Smallest: -13; Largest: 10  |  Smallest: -13; Largest: 10  | Match | 

# How To Run The Program 
	1.Copy the code from the file 
  	2.Go to	[OnlineGDB](https://www.onlinegdb.com/) and paste the code 
	3.Make sure the language is C++ and click "Run" 

# Explanation 
**Trace one series through the loop, showing when the extrema are initialized and updated.**
8 : largest and smallest since it is the first value entered;
3: Less than 8 so it updates to 3 as the smallest; 
12: It is greater than 8 so it updates 12 as the largest; 
-99: Ends the loop 
**How does your code keep -99 out of the calculations?**
The code keeps -99 out of the calculation by using value!=-99 in the while loop. 
**Why is initializing both extrema to zero incorrect for some series?**
Intializing both extrema to zero can be incorrect for some series when it was not even entered in the first place. If it incorrectly says at 0, it will not report the other numbers in the series. 
**How do you distinguish an empty series from a series containing zero?**
To distinguish an empty series from a series containing zero by declaring bool data = false at first. Using a true false statement when 0 is in the series or not helps us tell.  
