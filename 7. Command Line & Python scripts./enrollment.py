import pandas as pd
import re
from sys import argv

data = pd.read_csv('/home/dq/scripts/data/CRDC2013_14.csv', encoding='Latin-1')
data['total_enrollment'] = data['TOT_ENR_M'] + data['TOT_ENR_F']
all_enrollment = data['total_enrollment'].sum()

listed = [
    'SCH_ENR_HI_M',
    'SCH_ENR_HI_F',
    'SCH_ENR_AM_M',
    'SCH_ENR_AM_F',
    'SCH_ENR_AS_M',
    'SCH_ENR_AS_F',
    'SCH_ENR_HP_M',
    'SCH_ENR_HP_F',
    'SCH_ENR_BL_M',
    'SCH_ENR_BL_F',
    'SCH_ENR_WH_M',
    'SCH_ENR_WH_F',
    'SCH_ENR_TR_M',
    'SCH_ENR_TR_F']

sum_of_race = {}
for each in listed:
    value = data[each].sum()
    name_column = 'SUM_{0}'.format(each)
    sum_of_race[name_column] = value


sum_unisex = {}
for each in range(0, 13, 2):
    listed[each]
    value_1 = data[listed[each]].sum()
    value_2 = data[listed[each+1]].sum()
    value = value_1 + value_2
    name_column = 'SUM_{:.10}'.format(listed[each])
    sum_unisex[name_column] = value


percentage = {}
for k, v in sum_of_race.items():
    percent = (v / all_enrollment) * 100
    
    name = 'Percent_{0}'.format(k)
    percentage[name] = percent

percentage_unisex = {}
for k, v in sum_unisex.items():
    percent = (v / all_enrollment) * 100
    name = 'Percent_{0}'.format(k)
    percentage_unisex[name] = percent

    
print(percentage)
print(percentage_unisex)