int function(asteroids) {
    stack<int>st;

    for(int & a : asteroids) {
        
        //when collision happens

        while(!st.empty() && a < 0 && st.top() > 0) {

            int sum = a + st.top();

            if(sum < 0){          
                st.pop();
            } 
            else if(sum > 0) {
                a = 0;
            }
            else{
                //means sum = 0
                st.pop();
                a = 0;
            }
        }

        if(a != 0) {
            st.push(a);
        }
    }

    int s = st.size();
    vector<int> result(s);

    int i = s - 1;

    while(!st.empty()) {
        result[i] = st.top();
        st.pop();
        i--;
    }

    return result;
}

//second approach
int function(asteroids) {
    vector<int>st;

    for(int & a : asteroids) {
        
        //when collision happens

        while(!st.empty() && a < 0 && st.back() > 0) {

            int sum = a + st.back();

            if(sum < 0){          
                st.pop_back();
            } 
            else if(sum > 0) {
                a = 0;
            }
            else{
                //means sum = 0
                st.pop_back();
                a = 0;
            }
        }

        if(a != 0) {
            st.push_back(a);
        }
    }

    return st;
}