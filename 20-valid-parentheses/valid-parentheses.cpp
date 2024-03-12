class Solution {
public:
    bool isValid(string s) {
        bool flag = false;
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty())
                {
                   if (s[i] == ')' || s[i] == '}' || s[i] == ']') 
                   {
                    flag=false;
                    break;
                   }
                }         
                
                if (s[i] == ')') {
                    if (st.top() == '(')
                    {
                        flag=true;
                        st.pop();
                        }
                    else {
                        flag=false;
                        break;
                    }
                }
                if (s[i] == ']') {
                    if (st.top() == '[')
                    {
                        flag=true;
                        st.pop();
                    }
                    else {
                        flag=false;
                        break;
                    }
                }
                if (s[i] == '}') {
                    if (st.top() == '{')
                    {
                        st.pop();
                        flag=true;
                    }
                    else{
                        flag=false;
                        break;
                    }
                }
    
            }
        }
        if(st.empty())
            return flag;
        return false;
    }
};
