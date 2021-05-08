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

#include <alibabacloud/alikafka/model/ModifyPartitionNumRequest.h>

using AlibabaCloud::Alikafka::Model::ModifyPartitionNumRequest;

ModifyPartitionNumRequest::ModifyPartitionNumRequest() :
	RpcServiceRequest("alikafka", "2019-09-16", "ModifyPartitionNum")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyPartitionNumRequest::~ModifyPartitionNumRequest()
{}

std::string ModifyPartitionNumRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyPartitionNumRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyPartitionNumRequest::getRegionId()const
{
	return regionId_;
}

void ModifyPartitionNumRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyPartitionNumRequest::getTopic()const
{
	return topic_;
}

void ModifyPartitionNumRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setParameter("Topic", topic);
}

int ModifyPartitionNumRequest::getAddPartitionNum()const
{
	return addPartitionNum_;
}

void ModifyPartitionNumRequest::setAddPartitionNum(int addPartitionNum)
{
	addPartitionNum_ = addPartitionNum;
	setParameter("AddPartitionNum", std::to_string(addPartitionNum));
}

