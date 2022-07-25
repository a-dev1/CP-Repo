128 in binary is 
1 0 0 0 0 0 0 

and 
(any number) & 1 -> returns 1 if it's odd else even
3 -> 101
1 -> 001
& -> 001

Question -> find all pairs of (a, b) where a & b = k;
xor 
x y
0 0 0
1 1 0
0 1 1
1 0 1
xor 1 -> opposite return 
xor 0 -> same return

---------------------------------------------------
^ -> rase to the power in this
2^x > 2^(x-1) + 2^(x-2) + 2^(x-3) = 2^(x) - 1
2^4 > 2^3 + 2^2 + 2^1 + 2^0
16  > 8 + 4 + 2 + 1 = 15 

# Bit Shifts
0001 << 2 => 0100
0101 >> 2 => 0001
if something goes of the range it don't circle back

2 ^ x = 1 << x 
-> shifting 1 bit to the left increase 1 power of two;

(num >> 1) -> floor(n/2)
(num >> k) -> floor(n/2^k)

kth bit of a num => (num >> k) & 1 (so simple)

Some Properties:-
a + b = (a^b) + 2(a&b)

a + b = (a | b) + (a & b)
