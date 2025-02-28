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

#include <alibabacloud/imm/model/CreateOfficeConversionTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

CreateOfficeConversionTaskResult::CreateOfficeConversionTaskResult() :
	ServiceResult()
{}

CreateOfficeConversionTaskResult::CreateOfficeConversionTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOfficeConversionTaskResult::~CreateOfficeConversionTaskResult()
{}

void CreateOfficeConversionTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["Percent"].isNull())
		percent_ = std::stoi(value["Percent"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["TgtLoc"].isNull())
		tgtLoc_ = value["TgtLoc"].asString();

}

std::string CreateOfficeConversionTaskResult::getStatus()const
{
	return status_;
}

std::string CreateOfficeConversionTaskResult::getTaskId()const
{
	return taskId_;
}

int CreateOfficeConversionTaskResult::getPercent()const
{
	return percent_;
}

std::string CreateOfficeConversionTaskResult::getCreateTime()const
{
	return createTime_;
}

std::string CreateOfficeConversionTaskResult::getTgtLoc()const
{
	return tgtLoc_;
}

