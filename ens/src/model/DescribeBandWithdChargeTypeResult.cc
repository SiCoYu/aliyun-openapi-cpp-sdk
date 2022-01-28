/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ens/model/DescribeBandWithdChargeTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeBandWithdChargeTypeResult::DescribeBandWithdChargeTypeResult() :
	ServiceResult()
{}

DescribeBandWithdChargeTypeResult::DescribeBandWithdChargeTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBandWithdChargeTypeResult::~DescribeBandWithdChargeTypeResult()
{}

void DescribeBandWithdChargeTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BandWithTypeInfo"].isNull())
		bandWithTypeInfo_ = value["BandWithTypeInfo"].asString();
	if(!value["ChargeContractType"].isNull())
		chargeContractType_ = value["ChargeContractType"].asString();
	if(!value["ChargeCycleInfo"].isNull())
		chargeCycleInfo_ = value["ChargeCycleInfo"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::string DescribeBandWithdChargeTypeResult::getBandWithTypeInfo()const
{
	return bandWithTypeInfo_;
}

std::string DescribeBandWithdChargeTypeResult::getChargeCycleInfo()const
{
	return chargeCycleInfo_;
}

int DescribeBandWithdChargeTypeResult::getCode()const
{
	return code_;
}

std::string DescribeBandWithdChargeTypeResult::getChargeContractType()const
{
	return chargeContractType_;
}

