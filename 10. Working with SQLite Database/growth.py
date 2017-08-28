import sqlite3
import pandas as pd

con = sqlite3.connect('factbook.db')
df_temp = pd.read_sql_query('select * from facts;', con)
df_facts = df_temp.dropna(axis=0)

import math
def funct(row):
    N = row['population']
    e = math.e
    r = row['population_growth'] / 100
    res = N * (e ** (r * 35))
    return res

df_facts['population_in_2050'] = df_facts.apply(funct, axis=1)
df_facts.sort_values('population_in_2050', ascending=False, inplace=True)
print(df_facts[['name', 'population_in_2050']][:10])

