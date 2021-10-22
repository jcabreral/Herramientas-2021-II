#a.out: sumas.cpp
#	g++ sumas.cpp

#sumas.x: sumas.cpp
#	g++ sumas.cpp -o sumas.x

#sumas.x: sumas.cpp
#	g++ $< -o $@

all: fig.pdf

sumas.x: sumas.cpp
%.x: %.cpp
	g++ $< -o $@

datos.txt: sumas.x
	./$< > $@

fig.pdf: plot.gp datos.txt
	gnuplot $<

clean:
	rm -f a.out *.x *~ *.txt *.pdf


