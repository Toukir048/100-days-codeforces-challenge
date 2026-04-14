# B. Interesting Drink

## 🔑 Key Idea
For each day, Vasiliy wants to know **how many shops sell Beecola at a price less than or equal to his money `m`**.

👉 That means:
- shop price `x <= m`
- count all such shops

Since there are many queries, the best way is:
- **sort all shop prices once**
- then use **binary search / `upper_bound()`** for each query

---

## ❌ Mistake I Made
- I used a normal loop in the wrong way
- I changed `n` using `while(n--)`, which destroyed the original value
- I used the wrong index (`shops[i]` instead of checking all shop prices)
- I did not use sorting and binary search, so the solution was not efficient enough

---

## 📚 Learning
- When many queries ask for counts like **“how many values are `<= m`”**, sorting is very useful
- `upper_bound()` helps find the first value greater than `m`
- The position of that value gives the count of numbers `<= m`

---

## ⚡ Final Approach
1. Take input `n`
2. Store all shop prices in an array
3. Sort the array
4. For each query `m`:
   - use `upper_bound()` to find the first price greater than `m`
   - the index of that position is the answer
5. Print the answer for each day

---

## ✅ Important Formula

```cpp
upper_bound(a.begin(), a.end(), m) - a.begin()