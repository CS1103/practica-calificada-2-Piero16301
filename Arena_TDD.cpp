#include "catch.hpp"
#include "Fight.h"

SCENARIO("Prueba peleas") {
    GIVEN("Pelea 1") {
        WHEN("Bruce Lee vs Chuck Norris") {
            Fight pelea1;
            Fighter *blee = new Fighter('E','0','A','P','S','F');
            Fighter *cnorris = new Fighter('E','S','A','P','0','F');
            pelea1.setA(blee);
            pelea1.setB(cnorris);
            THEN("Ganador es Bruce Lee") {
                REQUIRE(pelea1.getWinner() == blee);
            }
        }
    }
    GIVEN("Pelea 2") {
        WHEN("Jason Statham vs Chuck Norris") {
            Fight pelea2;
            Fighter *jstatham = new Fighter('E','S','0','P','0','F');
            Fighter *cnorris = new Fighter('E','S','A','P','S','F');
            pelea2.setA(jstatham);
            pelea2.setB(cnorris);
            THEN("Ganador es Chuck Norris") {
                REQUIRE(pelea2.getWinner() == cnorris);
            }
        }
    }
    GIVEN("Pelea 3") {
        WHEN("Jason Statham vs Chuck Norris") {
            Fight pelea2;
            Fighter *jstatham = new Fighter('0','S','A','P','0','F');
            Fighter *cnorris = new Fighter('E','0','A','0','0','F');
            pelea2.setA(jstatham);
            pelea2.setB(cnorris);
            THEN("Ganador es Jason Statham") {
                REQUIRE(pelea2.getWinner() == jstatham);
            }
        }
    }
    GIVEN("Pelea 4") {
        WHEN("Jason Statham vs Chuck Norris") {
            Fight pelea2;
            Fighter *jstatham = new Fighter('0','S','0','P','0','0');
            Fighter *cnorris = new Fighter('E','S','A','P','S','F');
            pelea2.setA(jstatham);
            pelea2.setB(cnorris);
            THEN("Ganador es Chuck Norris") {
                REQUIRE(pelea2.getWinner() == cnorris);
            }
        }
    }
    GIVEN("Pelea 5") {
        WHEN("Bruce Lee vs Chuck Norris") {
            Fight pelea1;
            Fighter *blee = new Fighter('E','0','A','P','S','F');
            Fighter *cnorris = new Fighter('E','0','0','P','0','F');
            pelea1.setA(blee);
            pelea1.setB(cnorris);
            THEN("Ganador es Bruce Lee") {
                REQUIRE(pelea1.getWinner() == blee);
            }
        }
    }
    GIVEN("Pelea 6") {
        WHEN("Bruce Lee vs Chuck Norris") {
            Fight pelea1;
            Fighter *blee = new Fighter('E','0','0','0','S','0');
            Fighter *cnorris = new Fighter('E','S','A','P','0','F');
            pelea1.setA(blee);
            pelea1.setB(cnorris);
            THEN("Ganador es Chuck Norris") {
                REQUIRE(pelea1.getWinner() == cnorris);
            }
        }
    }
}