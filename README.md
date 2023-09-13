# overflow-attack

When you do not have control of variables overflow it may happen security issues like this one:

password is an array of 3 chars, "123".
next bit in memory is the password checker, if passcheck is equals to 'a' then password means to be correct.
so if you type as password the chars "XXXa", there will be an overflow in the password array and passcheck will be 'a'
even when you didn't type the correct password, you mae the code to believe it was correct.
