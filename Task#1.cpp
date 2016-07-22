#include <iostream>
#include <string>
#include <gmock/gmock.h>
#include "gtest/gtest.h"

enum PlanType{

  Gold, Silver
};


TEST(PhoneBillCalculatMethodOneTest, BillCalculateBasedOnGoldPlanWithOneLine)
{
  int linenumber=1;
  PlanType l_plantype=Gold;
  double l_expectvalue=49.5;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnGoldPlanAndLineNumber(l_plantype,linenumber));
}

TEST(PhoneBillCalculatMethodOneTest, BillCalculateBasedOnGoldPlanWithTwoLine)
{
  int linenumber=2;
  PlanType l_plantype=Gold;
  double l_expectvalue=64.5;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnGoldPlanAndLineNumber(l_plantype,linenumber));
}

TEST(PhoneBillCalculatMethodOneTest, BillCalculateBasedOnGoldPlanWithFourLine)
{
  int linenumber=4;
  PlanType l_plantype=Gold;
  double l_expectvalue=64.5;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnGoldPlanAndLineNumber(l_plantype,linenumber));
}


TEST(PhoneBillCalculatMethodOneTest, BillCalculateBasedOnSilverPlanWithOneLine)
{
  int linenumber=1;
  PlanType l_plantype=Silver;
  double l_expectvalue=29.5;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnSilverPlanAndLineNumber(l_plantype,linenumber));
}


TEST(PhoneBillCalculatMethodOneTest, BillCalculateBasedOnSilverPlanWithTwoLine)
{
  int linenumber=2;
  PlanType l_plantype=Silver;
  double l_expectvalue=93.45;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnSilverPlanAndLineNumber(l_plantype,linenumber));
}

TEST(PhoneBillCalculatMethodOneTest, BillCalculateBasedOnSilverPlanWithFiveLine)
{
  int linenumber=5;
  PlanType l_plantype=Silver;
  double l_expectvalue=115.95;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnSilverPlanAndLineNumber(l_plantype,linenumber));
}







