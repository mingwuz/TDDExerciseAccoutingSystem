#include <iostream>
#include <string>
#include <gmock/gmock.h>
#include "gtest/gtest.h"


enum PlanType{

  Gold, Silver
};



TEST(PhoneBillCalculatMethodTwoTest, BillCalculateBasedOnGoldPlanOneLineWithoutExcessMinutes)
{
  int linenumber=1;
  float l_minutesused=989;
  PlanType l_plantype=Gold;
  double l_expectvalue=49.95;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnGoldPlanLineNumberExcessMinutes(l_plantype,linenumber,l_minutesused));
}

TEST(PhoneBillCalculatMethodTwoTest, BillCalculateBasedOnGoldPlanOneLineWithExcessMinutes)
{
  int linenumber=1;
  float l_minutesused=1002;
  PlanType l_plantype=Gold;
  double l_expectvalue=50.85;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnGoldPlanLineNumberExcessMinutes(l_plantype,linenumber,l_minutesused));
}


TEST(PhoneBillCalculatMethodTwoTest, BillCalculateBasedOnSilverPlanOneLineWithoutExcessMinutes)
{
  int linenumber=1;
  float l_minutesused=5;
  PlanType l_plantype=Silver;
  double l_expectvalue=29.95;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnSilverPlanLineNumberExcessMinutes(l_plantype,linenumber,l_minutesused));
}

TEST(PhoneBillCalculatMethodTwoTest, BillCalculateBasedOnSilverPlanOneLineWithExcessMinutes)
{
  int linenumber=1;
  float l_minutesused=510;
  PlanType l_plantype=Silver;
  double l_expectvalue=35.34;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnSilverPlanLineNumberExcessMinutes(l_plantype,linenumber,l_minutesused));
}