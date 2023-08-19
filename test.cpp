class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>l;
        if (n %3 == 0)
        {
           li.pushback("Fizz");
        }
        else if (n % 5== 0)
        {
            list.pushback("Buzz");
        }
        else if ((n %3 == 0) && (n % 5== 0))
        {
            list.pushback("FizzBuzz");
        }
        else
        {
            list.pushback(to_string(n));
        }
        return fizzBuzz;
    }
};