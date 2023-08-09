#include "twoSevenOneKey.h"
#include <iostream>
using namespace std;


void TwoSevenOneKey::SetItemNumber(string t_ItemNumber) {
	itemNumber = t_ItemNumber;
}
void TwoSevenOneKey::SetStoreNumber(int t_StoreNumber) {
	storeNumber = t_StoreNumber;
}
void TwoSevenOneKey::SetDistroNumber(int t_DistroNumber) {
	distroNumber = t_DistroNumber;
}
void TwoSevenOneKey::SetRecMonth(int t_RecMonth) {
	recMonth = t_RecMonth;
}
void TwoSevenOneKey::SetRecDay(int t_RecDay) {
	recMonth = t_RecDay;
}
void TwoSevenOneKey::SetRecYear(int t_RecYear) {
	recYear = t_RecYear;
}
void TwoSevenOneKey::SetIndex(int t_Index) {
	inDex = t_Index;
}
void TwoSevenOneKey::SetSelected(bool t_Selected) {
	selEcted = t_Selected;
}
string TwoSevenOneKey::GetItemNumber() const {
	return itemNumber;
}
int TwoSevenOneKey::GetStoreNumber() const {
	return storeNumber;
}
int TwoSevenOneKey::GetDistroNumber() const {
	return distroNumber;
}
int TwoSevenOneKey::GetRecMonth() const {
	return recMonth;
}
int TwoSevenOneKey::GetRecDay() const {
	return recDay;
}
int TwoSevenOneKey::GetRecYear() const {
	return recYear;
}
int TwoSevenOneKey::GetIndex() const {
	return inDex;
}
bool TwoSevenOneKey::GetSelected() const {
	return selEcted;
}
TwoSevenOneKey::~TwoSevenOneKey() {
}
