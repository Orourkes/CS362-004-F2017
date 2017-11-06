CFLAGS = -Wall -fpic -coverage -lm

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)
#To run playdom you need to entere: ./playdom <any integer number> like ./playdom 10*/
testDrawCard: testDrawCard.c dominion.o rngs.o
	gcc  -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

badTestDrawCard: badTestDrawCard.c dominion.o rngs.o
	gcc -o badTestDrawCard -g  badTestDrawCard.c dominion.o rngs.o $(CFLAGS)

testBuyCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

testAll: dominion.o testSuite.c
	gcc -o testSuite testSuite.c -g  dominion.o rngs.o $(CFLAGS)

interface.o: interface.h interface.c
	gcc -c interface.c -g  $(CFLAGS)

runtests: testDrawCard
	./testDrawCard &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out
myassert.o: myasserts.h myasserts.c
	gcc -o myasserts myasserts.c -g $(CFLAGS)

run1: interface.o dominion.o myasserts.o unittest1.c
	gcc -o unittest1 unittest1.c -g  myasserts.o dominion.o rngs.o interface.o $(CFLAGS)
	
run2: interface.o dominion.o myasserts.o unittest2.c
	gcc -o unittest2 unittest2.c -g  myasserts.o dominion.o rngs.o interface.o $(CFLAGS)

run3: interface.o dominion.o myasserts.o unittest3.c
	gcc -o unittest3 unittest3.c -g  myasserts.o dominion.o rngs.o interface.o $(CFLAGS)
	
run4: interface.o dominion.o myasserts.o unittest4.c
	gcc -o unittest4 unittest4.c -g  myasserts.o dominion.o rngs.o interface.o $(CFLAGS)
	
run5: interface.o dominion.o myasserts.o cardtest1.c
	gcc -o cardtest1 cardtest1.c -g  myasserts.o dominion.o rngs.o interface.o $(CFLAGS)
	
run6: interface.o dominion.o myasserts.o cardtest2.c
	gcc -o cardtest2 cardtest2.c -g  myasserts.o dominion.o rngs.o interface.o $(CFLAGS)
	
run7: interface.o dominion.o myasserts.o cardtest3.c
	gcc -o cardtest3 cardtest3.c -g  myasserts.o dominion.o rngs.o interface.o $(CFLAGS)
	
run8: interface.o dominion.o myasserts.o cardtest4.c
	gcc -o cardtest4 cardtest4.c -g  myasserts.o dominion.o rngs.o interface.o $(CFLAGS)

	
runmytests: run1 run2 run3 run4 run5 run6 run7 run8 dominion.o rngs.o interface.o myasserts.o 
	./unittest1 &> unittestresults.out
	gcov dominion.c >> unittestresults.out
	cat dominion.c.gcov >>unittestresults.out
	./unittest2 &> unittestresults.out
	gcov dominion.c >> unittestresults.out
	cat dominion.c.gcov >>unittestresults.out
	./unittest3 &> unittestresults.out
	gcov dominion.c >> unittestresults.out
	cat dominion.c.gcov >>unittestresults.out
	./unittest4 &> unittestresults.out
	gcov dominion.c >> unittestresults.out
	cat dominion.c.gcov >>unittestresults.out
	./cardtest1 &> unittestresults.out
	gcov dominion.c >> unittestresults.out
	cat dominion.c.gcov >>unittestresults.out
	./cardtest2 &> unittestresults.out
	gcov dominion.c >> unittestresults.out
	cat dominion.c.gcov >>unittestresults.out
	./cardtest3 &> unittestresults.out
	gcov dominion.c >> unittestresults.out
	cat dominion.c.gcov >>unittestresults.out
	./cardtest4 &> unittestresults.out
	gcov dominion.c >> unittestresults.out
	cat dominion.c.gcov >>unittestresults.out
	

randomrun1: interface.o dominion.o myasserts.o randomtestcard1.c
	gcc -o randomtestcard1 randomtestcard1.c -g  myasserts.o dominion.o rngs.o interface.o $(CFLAGS)
#	./randomtestcard1
# &> randomtestcard1.out
#	gcov dominion.c >> randomtestcard1.out
#	cat dominion.c.gcov >> randomtestcard1.out

randomrun2: interface.o dominion.o myasserts.o randomtestcard2.c
	gcc -o randomtestcard2 randomtestcard2.c -g  myasserts.o dominion.o rngs.o interface.o $(CFLAGS)
#	./randomtestcard2
# &> randomtestcard2.out
#	gcov dominion.c >> randomtestcard2.out
#	cat dominion.c.gcov >> randomtestcard2.out

randomrun3: interface.o dominion.o myasserts.o randomtestadventurer.c
	gcc -o randomtestadventurer randomtestadventurer.c -g  myasserts.o dominion.o rngs.o interface.o $(CFLAGS)
#	./randomtestcard3
# &> randomtestcard2.out
#	gcov dominion.c >> randomtestcard2.out
#	cat dominion.c.gcov >> randomtestcard2.out

randomall: randomrun1 randomrun2 randomrun3
	./randomtestcard1 &> randomtestcard1.out 
	gcov dominion.c >> randomtestcard1.out
	cat dominion.c.gcov >> randomtestcard1.out
	./randomtestcard2 &> randomtestcard2.out 
	gcov dominion.c >> randomtestcard2.out
	cat dominion.c.gcov >> randomtestcard2.out
	./randomtestadventurer &> randomtestadventurer.out 
	gcov dominion.c >> randomtestadventurer.out
	cat dominion.c.gcov >> randomtestadventurer.out
	
	
	

player: player.c interface.o
	gcc -o player player.c -g  dominion.o rngs.o interface.o $(CFLAGS)

all: playdom player testDrawCard testBuyCard badTestDrawCard

clean:
	rm -f *.o playdom.exe playdom player player.exe  *.gcov *.gcda *.gcno *.so *.out testDrawCard testDrawCard.exe

cleanrun: 
	rm -f randomtestcard1 randomtestcard1.out randomtestcard2 randomtestcard2.out
