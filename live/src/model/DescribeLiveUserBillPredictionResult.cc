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

#include <alibabacloud/live/model/DescribeLiveUserBillPredictionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveUserBillPredictionResult::DescribeLiveUserBillPredictionResult() :
	ServiceResult()
{}

DescribeLiveUserBillPredictionResult::DescribeLiveUserBillPredictionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveUserBillPredictionResult::~DescribeLiveUserBillPredictionResult()
{}

void DescribeLiveUserBillPredictionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBillPredictionDataNode = value["BillPredictionData"]["BillPredictionDataItem"];
	for (auto valueBillPredictionDataBillPredictionDataItem : allBillPredictionDataNode)
	{
		BillPredictionDataItem billPredictionDataObject;
		if(!valueBillPredictionDataBillPredictionDataItem["Value"].isNull())
			billPredictionDataObject.value = std::stof(valueBillPredictionDataBillPredictionDataItem["Value"].asString());
		if(!valueBillPredictionDataBillPredictionDataItem["Area"].isNull())
			billPredictionDataObject.area = valueBillPredictionDataBillPredictionDataItem["Area"].asString();
		if(!valueBillPredictionDataBillPredictionDataItem["TimeStp"].isNull())
			billPredictionDataObject.timeStp = valueBillPredictionDataBillPredictionDataItem["TimeStp"].asString();
		billPredictionData_.push_back(billPredictionDataObject);
	}
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["BillType"].isNull())
		billType_ = value["BillType"].asString();

}

std::string DescribeLiveUserBillPredictionResult::getBillType()const
{
	return billType_;
}

std::string DescribeLiveUserBillPredictionResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeLiveUserBillPredictionResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeLiveUserBillPredictionResult::BillPredictionDataItem> DescribeLiveUserBillPredictionResult::getBillPredictionData()const
{
	return billPredictionData_;
}

