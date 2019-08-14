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

#include <alibabacloud/imm/model/GetPhotoProcessTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetPhotoProcessTaskResult::GetPhotoProcessTaskResult() :
	ServiceResult()
{}

GetPhotoProcessTaskResult::GetPhotoProcessTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPhotoProcessTaskResult::~GetPhotoProcessTaskResult()
{}

void GetPhotoProcessTaskResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["SrcUri"].isNull())
		srcUri_ = value["SrcUri"].asString();
	if(!value["TgtUri"].isNull())
		tgtUri_ = value["TgtUri"].asString();
	if(!value["Style"].isNull())
		style_ = value["Style"].asString();
	if(!value["NotifyTopicName"].isNull())
		notifyTopicName_ = value["NotifyTopicName"].asString();
	if(!value["NotifyEndpoint"].isNull())
		notifyEndpoint_ = value["NotifyEndpoint"].asString();
	if(!value["ExternalID"].isNull())
		externalID_ = value["ExternalID"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["FinishTime"].isNull())
		finishTime_ = value["FinishTime"].asString();
	if(!value["Percent"].isNull())
		percent_ = std::stoi(value["Percent"].asString());

}

std::string GetPhotoProcessTaskResult::getStatus()const
{
	return status_;
}

std::string GetPhotoProcessTaskResult::getNotifyEndpoint()const
{
	return notifyEndpoint_;
}

std::string GetPhotoProcessTaskResult::getTaskId()const
{
	return taskId_;
}

std::string GetPhotoProcessTaskResult::getTgtUri()const
{
	return tgtUri_;
}

std::string GetPhotoProcessTaskResult::getFinishTime()const
{
	return finishTime_;
}

int GetPhotoProcessTaskResult::getPercent()const
{
	return percent_;
}

std::string GetPhotoProcessTaskResult::getExternalID()const
{
	return externalID_;
}

std::string GetPhotoProcessTaskResult::getCreateTime()const
{
	return createTime_;
}

std::string GetPhotoProcessTaskResult::getStyle()const
{
	return style_;
}

std::string GetPhotoProcessTaskResult::getNotifyTopicName()const
{
	return notifyTopicName_;
}

std::string GetPhotoProcessTaskResult::getSrcUri()const
{
	return srcUri_;
}

