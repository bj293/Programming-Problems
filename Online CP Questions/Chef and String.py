"""
 Problem: CodeChef June Long 2020
            XYSTR

Problem Link :  https://www.codechef.com/JUNE20B/problems/XYSTR
""" 


for _ in range(int(input())):
	s = input()
	tot=0
	for i in range(1,len(s),step):
	    step=1
	    if s[i]!=s[i-1]:
		    tot+=2
			step=2
		print(tot)