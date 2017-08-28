import sqlite3
##id|code|name|area|area_land|area_water|population|population_growth|birth_rate|
##death_rate|migration_rate|created_at|updated_at                                


conn = sqlite3.connect('factbook.db')

c = conn.cursor()
query = 'select * from facts order by population asc limit 10'
c.execute(query)
result = c.fetchall()
print(result)