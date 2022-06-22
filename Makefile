libdir=$(shell pwd) 
countries=$(shell pwd)/countries
flags=-L$(libdir) -L$(countries)

all: main

libs: 
	$(shell export LD_LIBRARY_PATH=$(libdir):$(countries))

main: vin
	$(CXX) main.cpp $(flags) -o vin -lvin
	
vin: vin.o make.o countries
	$(CXX) -shared $(flags) -o libvin.so make.o vin.o -lmexico -lus -lgermany

vin.o:
	$(CXX) -c -fpic vin.cpp 

countries:	us mexico germany

germany:	germany.o make.o
	$(CXX) -shared -o countries/libgermany.so germany.o make.o
	rm germany.o

germany.o:
	$(CXX) -c -fpic countries/germany.cpp 

japan:		japan.o make.o
	$(CXX) -shared -o countries/libjapan.so japan.o make.o
	rm japan.o

japan.o:
	$(CXX) -c -fpic countries/japan.cpp 

mexico:		mexico.o make.o
	$(CXX) -shared -o countries/libmexico.so mexico.o make.o
	rm mexico.o

mexico.o:
	$(CXX) -c -fpic countries/mexico.cpp

us:			us.o make.o
	$(CXX) -shared -o countries/libus.so make.o us.o
	rm us.o

us.o:
	$(CXX) -c -fpic countries/us.cpp

make.o:
	$(CXX) -c -fpic make.cpp

clean:
	rm *.o *.so countries/*.so vin
