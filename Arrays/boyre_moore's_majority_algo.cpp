// Leetcode 169. Majority Element
// https://leetcode.com/problems/majority-element/

// Boyer-Moore's majority voting algorithm

// This algorithm states that if any element occurs more than  
// 
// 
// n/2  times, then you can find the majority element using the following algorithm:

// Initialize the possible predicted candidate for the answer to be 0, and mark its frequency or count as 0.
// Iterate over the nums array
// If count == 0, then set the candidate to the current num because as of now, this is the most occuring (appeared once which is more than 0 times).
// If num == candidate, increase its count because it has already appeared.
// If num is different than candidate, do count -- → Why does this work? See explanation in step 6.
// Repeat 3, 4, 5 → If count becomes 0, then update candidate, So the candidate is updated and the older one is no longer a good choice as a candidate.
// WHY?

// Because if the older one is the majority element then it would have not been cancelled by the other minor elements i.e. because we are doing count -- only when we don’t get the same element.
// 7. The element stored in candidate is indeed our required answer!!

// As it is guarrenteed that answer exists, so there is no need for further checking.
// Return candidate.