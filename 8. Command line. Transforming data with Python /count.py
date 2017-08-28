import read
from collections import Counter

df = read.load_data()

seq = df['headline'].astype(str)
seq = seq.tolist()
long_string = " ".join(seq)
long_string = long_string.lower()
long_string.lstrip("!@^&*():;<>,.?/[]{}+=|-_ ")
splited = long_string.split(' ')

common_dict = Counter(splited)
print(common_dict.most_common(20))
