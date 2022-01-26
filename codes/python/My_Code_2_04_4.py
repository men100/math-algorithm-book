# N log N <= 10^x における N を求めるプログラム
import math
import argparse

def get_args():
	parser = argparse.ArgumentParser()
	
	parser.add_argument('index_number', help='Index Number of 10', type=int)
	parser.add_argument('--initial', help='Initial Value', type=int)
	parser.add_argument('--verbose', action='store_true', help='Show halfway value')
	
	return parser.parse_args()

args = get_args()
index_number = args.index_number
verbose = False

# 初期値。100 は適当な値
initial = 100 

if args.initial:
	initial = args.initial
if args.verbose:
	verbose = args.verbose

x = [initial, 0]

while True:
	x[1] = x[0] - (x[0] * math.log2(x[0]) - 10**index_number) / (math.log2(x[0]) + 1)
	if verbose:
		print('{0}'.format(x[1]))
		
	if abs(x[1] - x[0]) < 0.0001:
		break

	x[0] = x[1]

print('N * log2(N) <= 10^{0}'.format(index_number))
print('N <= {0}'.format(int(x[0])))
