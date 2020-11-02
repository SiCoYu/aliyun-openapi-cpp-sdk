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

#include <alibabacloud/sae/model/ListAppVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

ListAppVersionsResult::ListAppVersionsResult() :
	ServiceResult()
{}

ListAppVersionsResult::ListAppVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppVersionsResult::~ListAppVersionsResult()
{}

void ListAppVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["PackageVersionEntity"];
	for (auto valueDataPackageVersionEntity : allDataNode)
	{
		PackageVersionEntity dataObject;
		if(!valueDataPackageVersionEntity["Id"].isNull())
			dataObject.id = valueDataPackageVersionEntity["Id"].asString();
		if(!valueDataPackageVersionEntity["CreateTime"].isNull())
			dataObject.createTime = valueDataPackageVersionEntity["CreateTime"].asString();
		if(!valueDataPackageVersionEntity["WarUrl"].isNull())
			dataObject.warUrl = valueDataPackageVersionEntity["WarUrl"].asString();
		if(!valueDataPackageVersionEntity["Type"].isNull())
			dataObject.type = valueDataPackageVersionEntity["Type"].asString();
		if(!valueDataPackageVersionEntity["BuildPackageUrl"].isNull())
			dataObject.buildPackageUrl = valueDataPackageVersionEntity["BuildPackageUrl"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string ListAppVersionsResult::getMessage()const
{
	return message_;
}

std::vector<ListAppVersionsResult::PackageVersionEntity> ListAppVersionsResult::getData()const
{
	return data_;
}

std::string ListAppVersionsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListAppVersionsResult::getCode()const
{
	return code_;
}

bool ListAppVersionsResult::getSuccess()const
{
	return success_;
}
