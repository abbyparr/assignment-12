#open the file
the_file = open('Stations.csv', 'r')
  print(the_file)

#map the code (IATA)
#get B column only
char = the_file.read('B')
  print(char)

#close the file
the_file.close()
