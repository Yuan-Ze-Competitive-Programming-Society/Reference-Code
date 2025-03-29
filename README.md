# Reference Code

## feat: Upload 【AtCoder】Beginner Contest 274 - A. Batting Average

**Solved**

。Input and Output - O(1)

* Solution
    * Use fixed to control the format and setprecision to display B divided by A up to three decimal places

## feat: Upload 【CSES】1095. Exponentiation

**Solved**

。Input and Output - O(NlogB)

* Time Complexity Analysis
    * Because there are `N` queries, this takes O(N)
    * In each query, we use O(logB), where the B stands for the power of the answer, solution to calculate the exponentiation
    * Overall, it takes O(NlogB) to solve this problem
* Solution
    1. We apply exponentiation by squaring
        * If the lowest bit of the exponent is `0`, we square the base and halve the exponent
        * Otherwise, multiply the current result by the base and shift the exponent by one
        * We continue this process using bitwise operations `n & 1` to check if n is odd, and `n >>= 1` to halve n
    2. Modulo Operation to Prevent Integer Overflow
        * We take the modulo at every step, including the initial  multiplication, to prevent integer overflow
        * Since we are given a large exponent, directly computing $a^b$ can be infeasible, so applying `(base * base) % mod` ensures that values stay manageable
        * This approach ensures an efficient computation of $a^b$ in logarithmic time

## feat: Upload 【AtCoder】Beginner Contest 182 - A. twiblr

**Solved**

。Input and Output - O(1)

* Solution
    * Because you can follow at most $2 \times A ($ the number of users following you $) + 100$ users, so the out put will be $2 \times A + 100 - B$

## feat: Upload setup.cpp

* Features
    1. Upload `setup.cpp` as organization code template
        <details>
        <summary>Code Template</summary>

        ```cpp
        #include<bits/stdc++.h>
        using namespace std;

        #define opt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

        const int MAXN = 1e7 + 50;
        const int Mod = 1e9 + 7;

        int main(){
            opt;
        }
        ```
        </details>

## feat: Upload Homework for March 19th

* Feature
    1. Update `TIOJ\1001. Hello World!.cpp`
        * Topic、Algorithm：Output

## feat: Initialize Repository

* Features
    1. Create `.gitignore`
    2. Put the `.vscode` folder into `.gitignore`
        * Because we want this Repository to have only program code and no redundant files