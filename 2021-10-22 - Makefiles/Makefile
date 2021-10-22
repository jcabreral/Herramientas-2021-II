#a.out: sumas.cpp
#	g++ sumas.cpp

#sumas.x: sumas.cpp
#	g++ sumas.cpp -o sumas.x

#sumas.x: sumas.cpp
#	g++ $< -o $@


sumas.x: sumas.cpp
%.x: %.cpp
	g++ $< -o $@

datos.txt: sumas.x
	./$< > $@

clean:
	rm -f a.out *.x *~ *.txt
