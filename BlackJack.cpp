//=====Home Work 5, Exercise 4======================================================================

class GenericPlayer : public Hand {
private:
	string Name;
public:
	GenericPlayer(string name): Name(name) {}

	virtual void IsHiting() {}

	bool IsBoosted() const {
		return (GetValue() > 21);
	}

	void Bust() const {
		if (IsBoosted) cout << " " << Name << " — bust" << endl;
	}
};

//==================================================================================================