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

testwhoseturn: dominion.o test_whoseturn.c myasserts.c
	gcc -o test_whoseturn test_whoseturn.c -g myasserts.c dominion.o rngs.o $(CFLAGS)

runmytests1: testwhoseturn
	./test_whoseturn &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	#cat dominion.c.gcov >> unittestresult.out

testupdatecoins: dominion.o test_updatecoins.c myasserts.c
	gcc -o test_updatecoins test_updatecoins.c -g myasserts.c dominion.o rngs.o $(CFLAGS)

runmytests2: testupdatecoins
	./test_updatecoins &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	#cat dominion.c.gcov >> unittestresult.out

testisgameover: dominion.o test_isgameover.c myasserts.c
	gcc -o test_isgameover test_isgameover.c -g myasserts.c dominion.o rngs.o $(CFLAGS)

runmytests3: testisgameover
	./test_isgameover &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	#cat dominion.c.gcov >> unittestresult.out

testgetcost: dominion.o test_getcost.c myasserts.c
	gcc -o test_getcost test_getcost.c -g myasserts.c dominion.o rngs.o $(CFLAGS)

runmytests4: testgetcost
	./test_getcost &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	#cat dominion.c.gcov >> unittestresult.out

testcard1: dominion.o testcard1.c myasserts.c
	gcc -o testcard1 testcard1.c -g myasserts.c dominion.o rngs.o $(CFLAGS)

runmytestcard1: testcard1
	./testcard1 &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	#cat dominion.c.gcov >> unittestresult.out

testcard2: dominion.o testcard2.c myasserts.c
	gcc -o testcard2 testcard2.c -g myasserts.c dominion.o rngs.o $(CFLAGS)

runmytestcard2: testcard2
	./testcard2 &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	#cat dominion.c.gcov >> unittestresult.out

testcard3: dominion.o testcard3.c myasserts.c
	gcc -o testcard3 testcard3.c -g myasserts.c dominion.o rngs.o $(CFLAGS)

runmytestcard3: testcard3
	./testcard3 &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	#cat dominion.c.gcov >> unittestresult.out

runalltests: testcard3 testcard2 testcard1 testgetcost testisgameover testupdatecoins testwhoseturn
	./testcard3 &> unittestresult.out
	./testcard2 &> unittestresult.out
	./testcard1 &> unittestresult.out
	./test_isgameover &> unittestresult.out
	./test_updatecoins &> unittestresult.out
	./test_whoseturn &> unittestresult.out
	./test_getcost &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out


player: player.c interface.o
	gcc -o player player.c -g  dominion.o rngs.o interface.o $(CFLAGS)

all: playdom player testDrawCard testBuyCard badTestDrawCard

clean:
	rm -f *.o playdom.exe playdom player player.exe  *.gcov *.gcda *.gcno *.so *.out testDrawCard testDrawCard.exe
