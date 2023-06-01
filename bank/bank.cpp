class Account
{
public:
	explicit Account(int money)
		:balance(money){}
	int getBalance()
	{
		return balance;
	}
	void deposit(int money)
	{
		balance += money;
	}
	void Withdraw(int money)
	{
		balance -= money;
	}
	void cinterest(int count)
	{
		for(int i =0; i < count; i++)
		{
			balance = balance * (interest_rate + 100) / 100;
		}
	}
	void setinterest(int rate)
	{
		this->interest_rate = rate;
	}
	int getinterest()
	{
		return interest_rate;
	}
private:
	int balance;
	int interest_rate;
};