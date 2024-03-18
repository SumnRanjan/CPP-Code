//https://www.codingninjas.com/studio/problems/interleave-the-first-half-of-the-queue-with-the-second-half_1169450?leftPanelTabValue=SUBMISSION
//Interleave The First Half Of The Queue With The Second Half

#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    queue<int>q1;
    int size = q.size();

    //Half--
    for(int i = 0 ; i<size/2 ; i++){
        int temp = q.front();
        q.pop();
        q1.push(temp);
    }

    //merge--
    for(int i = 0; i<size/2 ; i++){
        int temp = q1.front();
        q1.pop();

        q.push(temp);

        temp = q.front();
        q.pop();
        
        q.push(temp);
    }
}