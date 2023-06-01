#include "pch.h"
#include "../bank/bank.cpp"

class AccountFixture : public testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, CreateAccountInit10000won) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, Withdraw) {
	account.Withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}

TEST_F(AccountFixture, cinterest) {
	account.setinterest(5);
	account.cinterest(2);
	EXPECT_EQ(11025, account.getBalance());
}

TEST_F(AccountFixture, setter) {
	account.setinterest(1);
	EXPECT_EQ(1, account.getinterest());
}