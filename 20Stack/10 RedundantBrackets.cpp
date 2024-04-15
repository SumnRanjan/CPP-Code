// Redundant Brackets 
//https://www.codingninjas.com/studio/problems/redundant-brackets_975473?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
bool findRedundantBrackets(string &s) {
  stack<char> st;

  for (int i = 0; i < s.length(); i++) {
    char ch = s[i];
    if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
      st.push(ch);
    }

    else if (ch == ')') {
      int operatorcount = 0;
      while (!st.empty() && st.top() != '(') {
        char temp = st.top();
        if (temp == '+' || temp == '-' || temp == '*' || temp == '/') {
          operatorcount++;
        }
          st.pop();
      }

      //aaha tak aaya ho tho top pa ek closing bracket hoga
      st.pop();

      if(operatorcount == 0) return true;
    }
  }
  return false;
}
