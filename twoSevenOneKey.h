
#ifndef TWOSEVENONEKEY_H_
#define TWOSEVENONEKEY_H_
#pragma once

#include <string>
#include <vector>

using namespace std;
class TwoSevenOneKey
{
public:
	TwoSevenOneKey();
	TwoSevenOneKey(string t_ItemNumber, int t_StoreNumber, int t_DistroNumber, int t_RecMonth, int t_RecDay, int t_RecYear, int t_Index, bool t_Selected) {
		itemNumber = t_ItemNumber;
		storeNumber = t_StoreNumber;
		distroNumber = t_DistroNumber;
		recMonth = t_RecMonth;
		recDay = t_RecDay;
		recYear = t_RecYear;
		inDex = t_Index;
		selEcted = t_Selected;
	}
	void SetItemNumber(string t_ItemNumber);
	void SetStoreNumber(int t_StoreNumber);
	void SetDistroNumber(int t_DistroNumber);
	void SetRecMonth(int t_RecMonth);
	void SetRecDay(int t_RecDay);
	void SetRecYear(int t_RecYear);
	void SetIndex(int t_Index);
	void SetSelected(bool t_Selected);
	string GetItemNumber() const;
	int GetStoreNumber() const;
	int GetDistroNumber() const;
	int GetRecMonth() const;
	int GetRecDay() const;
	int GetRecYear() const;
	int GetIndex() const;
	bool GetSelected() const;

	virtual ~TwoSevenOneKey();
protected:
	string itemNumber;
	int storeNumber;
	int distroNumber;
	int recDay;
	int recMonth;
	int recYear;
	int inDex;
	bool selEcted;
};

#endif /* TWOSEVENONEKEY_H_ */

