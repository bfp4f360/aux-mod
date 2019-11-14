import pandas as pd
import xlrd


data = pd.read_excel('stats.xlsx', index_col=None, header=0) 
B1 = data['B1']

print(B1.describe())
B1.plot()
