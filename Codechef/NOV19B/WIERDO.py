import math
import decimal
decimal.getcontext().prec = 1000

t=int(input())

for _ in range(t):

	l=int(input())
	alice=[]
	bob=[]
	alice_all=""
	bob_all=""
	vowels=['a','e','i','o','u']
	for i in range(l):
		temp=input()
		consonant_index=-1
		for j in range(len(temp)):
			if temp[j] in vowels:
				continue
			else:
				if consonant_index==-1:
					consonant_index=j
				else:
					if j-consonant_index<=2:
						bob.append(temp)
						bob_all=bob_all+temp
						break
					else:
						consonant_index=j
		else:
			alice.append(temp)
			alice_all=alice_all+temp

	if l<=10:
		n=len(alice)
		m=len(bob)

		score_A,score_B=1,1
		x_a,x_b=1,1
		fx_a,fx_b=1,1
		for i in range(97,123):
			char=chr(i)
			if char in alice_all:
				rec_a=[x for x in alice if char in x]
				x_a*=len(rec_a)
				fx_a=fx_a * alice_all.count(char)
				

			if char in bob_all:
				rec_b=[x for x in bob if char in x]
				x_b*=len(rec_b)
				fx_b=fx_b * bob_all.count(char)

		fx_a=math.pow(fx_a,n)
		fx_b=math.pow(fx_b,m)				
		score_A=x_a/fx_a
		score_B=x_b/fx_b
		ans=score_A/score_B
		if ans>10000000:
			print("Infinity")
		else:
			print("{0:.9f}".format(ans))
	else:

		n=decimal.Decimal(len(alice))
		m=decimal.Decimal(len(bob))

		score_A=decimal.Decimal(1).quantize(decimal.Decimal('0.0000000001'))
		score_B=decimal.Decimal(1).quantize(decimal.Decimal('0.0000000001'))
		x_a=decimal.Decimal(1).quantize(decimal.Decimal('0.0000000001'))
		x_b=decimal.Decimal(1).quantize(decimal.Decimal('0.0000000001'))
		denom_a=decimal.Decimal(1).quantize(decimal.Decimal('0.0000000001'))
		denom_b=decimal.Decimal(1).quantize(decimal.Decimal('0.0000000001'))
		fx_a=decimal.Decimal(1).quantize(decimal.Decimal('0.0000000001'))
		fx_b=decimal.Decimal(1).quantize(decimal.Decimal('0.0000000001'))
		ans=decimal.Decimal(1).quantize(decimal.Decimal('0.0000000001'))
		charInA=''.join(sorted(set(alice_all)))
		charInB=''.join(sorted(set(bob_all)))
		ctx=decimal.getcontext().copy()
		ctx.Emax=decimal.MAX_EMAX
		ctx.Emin=decimal.MIN_EMIN
		ctx.prec=100


		for i in charInA:
			rec_a=[x for x in alice if i in x]
			if len(rec_a)>0:
				x_a=ctx.multiply(x_a,len(rec_a))
				fx_a=ctx.multiply(fx_a,alice_all.count(i))

		for i in charInB:
			rec_b=[x for x in bob if i in x]
			if len(rec_b)>0:
				x_b=ctx.multiply(x_b,len(rec_b))
				fx_b=ctx.multiply(fx_b,bob_all.count(i))
		
		denom_a=ctx.power(fx_a,n)
		denom_b=ctx.power(fx_b,m)
		score_A=ctx.divide(x_a,denom_a)
		score_B=ctx.divide(x_b,denom_b)
		
		ans=ctx.divide(score_A,score_B)

		if ans>10000000:
			print("Infinity")
		else:
			print("{0:.9f}".format(ans))
