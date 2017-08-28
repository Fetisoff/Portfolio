import read
import pandas as pd
from dateutil import parser
import datetime

df = read.load_data()
def parsing(string):
    timez = parser.parse(string)
    return timez.hour

time_serie = df['submission_time'].apply(parsing)
hour_count = time_serie.value_counts()
print(hour_count)
print(len(hour_count))
