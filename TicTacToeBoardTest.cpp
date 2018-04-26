/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};


TEST(TicTacToeBoardTest, sanityCheck)
{
	TicTacToeBoard obj;
	ASSERT_TRUE(true);
	ASSERT_NE('?', obj.placePiece(2, 1));
	ASSERT_NE(' ', obj.placePiece(-1, 0));
	ASSERT_NE(' ', obj.placePiece(-3, 2));
	ASSERT_EQ('?', obj.getPiece(-4, 3));
	ASSERT_EQ('?', obj.getPiece(5, 4));
}
