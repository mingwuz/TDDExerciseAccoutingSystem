#include <iostream>
#include <string>
#include <gmock/gmock.h>
#include "gtest/gtest.h"

enum PlanType{

  Gold, Silver
};


TEST(PhoneBillCalculatMethodThreeTest, BillCalculateBasedOnGoldPlanTwoLineWithoutExcessMinutes)
{
  int linenumber=2;
  float l_minutesused=989;
  PlanType l_plantype=Gold;
  double l_expectvalue=64.45;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnGoldPlanLineNumberExcessMinutes(l_plantype,linenumber,l_minutesused));
}

TEST(PhoneBillCalculatMethodThreeTest, BillCalculateBasedOnGoldPlanTwoLineWithExcessMinutes)
{
  int linenumber=2;
  float l_minutesused=1009;
  PlanType l_plantype=Gold;
  double l_expectvalue=68.5;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnGoldPlanLineNumberExcessMinutes(l_plantype,linenumber,l_minutesused));
}


TEST(PhoneBillCalculatMethodThreeTest, BillCalculateBasedOnGoldPlanFiveLineWithoutExcessMinutes)
{
  int linenumber=5;
  float l_minutesused=989;
  PlanType l_plantype=Gold;
  double l_expectvalue=88.95;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnGoldPlanLineNumberExcessMinutes(l_plantype,linenumber,l_minutesused));
}

TEST(PhoneBillCalculatMethodThreeTest, BillCalculateBasedOnGoldPlanFiveLineWithExcessMinutes)
{
  int linenumber=5;
  float l_minutesused=1005;
  PlanType l_plantype=Gold;
  double l_expectvalue=91.2;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnGoldPlanLineNumberExcessMinutes(l_plantype,linenumber,l_minutesused));
}


TEST(PhoneBillCalculatMethodThreeTest, BillCalculateBasedOnSilverPlanTwoLineWithoutExcessMinutes)
{
  int linenumber=2;
  float l_minutesused=456;
  PlanType l_plantype=Silver;
  double l_expectvalue=51.45;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnSilverPlanLineNumberExcessMinutes(l_plantype,linenumber,l_minutesused));
}


TEST(PhoneBillCalculatMethodThreeTest, BillCalculateBasedOnSilverPlanTwoLineWithExcessMinutes)
{
  int linenumber=2;
  float l_minutesused=506;
  PlanType l_plantype=Silver;
  double l_expectvalue=54.69;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnSilverPlanLineNumberExcessMinutes(l_plantype,linenumber,l_minutesused));
}


TEST(PhoneBillCalculatMethodThreeTest, BillCalculateBasedOnSilverPlanFiveLineWithoutExcessMinutes)
{
  int linenumber=5;
  float l_minutesused=456;
  PlanType l_plantype=Silver;
  double l_expectvalue=82.95;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnSilverPlanLineNumberExcessMinutes(l_plantype,linenumber,l_minutesused));
}

TEST(PhoneBillCalculatMethodThreeTest, BillCalculateBasedOnSilverPlanFiveLineWithExcessMinutes)
{
  int linenumber=5;
  float l_minutesused=610;
  PlanType l_plantype=Silver;
  double l_expectvalue=142.35;
  ASSERT_EQ(l_expectvalue, BillOfPhoneBasedOnSilverPlanLineNumberExcessMinutes(l_plantype,linenumber,l_minutesused));
}
