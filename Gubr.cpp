// Gubr.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <stdio.h>
#include <time.h>
#include <ctime>
#include <stdlib.h>
#include <tchar.h>
#include <cstring>
#include <string>
#include <windows.h>
#include "twoSevenOneKey.h"
#include "Gubr.h"
using namespace std;

vector <TwoSevenOneKey> twoSevenOne;
vector <int> sevenSevenEight;
vector <int> sixTwoTwo;
vector <int> sixNineThreeEight;
vector <int> sixFiveSixOne;
vector <int> sixNineTwo;
vector <int> removeItems;


void DatePlusDays(struct tm* t_Date, int t_Days)
{
    const time_t oneDay = 24 * 60 * 60;

    // Seconds since start of epoch
    time_t dateSeconds = mktime(t_Date) + (t_Days * oneDay);

    // Update caller's date
    // Use localtime because mktime converts to UTC so may change date
    *t_Date = *localtime(&dateSeconds);;
}
//remove Item from selected
bool RemoveItem(string itemNums) {
    removeItems.clear();
    int foundIndex;
    for (int i = 0; i < twoSevenOne.size(); i++) {
        if (twoSevenOne.at(i).GetSelected()) {
            //searches the string for each item number
            foundIndex = itemNums.find(twoSevenOne.at(i).GetItemNumber());
            if ((foundIndex != std::string::npos) && (foundIndex != -1)) {
                twoSevenOne.at(i).SetSelected(false);
                removeItems.push_back(i);
            }
        }
    }

    return true;
} 
bool RemoveStore(vector<int> t_StoreNum) {
    removeItems.clear();
    int foundIndex;
    for (int i = 0; i < twoSevenOne.size(); i++) {
        if (twoSevenOne.at(i).GetSelected()) {//checks to see if it's selected
            for (int k = 0; k < t_StoreNum.size(); k++) {
                if (t_StoreNum.at(k) == (twoSevenOne.at(i).GetStoreNumber())) {
                    twoSevenOne.at(i).SetSelected(false);
                    removeItems.push_back(i);
                }
            }
        }
    }

    return true;
}
//used for the checkbox
int Remove6092(int t_AddOrRemove, int t_Index) {
    if (t_Index == 0) {//if box was unchecked
        if (twoSevenOne.at(sixNineTwo.at(t_AddOrRemove)).GetSelected()) {
            twoSevenOne.at(sixNineTwo.at(t_AddOrRemove)).SetSelected(false);
        }
    }
    else {//if box was checked
        if (!twoSevenOne.at(sixNineTwo.at(t_AddOrRemove)).GetSelected()) {
                twoSevenOne.at(sixNineTwo.at(t_AddOrRemove)).SetSelected(true);
        }
    }
    return sixNineTwo.at(t_AddOrRemove);
}
int Get6092Size() {//returns number of items from 6092
    return sixNineTwo.size();
}
int Remove6022(int t_AddOrRemove, int t_Index) {
    if (t_Index == 0) {//if checked
        if (twoSevenOne.at(sixTwoTwo.at(t_AddOrRemove)).GetSelected()) {
            twoSevenOne.at(sixTwoTwo.at(t_AddOrRemove)).SetSelected(false);
        }
    } 
    else {//if unchecked
            if (!twoSevenOne.at(sixTwoTwo.at(t_AddOrRemove)).GetSelected()) {
                twoSevenOne.at(sixTwoTwo.at(t_AddOrRemove)).SetSelected(true);
            }
    }
    return sixTwoTwo.at(t_AddOrRemove);
}
int Get6022Size() {
    return sixTwoTwo.size();
}
int Remove6561(int t_AddOrRemove, int t_Index) {
    if (t_Index == 0) {//if checked
        if (twoSevenOne.at(sixFiveSixOne.at(t_AddOrRemove)).GetSelected()) {
            twoSevenOne.at(sixFiveSixOne.at(t_AddOrRemove)).SetSelected(false);
        }
    }
    else {//if unchecked
            if (!twoSevenOne.at(sixFiveSixOne.at(t_AddOrRemove)).GetSelected()) {
                twoSevenOne.at(sixFiveSixOne.at(t_AddOrRemove)).SetSelected(true);
            }
    }
    return sixFiveSixOne.at(t_AddOrRemove);
}
int Get6561Size() {
    return sixFiveSixOne.size();
}
int Remove6938(int t_AddOrRemove, int t_Index) {
    if (t_Index == 0) {//if checked
        if (twoSevenOne.at(sixNineThreeEight.at(t_AddOrRemove)).GetSelected()) {
            twoSevenOne.at(sixNineThreeEight.at(t_AddOrRemove)).SetSelected(false);
        }
    }
    else {//if unchecked
            if (!twoSevenOne.at(sixNineThreeEight.at(t_AddOrRemove)).GetSelected()) {
                twoSevenOne.at(sixNineThreeEight.at(t_AddOrRemove)).SetSelected(true);
            }
    }
    return sixNineThreeEight.at(t_AddOrRemove);
}
int Get6938Size() {
    return sixNineThreeEight.size();
}
int Remove7078(int t_AddOrRemove, int t_Index) {
    if (t_Index == 0) {//if checked
        if (twoSevenOne.at(sevenSevenEight.at(t_AddOrRemove)).GetSelected()) {
            twoSevenOne.at(sevenSevenEight.at(t_AddOrRemove)).SetSelected(false);
        }
    }
    else {//if unchecked
        if (!twoSevenOne.at(sevenSevenEight.at(t_AddOrRemove)).GetSelected()) {
            twoSevenOne.at(sevenSevenEight.at(t_AddOrRemove)).SetSelected(true);
        }
    }
    return sevenSevenEight.at(t_AddOrRemove);
}
int Get7078Size() {
    return sevenSevenEight.size();
}
bool RemoveDistro(vector<int> t_Distro) {
    removeItems.clear();
    int foundIndex;
    for (int i = 0; i < twoSevenOne.size(); i++) {
        if (twoSevenOne.at(i).GetSelected()) {
            for (int k = 0; k < t_Distro.size(); k++) {
                if (t_Distro.at(k) == (twoSevenOne.at(i).GetDistroNumber())) {
                    twoSevenOne.at(i).SetSelected(false);
                    removeItems.push_back(i);
                }
            }
        }
    }

    return true;
}
int GetRemoveArray(int t_RemoveItem) {
    return removeItems.at(t_RemoveItem);
}
int GetRemoveSize() {
    return removeItems.size();
}
int Get271Size() {
    return twoSevenOne.size();
}
void NewLoad() {
    twoSevenOne.clear();
    sixFiveSixOne.clear();
    sixTwoTwo.clear();
    sixNineThreeEight.clear();
    sixNineTwo.clear();
    sixFiveSixOne.clear();
}
bool SelectItem(string t_GetLine, int t_inHouse, int t_consol, int t_sevenEight, int t_otherImport, int t_6092, int t_6022, int t_6938, int t_6561, int t_7078, int t_OffSet) {
    string newItemNumber;
    int newStoreNumber;
    int newDistroNumber;
    int newRecMonth;
    int newRecDay;
    int newRecYear;
    int newIndex;
    bool newSelected = false;
    //section converts dates
    struct tm date = { 0, 0, 12 };  // nominal time midday (arbitrary).
    struct tm inHouseDaysBack = { 0, 0, 12 };
    struct tm consolDaysBack = { 0, 0, 12 };
    struct tm sevenEightDaysBack = { 0, 0, 12 };
    struct tm otherImportDaysBack = { 0, 0, 12 };
    time_t tInhouse = time(NULL);
    tm* timePtrInHouse = localtime(&tInhouse);
    time_t tConsol = time(NULL);
    tm* timePtrConsol = localtime(&tConsol);
    time_t tSevenEight = time(NULL);
    tm* timePtrSevenEight = localtime(&tSevenEight);
    time_t tOtherImport = time(NULL);
    tm* timePtrOtherImport = localtime(&tOtherImport);

    inHouseDaysBack.tm_year = timePtrInHouse->tm_year;
    inHouseDaysBack.tm_mon = timePtrInHouse->tm_mon;
    inHouseDaysBack.tm_mday = timePtrInHouse->tm_mday - t_inHouse;
    consolDaysBack.tm_year = timePtrConsol->tm_year;
    consolDaysBack.tm_mon = timePtrConsol->tm_mon;
    consolDaysBack.tm_mday = timePtrConsol->tm_mday - t_consol;
    sevenEightDaysBack.tm_year = timePtrSevenEight->tm_year;

    sevenEightDaysBack.tm_mon = timePtrSevenEight->tm_mon;
    sevenEightDaysBack.tm_mday = timePtrSevenEight->tm_mday - t_sevenEight;
    otherImportDaysBack.tm_year = timePtrOtherImport->tm_year;
    otherImportDaysBack.tm_mon = timePtrOtherImport->tm_mon;
    otherImportDaysBack.tm_mday = timePtrOtherImport->tm_mday - t_otherImport;

    DatePlusDays(&inHouseDaysBack, 0);
    DatePlusDays(&consolDaysBack, 0);
    DatePlusDays(&sevenEightDaysBack, 0);
    DatePlusDays(&otherImportDaysBack, 0);

    int inHouseDate = ((inHouseDaysBack.tm_year + 1900) * 10000 + (inHouseDaysBack.tm_mon + 1) * 100 + inHouseDaysBack.tm_mday);
    int consolDate = ((consolDaysBack.tm_year + 1900) * 10000 + (consolDaysBack.tm_mon + 1) * 100 + consolDaysBack.tm_mday);
    int sevenEightDate = (sevenEightDaysBack.tm_year + 1900) * 10000 + (sevenEightDaysBack.tm_mon + 1) * 100 + sevenEightDaysBack.tm_mday;
    int otherImportDate = (otherImportDaysBack.tm_year + 1900) * 10000 + (otherImportDaysBack.tm_mon + 1) * 100 + otherImportDaysBack.tm_mday;

    //extracts item number from string
    for (int i = 10; i < 19; ++i) {
        newItemNumber += t_GetLine.at(i);//cycles through line and saves first nine characters as Track number
    }
    //extracts Store, Distro, Month, Day, and Year
    newStoreNumber = (t_GetLine.at(19 + t_OffSet) - 48) * 10000 + (t_GetLine.at(20 + t_OffSet) - 48) * 1000 + (t_GetLine.at(21 + t_OffSet) - 48) * 100 + (t_GetLine.at(22 + t_OffSet) - 48) * 10 + (t_GetLine.at(23 + t_OffSet) - 48);
    newDistroNumber = (t_GetLine.at(26 + t_OffSet) - 48) * 10000 + (t_GetLine.at(27 + t_OffSet) - 48) * 1000 + (t_GetLine.at(28 + t_OffSet) - 48) * 100 + (t_GetLine.at(29 + t_OffSet) - 48) * 10 + (t_GetLine.at(30 + t_OffSet) - 48);
    newRecMonth = (t_GetLine.at(48 + t_OffSet) - 48) * 10 + (t_GetLine.at(49 + t_OffSet) - 48);
    newRecDay = (t_GetLine.at(51 + t_OffSet) - 48) * 10 + (t_GetLine.at(52 + t_OffSet) - 48);
    newRecYear = 2000 + (t_GetLine.at(54 + t_OffSet) - 48) * 10 + (t_GetLine.at(55 + t_OffSet) - 48);
    //date conversion
    int itemDate = newRecYear * 10000 + newRecMonth * 100 + newRecDay;
    //determines the selected status
    if (newDistroNumber == 6092 && (itemDate <= inHouseDate) && t_6092 == 1) {
        newSelected = true;
    }
    else if (newDistroNumber == 6561 && t_6561 == 1 && (itemDate <= consolDate)) {
        newSelected = true;
    }
    else if ((newDistroNumber == 6938 && t_6938 == 1 && (itemDate <= consolDate))) {
        newSelected = true;
    }
    else if ((newDistroNumber == 7377 && (itemDate <= consolDate))) {
        newSelected = true;
    }
    else if ((newDistroNumber == 6022 && t_6022 == 1 && (itemDate <= consolDate))) {
        newSelected = true;
    }
    else if (newDistroNumber == 7078 && itemDate <= sevenEightDate && t_7078 == 1) {
        newSelected = true;
    }
    else if ((newDistroNumber != 6092 && newDistroNumber != 6022 && newDistroNumber != 6938 && newDistroNumber != 6561 && newDistroNumber != 7078) && itemDate <= otherImportDate) {
        newSelected = true;
    }
    newIndex = twoSevenOne.size();//records index (consider removal)
    //saves data to class
    TwoSevenOneKey newEntry(newItemNumber, newStoreNumber, newDistroNumber, newRecMonth, newRecDay, newRecYear, newIndex, newSelected);
    //saves indices for most common distros for use with checkboxes
    if (newDistroNumber == 6092) {
        sixNineTwo.push_back(newIndex);
    }
    else if (newDistroNumber == 7078) {
        sevenSevenEight.push_back(newIndex);
    }
    else if (newDistroNumber == 6022) {
        sixTwoTwo.push_back(newIndex);
    }
    else if (newDistroNumber == 6561) {
        sixFiveSixOne.push_back(newIndex);
    }
    else if (newDistroNumber == 6938) {
        sixNineThreeEight.push_back(newIndex);
    }
    //inserts class into vector
    twoSevenOne.push_back(newEntry);
    //returns value for selection
    if (newDistroNumber == 6092 && (itemDate <= inHouseDate) && t_6092 == 1) {

        return true;
    }
    else if (newDistroNumber == 6561 && t_6561 == 1 && (itemDate <= consolDate)) {

        return true;
    }
    else if ((newDistroNumber == 6938 && t_6938 == 1 && (itemDate <= consolDate))) {

        return true;
    }
    else if ((newDistroNumber == 7377 && (itemDate <= consolDate))) {

        return true;
    }
    else if ((newDistroNumber == 6022 && t_6022 == 1 && (itemDate <= consolDate))) {
        newSelected = true;
        return true;
    }
    else if (newDistroNumber == 7078 && itemDate <= sevenEightDate && t_7078 == 1) {

        return true;
    }
    else if ((newDistroNumber != 6092 && newDistroNumber != 6022 && newDistroNumber != 6938 && newDistroNumber != 6561 && newDistroNumber != 7078) && itemDate <= otherImportDate) {

        return true;
    }
}
bool LoadFromDB(int t_inHouse, int t_consol, int t_sevenEight, int t_otherImport, string newItemNumber, int newStoreNumber, int newDistroNumber, int newRecMonth, int newRecDay, int newRecYear, int t_6092, int t_6022, int t_6938, int t_6561, int t_7078) {
    int newIndex;
    bool newSelected = false;
    //section converts dates
    struct tm date = { 0, 0, 12 };  // nominal time midday (arbitrary).
    struct tm inHouseDaysBack = { 0, 0, 12 };
    struct tm consolDaysBack = { 0, 0, 12 };
    struct tm sevenEightDaysBack = { 0, 0, 12 };
    struct tm otherImportDaysBack = { 0, 0, 12 };
    time_t tInhouse = time(NULL);
    tm* timePtrInHouse = localtime(&tInhouse);
    time_t tConsol = time(NULL);
    tm* timePtrConsol = localtime(&tConsol);
    time_t tSevenEight = time(NULL);
    tm* timePtrSevenEight = localtime(&tSevenEight);
    time_t tOtherImport = time(NULL);
    tm* timePtrOtherImport = localtime(&tOtherImport);

    inHouseDaysBack.tm_year = timePtrInHouse->tm_year;
    inHouseDaysBack.tm_mon = timePtrInHouse->tm_mon;
    inHouseDaysBack.tm_mday = timePtrInHouse->tm_mday - t_inHouse;
    consolDaysBack.tm_year = timePtrConsol->tm_year;
    consolDaysBack.tm_mon = timePtrConsol->tm_mon;
    consolDaysBack.tm_mday = timePtrConsol->tm_mday - t_consol;
    sevenEightDaysBack.tm_year = timePtrSevenEight->tm_year;

    sevenEightDaysBack.tm_mon = timePtrSevenEight->tm_mon;
    sevenEightDaysBack.tm_mday = timePtrSevenEight->tm_mday - t_sevenEight;
    otherImportDaysBack.tm_year = timePtrOtherImport->tm_year;
    otherImportDaysBack.tm_mon = timePtrOtherImport->tm_mon;
    otherImportDaysBack.tm_mday = timePtrOtherImport->tm_mday - t_otherImport;

    DatePlusDays(&inHouseDaysBack, 0);
    DatePlusDays(&consolDaysBack, 0);
    DatePlusDays(&sevenEightDaysBack, 0);
    DatePlusDays(&otherImportDaysBack, 0);

    int inHouseDate = ((inHouseDaysBack.tm_year + 1900) * 10000 + (inHouseDaysBack.tm_mon + 1) * 100 + inHouseDaysBack.tm_mday);
    int consolDate = ((consolDaysBack.tm_year + 1900) * 10000 + (consolDaysBack.tm_mon + 1) * 100 + consolDaysBack.tm_mday);
    int sevenEightDate = (sevenEightDaysBack.tm_year + 1900) * 10000 + (sevenEightDaysBack.tm_mon + 1) * 100 + sevenEightDaysBack.tm_mday;
    int otherImportDate = (otherImportDaysBack.tm_year + 1900) * 10000 + (otherImportDaysBack.tm_mon + 1) * 100 + otherImportDaysBack.tm_mday;

    //date conversion
    int itemDate = newRecYear * 10000 + newRecMonth * 100 + newRecDay;
    //determines the selected status
    if (newDistroNumber == 6092 && (itemDate <= inHouseDate) && t_6092 == 1) {
        newSelected = true;
    }
    else if (newDistroNumber == 6561 && t_6561 == 1 && (itemDate <= consolDate)) {
        newSelected = true;
    }
    else if ((newDistroNumber == 6938 && t_6938 == 1 && (itemDate <= consolDate))) {
        newSelected = true;
    }
    else if ((newDistroNumber == 7377 && (itemDate <= consolDate))) {
        newSelected = true;
    }
    else if ((newDistroNumber == 6022 && t_6022 == 1 && (itemDate <= consolDate))) {
        newSelected = true;
    }
    else if (newDistroNumber == 7078 && itemDate <= sevenEightDate && t_7078 == 1) {
        newSelected = true;
    }
    else if ((newDistroNumber != 6092 && newDistroNumber != 6022 && newDistroNumber != 6938 && newDistroNumber != 6561 && newDistroNumber != 7078) && itemDate <= otherImportDate) {
        newSelected = true;
    }
    newIndex = twoSevenOne.size();//records index (consider removal)
    //saves data to class
    TwoSevenOneKey newEntry(newItemNumber, newStoreNumber, newDistroNumber, newRecMonth, newRecDay, newRecYear, newIndex, newSelected);
    //saves indices for most common distros for use with checkboxes
    if (newDistroNumber == 6092) {
        sixNineTwo.push_back(newIndex);
    }
    else if (newDistroNumber == 7078) {
        sevenSevenEight.push_back(newIndex);
    }
    else if (newDistroNumber == 6022) {
        sixTwoTwo.push_back(newIndex);
    }
    else if (newDistroNumber == 6561) {
        sixFiveSixOne.push_back(newIndex);
    }
    else if (newDistroNumber == 6938) {
        sixNineThreeEight.push_back(newIndex);
    }
    //inserts class into vector
    twoSevenOne.push_back(newEntry);
    //returns value for selection
    if (newDistroNumber == 6092 && (itemDate <= inHouseDate) && t_6092 == 1) {

        return true;
    }
    else if (newDistroNumber == 6561 && t_6561 == 1 && (itemDate <= consolDate)) {

        return true;
    }
    else if ((newDistroNumber == 6938 && t_6938 == 1 && (itemDate <= consolDate))) {

        return true;
    }
    else if ((newDistroNumber == 7377 && (itemDate <= consolDate))) {

        return true;
    }
    else if ((newDistroNumber == 6022 && t_6022 == 1 && (itemDate <= consolDate))) {
        newSelected = true;
        return true;
    }
    else if (newDistroNumber == 7078 && itemDate <= sevenEightDate && t_7078 == 1) {

        return true;
    }
    else if ((newDistroNumber != 6092 && newDistroNumber != 6022 && newDistroNumber != 6938 && newDistroNumber != 6561 && newDistroNumber != 7078) && itemDate <= otherImportDate) {

        return true;
    }
}
string PadWithZeros(const std::string& input, size_t targetLength) {
    if (input.length() >= targetLength) {
        return input;
    }
    else {
        return std::string(targetLength - input.length(), '0') + input;
    }
}
string ListBoxString(int t_Index, int t_divNbr, string t_CartonNbr) {
    return ("          " + PadWithZeros(twoSevenOne.at(t_Index).GetItemNumber(), 9) + PadWithZeros(to_string(twoSevenOne.at(t_Index).GetStoreNumber()), 5) + PadWithZeros(to_string(t_divNbr), 2) + PadWithZeros(to_string(twoSevenOne.at(t_Index).GetDistroNumber()), 5) + PadWithZeros(t_CartonNbr, 6) + "           " + PadWithZeros(to_string(twoSevenOne.at(t_Index).GetRecMonth()), 2) + "/" + PadWithZeros(to_string(twoSevenOne.at(t_Index).GetRecDay()), 2) + "/" + PadWithZeros(to_string(twoSevenOne.at(t_Index).GetRecYear()), 2));
}