import read
import pandas as pd

df = read.load_data()

cnt = df['url'].value_counts()
domains = cnt.iloc[0:99]
for name, row in domains.items():
    print("{0}: {1}".format(name, row))
print(len(cnt))