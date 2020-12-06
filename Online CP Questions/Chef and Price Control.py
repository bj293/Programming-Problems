"""
 Problem: CodeChef June Long 2020
            PRICECON  


Problem Link :  https://www.codechef.com/JUNE20B/problems/PRICECON
"""


for _ in range(int(input())):
	n,k=map(int,input().split())
	p_ar=list(map(int,input().split()))
	rev=0

	for p_i in p_ar:
		rev+=(k if (p_i>k) else p_i)
	print(sum(p_ar)-rev)
