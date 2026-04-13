## 🔑 Key Idea
A number is **T-prime** if it is the square of a prime number.  
👉 That means:  
- n = p × p  
- where p is a prime number

---

## ❌ Mistake I Made
- I used an incorrect condition to check if a number is prime.
- I didn’t properly verify whether √n is an integer before checking primality.

---

## 📚 Learning
- Always compute `sqrt(n)` carefully.
- Check:
  1. If √n is an integer
  2. Then check if √n is prime
- Use efficient prime checking (or precompute primes using sieve for large inputs).

---

## ⚡ Final Approach
1. Take input `n`
2. Compute `root = sqrt(n)`
3. If `root * root != n` → NOT T-prime  
4. Else check if `root` is prime  
   - If yes → T-prime  
   - Else → Not T-prime