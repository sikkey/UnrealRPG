// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#include "UnrealRPGPrivatePCH.h"
#include "Role.h"

int32 FAttribute::Value()
{
	int32 val = base * percent + extra;

	// be safe from negative number
	return val > 0 ? val : 0;
}

void FAttribute::AddBase(int32 InAdd)
{
	base += InAdd;

	// be safe from negative number
	if (base < 0)
		base = 0;
}

void FAttribute::AddPercent(float InPercent)
{
	percent += InPercent;

	// be safe from 0
	if (percent < 0.001f)
		percent = 0.001f;
}

void FAttribute::AddExtra(int32 InExtra)
{
	extra += InExtra;
}

int32 FAttPoint::AddPoint(int32 InAdd)
{
	int32 newData = current + InAdd;
	int32 overflow = newData - max.Value();

	return overflow >= 0 ? overflow : 0;
}

void FAttPoint::AddBase(int32 InAdd)
{
	int32 beforeMax = max.Value();
	max.AddBase(InAdd);
	int32 afterMax = max.Value();

	current += afterMax - beforeMax;
}

void FAttPoint::AddPercent(float InPercent)
{
	int32 beforeMax = max.Value();
	max.AddPercent(InPercent);
	int32 afterMax = max.Value();

	current += afterMax - beforeMax;
}

FRole::FRole()
{
	Money = 0;
	Coin = 0;
}
