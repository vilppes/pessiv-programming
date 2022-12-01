#!/usr/bin/python3
import sys
import random
import string
def main():
	if len(sys.argv) > 0:
		if sys.argv[1].isnumeric():
			to_print = ''.join((random.choice(string.ascii_uppercase + string.ascii_lowercase + string.digits) for codenum in range(int(sys.argv[1]))))
			print(to_print)
if __name__ == "__main__":
	main()
