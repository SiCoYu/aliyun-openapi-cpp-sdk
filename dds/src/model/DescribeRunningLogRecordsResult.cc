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

#include <alibabacloud/dds/model/DescribeRunningLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeRunningLogRecordsResult::DescribeRunningLogRecordsResult() :
	ServiceResult()
{}

DescribeRunningLogRecordsResult::DescribeRunningLogRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRunningLogRecordsResult::~DescribeRunningLogRecordsResult()
{}

void DescribeRunningLogRecordsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["LogRecords"];
	for (auto value : allItems)
	{
		LogRecords itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stoi(value["Id"].asString());
		if(!value["CreateTime"].isNull())
			itemsObject.createTime = value["CreateTime"].asString();
		if(!value["Category"].isNull())
			itemsObject.category = value["Category"].asString();
		if(!value["ConnInfo"].isNull())
			itemsObject.connInfo = value["ConnInfo"].asString();
		if(!value["Content"].isNull())
			itemsObject.content = value["Content"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeRunningLogRecordsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeRunningLogRecordsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeRunningLogRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRunningLogRecordsResult::LogRecords> DescribeRunningLogRecordsResult::getItems()const
{
	return items_;
}

std::string DescribeRunningLogRecordsResult::getEngine()const
{
	return engine_;
}

