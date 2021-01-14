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

#include <alibabacloud/bssopenapi/model/QuerySavingsPlansInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QuerySavingsPlansInstanceResult::QuerySavingsPlansInstanceResult() :
	ServiceResult()
{}

QuerySavingsPlansInstanceResult::QuerySavingsPlansInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySavingsPlansInstanceResult::~QuerySavingsPlansInstanceResult()
{}

void QuerySavingsPlansInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allItemsNode = dataNode["Items"]["SavingsPlansDetailResponse"];
	for (auto dataNodeItemsSavingsPlansDetailResponse : allItemsNode)
	{
		Data::SavingsPlansDetailResponse savingsPlansDetailResponseObject;
		if(!dataNodeItemsSavingsPlansDetailResponse["InstanceId"].isNull())
			savingsPlansDetailResponseObject.instanceId = dataNodeItemsSavingsPlansDetailResponse["InstanceId"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["SavingsType"].isNull())
			savingsPlansDetailResponseObject.savingsType = dataNodeItemsSavingsPlansDetailResponse["SavingsType"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["InstanceFamily"].isNull())
			savingsPlansDetailResponseObject.instanceFamily = dataNodeItemsSavingsPlansDetailResponse["InstanceFamily"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["Region"].isNull())
			savingsPlansDetailResponseObject.region = dataNodeItemsSavingsPlansDetailResponse["Region"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["PoolValue"].isNull())
			savingsPlansDetailResponseObject.poolValue = dataNodeItemsSavingsPlansDetailResponse["PoolValue"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["Currency"].isNull())
			savingsPlansDetailResponseObject.currency = dataNodeItemsSavingsPlansDetailResponse["Currency"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["Status"].isNull())
			savingsPlansDetailResponseObject.status = dataNodeItemsSavingsPlansDetailResponse["Status"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["StartTime"].isNull())
			savingsPlansDetailResponseObject.startTime = dataNodeItemsSavingsPlansDetailResponse["StartTime"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["EndTime"].isNull())
			savingsPlansDetailResponseObject.endTime = dataNodeItemsSavingsPlansDetailResponse["EndTime"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["PayMode"].isNull())
			savingsPlansDetailResponseObject.payMode = dataNodeItemsSavingsPlansDetailResponse["PayMode"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["PrepayFee"].isNull())
			savingsPlansDetailResponseObject.prepayFee = dataNodeItemsSavingsPlansDetailResponse["PrepayFee"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["TotalSave"].isNull())
			savingsPlansDetailResponseObject.totalSave = dataNodeItemsSavingsPlansDetailResponse["TotalSave"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["Utilization"].isNull())
			savingsPlansDetailResponseObject.utilization = dataNodeItemsSavingsPlansDetailResponse["Utilization"].asString();
		if(!dataNodeItemsSavingsPlansDetailResponse["Share"].isNull())
			savingsPlansDetailResponseObject.share = dataNodeItemsSavingsPlansDetailResponse["Share"].asString() == "true";
		data_.items.push_back(savingsPlansDetailResponseObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QuerySavingsPlansInstanceResult::getMessage()const
{
	return message_;
}

QuerySavingsPlansInstanceResult::Data QuerySavingsPlansInstanceResult::getData()const
{
	return data_;
}

std::string QuerySavingsPlansInstanceResult::getCode()const
{
	return code_;
}

bool QuerySavingsPlansInstanceResult::getSuccess()const
{
	return success_;
}

