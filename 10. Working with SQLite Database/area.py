import sqlite3
import pandas as pd

con = sqlite3.connect('factbook.db')
c = con.cursor()
query_land = 'select sum(area_land) from facts where area_land != "";'
sum_area_land = c.execute(query_land).fetchall()[0][0]
query_water = 'select sum(area_water) from facts where area_land != "";'
sum_water_land = c.execute(query_water).fetchall()[0][0]

ratio = sum_area_land / sum_water_land
print(ratio)
print(sum_area_land)
print(sum_water_land)

